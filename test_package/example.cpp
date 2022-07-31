#include <mime/mime.hpp>

int main() {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", &ptr);
}
