--- PROJECT
set_project("preluder")
add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate")
set_languages("c++23")  -- all tests probably gonna use <print>


--- CONFIG
add_includedirs("include/")
add_cxxflags(
    "-fno-exceptions", "-fno-rtti",
    "-Wall", "-Wextra", "-Wshadow",
    "-Wundef", "-Wcast-align"
)


--- TARGETS
target("preluder")
    set_kind("headeronly")
    set_languages("c++20")

    add_headerfiles("include/(preluder/**.hpp)")

target_end()


function test(name)
    target(name) set_languages("c++23") add_files("test/" .. name .. ".cpp") add_deps("preluder")
end

test("types")
