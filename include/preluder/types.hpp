#pragma once
#include "detail/config.hpp"


namespace types
{

using usize  = __SIZE_TYPE__;
using isize  = __PTRDIFF_TYPE__;

using char8 = signed char;
using uchar8 = unsigned char;
using char16 = char16_t;
using char32 = char32_t;

using int8   = __INT8_TYPE__;
using int16  = __INT16_TYPE__;
using int32  = __INT32_TYPE__;
using int64  = __INT64_TYPE__;

using uint8  = __UINT8_TYPE__;
using uint16 = __UINT16_TYPE__;
using uint32 = __UINT32_TYPE__;
using uint64 = __UINT64_TYPE__;

using real32 = float;
using real64 = double;

using nullptr_t = decltype(nullptr);


static_assert(sizeof(uchar8) == 1, "uchar8 must be 1 byte");
static_assert(sizeof(char8) == 1, "char8 must be 1 byte");
static_assert(sizeof(int8) == 1, "int8 must be 1 byte");
static_assert(sizeof(uint8) == 1, "uint8 must be 1 byte");

static_assert(sizeof(char16) == 2, "char16 must be 2 bytes");
static_assert(sizeof(int16) == 2, "int16 must be 2 bytes");
static_assert(sizeof(uint16) == 2, "uint16 must be 2 bytes");

static_assert(sizeof(char32) == 4, "char32 must be 4 bytes");
static_assert(sizeof(int32) == 4, "int32 must be 4 bytes");
static_assert(sizeof(uint32) == 4, "uint32 must be 4 bytes");
static_assert(sizeof(real32) == 4, "real32 must be 4 bytes");

static_assert(sizeof(int64) == 8, "int64 must be 8 bytes");
static_assert(sizeof(uint64) == 8, "uint64 must be 8 bytes");
static_assert(sizeof(real64) == 8, "real64 must be 8 bytes");

}
