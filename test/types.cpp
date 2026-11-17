#include <print>
#include "preluder/preluder.hpp"

int main()
{
    constexpr bool same = concepts::is_same<
        std::size_t, types::usize
    >;

    std::println("size_t == usize  -> ({})", same);
}
