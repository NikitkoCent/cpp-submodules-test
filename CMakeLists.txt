project(cpp-submodules-test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_REQUIRED ON)

add_executable(sum
    func.h
    func.cpp
    main.cpp
)

add_subdirectory(third-party/googletest)

add_executable(sumtests
    func.cpp
    func.h
    tests/tests_all.cpp
)

target_link_libraries(sumtests
    gtest
    gmock_main
)