{
    depfiles_format = "gcc",
    depfiles = "types.o: test/types.cpp include/preluder/prelude.hpp  include/preluder/types.hpp include/preluder/detail/config.hpp  include/preluder/concepts.hpp include/preluder/bit_types.hpp\
",
    files = {
        "test/types.cpp"
    },
    values = {
        "/usr/bin/g++",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-std=c++23",
            "-Iinclude",
            "-fno-exceptions",
            "-fno-rtti",
            "-Wall",
            "-Wextra",
            "-Wshadow",
            "-Wundef",
            "-Wcast-align",
            "-DNDEBUG"
        }
    }
}