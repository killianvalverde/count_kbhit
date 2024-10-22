set(COUNT_KBHIT_SOURCE_FILES
        exception.hpp
        program.cpp
        program.hpp
        program_args.hpp
)

add_library(count_kbhit STATIC ${COUNT_KBHIT_SOURCE_FILES})

set(suffix "$<IF:$<CONFIG:Debug>,d,>")
target_link_libraries(count_kbhit speed${suffix})
