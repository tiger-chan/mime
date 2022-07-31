#include <gtest/gtest.h>
#include <mime/mime.hpp>

class MimeSourceSuite : public ::testing::Test {
public:
	MimeSourceSuite()
		: mime_src{new mime::source{
			sizeof(types) / sizeof(types[0])    // types_size
			, types    // types
			, sizeof(ext) / sizeof(ext[0])    // extensions_size
			, ext    // extensions
			, 0    // charsets_size
			, nullptr    // charsets
			, sizeof(ext_to_types) / sizeof(ext_to_types[0])    // ext_to_types_size
			, ext_to_types    // ext_to_types
			, sizeof(types_to_ext) / sizeof(types_to_ext[0])    // types_to_ext_size
			, types_to_ext    // types_to_ext
		}} {
	}

	virtual ~MimeSourceSuite() {
	}

	void SetUp() override {
		mime::set_source(mime_src);
	}

	void TearDown() override {
		mime::set_source(nullptr);
		delete mime_src;
	}

	mime::source *mime_src;

	inline static const char *types[] = { "custom/real" };
	inline static const char *ext[] = { "custom" };
	inline static const int ext_to_types[] = { 0 };
	inline static const int ext_mapped[] = { 0 };
	inline static const mime::mime_ext types_to_ext[] = { { ext_mapped, sizeof(ext_mapped) / sizeof(ext_mapped[0]) } };
};

// from_type

TEST_F(MimeSourceSuite, from_type_fallback_exists) {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
}

TEST_F(MimeSourceSuite, from_type_exists) {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("custom/real", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
}

TEST_F(MimeSourceSuite, from_type_does_not_exists) {
	const mime::mime_ext *ptr = nullptr;
	auto result = mime::from_type("not/real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
}

// from_type with index

TEST_F(MimeSourceSuite, from_type_index_fallback_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", 2, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("jpg", ptr);
}

TEST_F(MimeSourceSuite, from_type_index_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_type("custom/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("custom", ptr);
}

TEST_F(MimeSourceSuite, from_type_index_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_type("not/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

TEST_F(MimeSourceSuite, from_type_index_fallback_exists_out_of_bounds) {
	const char *ptr = nullptr;
	auto result = mime::from_type("image/jpeg", 5, &ptr);
	ASSERT_EQ(mime::MIME_OUT_OF_RANGE, result);
	ASSERT_STREQ(nullptr, ptr);
}

// from extensions

TEST_F(MimeSourceSuite, from_ext_fallback_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_ext("jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("image/jpeg", ptr);
}

TEST_F(MimeSourceSuite, from_ext_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_ext("custom", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("custom/real", ptr);
}

TEST_F(MimeSourceSuite, from_ext_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::from_ext("not_real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}
