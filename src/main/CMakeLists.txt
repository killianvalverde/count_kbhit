set(COUNT_KBHIT_SOURCE_FILES
        main.cpp
)

add_executable(count_kbhit ${COUNT_KBHIT_SOURCE_FILES})
target_link_libraries(count_kbhit libcount_kbhit)
install(TARGETS count_kbhit DESTINATION bin)
