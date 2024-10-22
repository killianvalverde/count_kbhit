project(count_kbhit_test)

include_directories(${PROJECT_SOURCE_DIR}/../../src)

set(GTEST_LIBRARIES gtest gtest_main)

set(COUNT_KBHIT_TEST_SOURCE_FILES
        program_test.cpp
)

add_executable(count_kbhit_test
        main.cpp
        ${COUNT_KBHIT_TEST_SOURCE_FILES}
)

target_link_libraries(count_kbhit_test count_kbhit ${GTEST_LIBRARIES})
