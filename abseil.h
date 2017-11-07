

// Include this file from one .cc file in your project in order
// to compile abseil, first setting the preprocessor defines to compile
// the pieces of the library that you want to use. Currently,
// the only supported module is strings, and its preprocessor
// directive is COMPILE_ABSEIL_STRINGS
//
// Then, include the abseil headers as needed
// throughout your project.
//
// Don't include this file twice, you'll get link errors.

#ifdef COMPILE_ABSEIL_STRINGS
#undef COMPILE_ABSEIL_STRINGS // avoid polluting abseil source

#include "abseil-cpp/absl/strings/substitute.cc"
#include "abseil-cpp/absl/strings/numbers.cc"
#include "abseil-cpp/absl/strings/ascii.cc"
#include "abseil-cpp/absl/strings/internal/memutil.cc"
#include "abseil-cpp/absl/strings/internal/utf8.cc"
#include "abseil-cpp/absl/strings/escaping.cc"

#include "abseil-cpp/absl/base/internal/raw_logging.cc"

#endif // COMPILE_ABSEIL_STRINGS
