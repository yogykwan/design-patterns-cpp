project(patterns)

set(HEADER_FILES
        abstract_factory.h
        factory_method.h
        singleton.h
        builder.h
        prototype.h
        proxy.h
        adapter.h
        bridge.h)

set(SOURCE_FILES
        abstract_factory.cc
        factory_method.cc
        singleton.cc
        builder.cc
        prototype.cc
        proxy.cc
        adapter.cc
        bridge.cc)

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
