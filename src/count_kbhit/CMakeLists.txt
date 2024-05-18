set(COUNT_KBHIT_LIB_SOURCE_FILES
        exception.hpp
        program.cpp
        program.hpp
        program_args.hpp
)

add_library(libcount_kbhit STATIC ${COUNT_KBHIT_LIB_SOURCE_FILES})

target_link_libraries(libcount_kbhit
        -lspeed
        -lstdc++fs
)
