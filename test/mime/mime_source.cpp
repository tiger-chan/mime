#include <gtest/gtest.h>
#include <mime/mime.hpp>

class MimeSourceSuite : public ::testing::Test {
public:
	MimeSourceSuite() {
	}

	virtual ~MimeSourceSuite() {
	}

	void SetUp() override {
		mime::set_source(get_source());
	}

	void TearDown() override {
		mime::set_source(nullptr);
	}

	mime::source *mime_src;

	static const mime::source *get_source() {
		static const char *types[] = { "custom/real", "custom/type" };
		static const char *ext[] = { "custom", "custom2" };
		static const char *charset[] = { "custom-8" };
		static const int ext_to_types[] = { 0 };
		static const int ext_mapped[] = { 0 };
		static const mime::mime_ext types_to_ext[] = { { ext_mapped, sizeof(ext_mapped) / sizeof(ext_mapped[0]) } };
		static const int types_to_charset[] = { 0, mime::UNSET_CHARSET };

		static const mime::source src{
			sizeof(types) / sizeof(types[0])    // types_size
			, types    // types
			, sizeof(ext) / sizeof(ext[0])    // extensions_size
			, ext    // extensions
			, sizeof(charset) / sizeof(charset[0])    // charsets_size
			, charset    // charsets
			, sizeof(ext_to_types) / sizeof(ext_to_types[0])    // ext_to_types_size
			, ext_to_types    // ext_to_types
			, sizeof(types_to_ext) / sizeof(types_to_ext[0])    // types_to_ext_size
			, types_to_ext    // types_to_ext
			, sizeof(types_to_charset) / sizeof(types_to_charset[0]) // types_to_charset_size
			, types_to_charset // types_to_charset
		};

		return &src;
	}
};

// extension with index

TEST_F(MimeSourceSuite, from_type_index_fallback_exists) {
	const char *ptr = nullptr;
	auto result = mime::extension("image/jpeg", 2, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("jpg", ptr);
}

TEST_F(MimeSourceSuite, from_type_index_exists) {
	const char *ptr = nullptr;
	auto result = mime::extension("custom/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("custom", ptr);
}

TEST_F(MimeSourceSuite, from_type_index_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::extension("not/real", 0, &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

TEST_F(MimeSourceSuite, from_type_index_fallback_exists_out_of_bounds) {
	const char *ptr = nullptr;
	auto result = mime::extension("image/jpeg", 5, &ptr);
	ASSERT_EQ(mime::MIME_OUT_OF_RANGE, result);
	ASSERT_STREQ(nullptr, ptr);
}

// from extensions

TEST_F(MimeSourceSuite, from_ext_fallback_exists) {
	const char *ptr = nullptr;
	auto result = mime::type("jpeg", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("image/jpeg", ptr);
}

TEST_F(MimeSourceSuite, from_ext_exists) {
	const char *ptr = nullptr;
	auto result = mime::type("custom", &ptr);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ("custom/real", ptr);
}

TEST_F(MimeSourceSuite, from_ext_does_not_exists) {
	const char *ptr = nullptr;
	auto result = mime::type("not_real", &ptr);
	ASSERT_EQ(mime::MIME_NO_MATCH, result);
	ASSERT_EQ(ptr, nullptr);
}

// content_type

TEST_F(MimeSourceSuite, content_type_no_charset) {
	char buffer[26]{};
	int written{ 0 };
	auto result = mime::content_type("custom/type", buffer, &written);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ(buffer, "Content-Type: custom/type");
}

TEST_F(MimeSourceSuite, content_type_with_charset) {
	char buffer[44]{};
	int written{ 0 };
	auto result = mime::content_type("custom/real", buffer, &written);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ(buffer, "Content-Type: custom/real; charset=custom-8");
}

TEST_F(MimeSourceSuite, content_type_fallback_with_charset) {
	char buffer[52]{};
	int written{ 0 };
	auto result = mime::content_type("application/javascript", buffer, &written);
	ASSERT_EQ(mime::MIME_SUCCESS, result);
	ASSERT_STREQ(buffer, "Content-Type: application/javascript; charset=utf-8");
}
