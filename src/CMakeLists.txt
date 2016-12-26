project(patterns)

set(HEADER_FILES
        abstract_factory.h
        )

set(SOURCE_FILES
        abstract_factory.cc
        )

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
