#pragma once
#include "detail/config.hpp"

#if defined __BITINT_MAXWIDTH__


#define BIT_INT _BitInt


#define PRELUDER_GEN_SIGNED_INTEGER_BIT_TYPE($NAME, $BITS)                \
    class $NAME {                                                \
        BIT_INT(32) m = {};                                      \
    public:                                                      \
        constexpr $NAME () noexcept = default;                   \
        constexpr $NAME (BIT_INT(32) x) noexcept: m(x) {}        \
                                                                 \
        constexpr operator BIT_INT(32)() noexcept { return m; }  \
    }                                                            \

#define PRELUDER_GEN_UNSIGNED_INTEGER_BIT_TYPE($NAME, $BITS)                       \
    class $NAME {                                                         \
        unsigned BIT_INT(32) m = {};                                      \
    public:                                                               \
        constexpr $NAME () noexcept = default;                            \
        constexpr $NAME (unsigned BIT_INT(32) x) noexcept: m(x) {}        \
        constexpr $NAME (BIT_INT(32) x) = delete;                         \
                                                                          \
        constexpr operator unsigned BIT_INT(32)() noexcept { return m; }  \
    }                                                                     \



namespace prelude::bit_types
{

PRELUDER_GEN_SIGNED_INTEGER_BIT_TYPE(int8, 8);
PRELUDER_GEN_SIGNED_INTEGER_BIT_TYPE(int16, 16);
PRELUDER_GEN_SIGNED_INTEGER_BIT_TYPE(int32, 32);
PRELUDER_GEN_SIGNED_INTEGER_BIT_TYPE(int64, 32);

PRELUDER_GEN_UNSIGNED_INTEGER_BIT_TYPE(uint8, 8);
PRELUDER_GEN_UNSIGNED_INTEGER_BIT_TYPE(uint16, 16);
PRELUDER_GEN_UNSIGNED_INTEGER_BIT_TYPE(uint32, 32);
PRELUDER_GEN_UNSIGNED_INTEGER_BIT_TYPE(uint64, 64);

}



#endif  // defined __BITINT_MAXWIDTH__
