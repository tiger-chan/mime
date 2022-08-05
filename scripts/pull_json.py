#!/usr/bin/env python

import urllib.request
import json
import jinja2

VERSION = "1.52"


def get_mime_types():
	l: list[dict] = []
	with urllib.request.urlopen("https://cdn.jsdelivr.net/gh/jshttp/mime-db@{version}/db.json".format(version=VERSION)) as response:
		blob: dict[str, dict] = json.loads(response.read())
		filtered = ((type, blob[type])
		            for type in blob if ("extensions" in blob[type]))
		for item in filtered:
			l.append({
                    "type": item[0],
                    "ext": item[1]["extensions"],
                    "charset": item[1].get("charset", None)
                })

	seen = set()
	return [seen.add(obj["type"]) or obj for obj in l if obj["type"] not in seen]


l = get_mime_types()
# for i in l:
# 	print(i)

l.sort(key=lambda d: d["type"])

types = []
ext = []
ext_pair = []
charset = []
for mime in l:
	types.append(mime["type"])
	ext.extend(mime["ext"])
	ext_pair.extend([{ "ext": x, "type": mime["type"] } for x in mime["ext"]])
	if mime["charset"]:
		charset.append(mime["charset"])


charset = list(set(charset))
charset.sort()
ext.sort()
ext_pair.sort(key=lambda d: d["ext"])

mime_map = []
for i in range(0, len(l)):
	exts = l[i]["ext"]
	ext_indicies = []
	for e in exts:
		j = ext.index(e)
		ext_indicies.append(j)
	ext_indicies.sort()
	mime_map.append({
		"name": str(types[i]).replace("/", "_").replace("+", "_plus_").replace("-", "_minus_").replace(".", "_"),
		"type": types[i],
		"extensions": ext_indicies,
		"charset": charset.index(l[i]["charset"]) if l[i]["charset"] else None
	})
	pass

ext_map = []
for e in range(0, len(ext)):
	obj = ext_pair[e]
	ext_map.append({
		"value": obj["ext"],
		"type": types.index(obj["type"])
		})

import os
template_loader = jinja2.FileSystemLoader(os.path.join(os.path.curdir, "templates"))
env = jinja2.Environment(loader=template_loader)

for name in ["charset.cpp", "mime_extensions_to_type.cpp", "mime_extensions.cpp", "mime_type_to_charset.cpp", "mime_type_to_extensions.cpp", "mime_types.cpp"]:
	template = env.get_template(name + ".jinja")
	rendered = template.render(types=mime_map, extensions=ext_map, charset=charset)
	with open(os.path.join(os.path.curdir, "src", "mime", name), mode="w") as message:
		message.write(rendered)
