#include <gtest/gtest.h>
#include <mime/mime.hpp>

TEST(Mime, get_extension) {
	char arr[255]{};
	tcmime::get_extension_type("application/pdf", 0, arr);
	ASSERT_EQ(arr, "pdf");
}