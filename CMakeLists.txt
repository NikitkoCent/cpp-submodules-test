project(cpp-submodules-test CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_REQUIRED ON)

add_executable(sum
    func.h
    func.cpp
    main.cpp
)