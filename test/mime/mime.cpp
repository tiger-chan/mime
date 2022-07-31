#include <gtest/gtest.h>
#include <mime/mime.hpp>

// from_type

TEST(Mime, from_type_exists) {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
}

TEST(Mime, from_type_does_not_exists) {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("not/real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
}

// from_type with index

TEST(Mime, from_type_index_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", 2, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("jpg", ptr);
}

TEST(Mime, from_type_index_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_type("not/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

TEST(Mime, from_type_index_exists_out_of_bounds) {
	const char *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", 5, &ptr);
	ASSERT_EQ(mime::MIME_OUT_OF_RANGE, result);
	ASSERT_STREQ(nullptr, ptr);
}

// from extensions

TEST(Mime, from_ext_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_ext("jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("image/jpeg", ptr);
}

TEST(Mime, from_ext_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_ext("not_real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}
