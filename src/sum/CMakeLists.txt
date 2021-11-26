add_executable(sum
    main.cpp
)

target_include_directories(sum
    PRIVATE "../sumlib"
)

target_link_libraries(sum
    sumlib
)