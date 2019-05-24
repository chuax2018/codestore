#pragma once

#if defined(WIN32) || defined(WIN64)
#ifdef TEST_LIB_EXPORTS
#define TESTLIB_API __declspec(dllexport)
#else
#define TESTLIB_API __declspec(dllimport)
#endif
#else
#define TEST_LIB_API
#endif

#ifdef __cplusplus
extern "C" {
#endif

	TESTLIB_API void print_hello();

#ifdef __cplusplus
}
#endif
