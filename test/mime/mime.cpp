#include <gtest/gtest.h>
#include <mime/mime.hpp>

// extension

TEST(Mime, from_type_index_exists) {
	const char *ptr = nullptr;
	auto result = mime::extension("image/jpeg", 2, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("jpg", ptr);
}

TEST(Mime, from_type_index_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::extension("not/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

TEST(Mime, from_type_index_exists_out_of_bounds) {
	const char *ptr = nullptr;
	auto result = mime::extension("image/jpeg", 5, &ptr);
	ASSERT_EQ(mime::MIME_OUT_OF_RANGE, result);
	ASSERT_STREQ(nullptr, ptr);
}

// from extensions

TEST(Mime, from_ext_exists) {
	const char *ptr = nullptr;
	auto result = mime::type("jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("image/jpeg", ptr);
}

TEST(Mime, from_ext_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::type("not_real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

// content_type

TEST(Mime, content_type_no_charset) {
	char buffer[25]{};
	int written{0};
	auto result = mime::content_type("image/jpeg", buffer, &written);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ(buffer, "Content-Type: image/jpeg");
}

TEST(Mime, content_type_with_charset) {
	char buffer[52]{};
	int written{0};
	auto result = mime::content_type("application/javascript", buffer, &written);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ(buffer, "Content-Type: application/javascript; charset=utf-8");
}
