#if !defined(TCM_FWD_HPP__)
#	define TCM_FWD_HPP__

#	include "config/macro.hpp"

namespace mime {
	using uint8 = unsigned char;
	using int32 = int;
	using uint32 = unsigned int;

	template<typename T>
	static constexpr T min(const T &x, const T &y) {
		return x < y ? x : y;
	}

	template<typename T>
	static constexpr T max(const T &x, const T &y) {
		return x > y ? x : y;
	}
}    // namespace mime

#endif    // TCM_FWD_HPP__
