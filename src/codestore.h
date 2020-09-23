#pragma once

#if defined(WIN32) || defined(WIN64)
#ifdef TEST_LIB_EXPORTS
#define TESTLIB_API __declspec(dllexport)
#else
#define TESTLIB_API __declspec(dllimport)
#endif
#else
#define TESTLIB_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

	TESTLIB_API void print_hello();

	TESTLIB_API const char* print_string(const char* str);

	TESTLIB_API int add_two_int(int a, int b);

	TESTLIB_API float substract_two_float(float a, float b);

	TESTLIB_API int multi_two_int(int* a, int* b);

#ifdef __cplusplus
}
#endif
