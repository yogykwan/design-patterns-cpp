project(patterns)

set(HEADER_FILES
        abstract_factory.h
        factory_method.h
        )

set(SOURCE_FILES
        abstract_factory.cc
        factory_method.cc
        )

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
