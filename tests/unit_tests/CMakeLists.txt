include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(SOURCE_FILES
        abstract_factory_test.cc factory_method_test.cc singleton_test.cc builder_test.cc
        prototype_test.cc proxy_test.cc adapter_test.cc bridge_test.cc
        facade_test.cc decorator_test.cc flyweight_test.cc composite_test.cc
        chain_of_responsibility_test.cc strategy_test.cc state_test.cc observer_test.cc
        aggregate_test.cc memento_test.cc command_test.cc template_method_test.cc
        mediator_test.cc interpreter_test.cc visitor_test.cc)
add_executable(patterns_test ${SOURCE_FILES})

target_link_libraries(patterns_test gtest gtest_main)
target_link_libraries(patterns_test patterns)

