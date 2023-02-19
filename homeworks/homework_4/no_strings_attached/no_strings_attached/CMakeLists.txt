if(BUILD_TESTING)
    add_executable(split_string_test split_string_test.cpp)
    target_link_libraries(split_string_test PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(split_string_test)
endif()