project(cpp-submodules-test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_REQUIRED ON)

add_subdirectory(src/sum)
add_subdirectory(src/sumlib)

add_subdirectory(third-party/googletest)
add_subdirectory(tests)