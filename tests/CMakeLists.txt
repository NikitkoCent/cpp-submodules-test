add_executable(sumlib_tests
    tests_all.cpp
)

target_include_directories(sumlib_tests
    PRIVATE "../src/sumlib"
)

target_link_libraries(sumlib_tests
    sumlib
    gtest
    gmock_main
)