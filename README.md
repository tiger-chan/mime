# mime
Small C++ library for mime type identification using file extensions

# Table of Contents
* [Usage](#usage)
  * [Conan](#conan)
  * [CMake](#cmake)
* [Missing Types](#missing-types)
* [API](#api)
* [Contributing](#contributing)
* [License](#license)

## Usage

### Conan

mime can be installed using [Conan](http://docs.conan.io/en/latest/)

#### Add To Your Local Conan Cache

```console
foo@bar:~$ git clone https://github.com/tiger-chan/mime.git
foo@bar:~$ cd mime
foo@bar:~/mime$ mkdir build
foo@bar:~/mime$ cd build && conan create .. mime/[~= 0.1]@tiger-chan/stable
```

#### Conan Install the package

```console
foo@bar:~/your-proj$ conan install mime/[~= 0.1]@tiger-chan/stable
```

### Conan Project Setup

If you handle multiple dependencies in your project is better to add a *conanfile.txt*
```txt
[requires]
mime/[~= 0.1]@tiger-chan/stable

[generators]
txt
```

Complete the installation of requirements for your project running:
```console
foo@bar:~/your-proj$ mkdir build && cd build && conan install ..
```

> _**NOTE:**_ It is recommended not to run the install/build commands in the project directory.  This is because conan generates many files which are tied to specific build configurations.

### CMake

To use `mime` from a [CMake](https://cmake.org/) project, just link an existing target to the
`mime::mime` alias.

The library offers everything you need for locating (as in `find_package`),
embedding (as in `add_subdirectory`), or fetching (as in `FetchContent`).

## Missing Types

The source of truth for the MIME types are read and generated from [mime-db](https://github.com/jshttp/mime-db).  If a type is missing please create a PR there.  You can also create a issue here for the library to update list once the Once it has been merged in to [mime-db](https://github.com/jshttp/mime-db) PR has been completed.

> _**NOTE:**_
The method of search relies on file extensions, as such the list is filtered to only those with extensions. 

## API

The API can be accessed through the inclusion of a single header (`mime.hpp`).
```cpp
#include <mime/mime.hpp>
```

The API follows a functional approach for functions.

* No (de)allocations are made by the library.
* All functions will will request that you provide destination (pointer or buffer) for the result.
* There are no instances of of throwing exceptions;
* Because, All functions will provide a state result e.g., `MIME_SUCCESS`, `MIME_NO_MATCH`, etc...

## Contributing

Requests for features, PRs, suggestions and feedback are very welcome.

see [CONTRIBUTING](docs/CONTRIBUTING.md) for more information.

## License

Code and documentation Copyright (c) 2022 Anthony Young.
Code released under [MIT](LICENSE)
