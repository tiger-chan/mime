#include <mime/mime.hpp>

int main() {
	const char *ptr = nullptr;
	auto result = mime::extension("image/jpeg", 0, &ptr);
}
