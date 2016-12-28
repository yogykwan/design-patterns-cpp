project(patterns)

set(HEADER_FILES
        abstract_factory.h
        factory_method.h
        singleton.h)

set(SOURCE_FILES
        abstract_factory.cc
        factory_method.cc
        singleton.cc)

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
