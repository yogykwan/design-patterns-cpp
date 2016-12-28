include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES
        abstract_factory_test.cc
        factory_method_test.cc
        singleton_test.cc
        builder_test.cc
        prototype_test.cc)
add_executable(patterns_test ${SOURCE_FILES})

target_link_libraries(patterns_test gtest gtest_main)
target_link_libraries(patterns_test patterns)

