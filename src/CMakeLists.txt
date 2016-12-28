project(patterns)

set(HEADER_FILES
        abstract_factory.h
        factory_method.h
        singleton.h
        builder.h
        prototype.h)

set(SOURCE_FILES
        abstract_factory.cc
        factory_method.cc
        singleton.cc
        builder.cc
        prototype.cc)

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
