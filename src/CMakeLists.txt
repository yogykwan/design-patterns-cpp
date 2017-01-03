project(patterns)

set(HEADER_FILES
        abstract_factory.h factory_method.h singleton.h builder.h
        prototype.h proxy.h adapter.h bridge.h
        facade.h decorator.h flyweight.h composite.h
        chain_of_responsibility.h strategy.h state.h observer.h
        aggregate.h memento.h  command.h  template_method.h
        mediator.h interpreter.h visitor.h)

set(SOURCE_FILES
        abstract_factory.cc factory_method.cc singleton.cc builder.cc
        prototype.cc proxy.cc adapter.cc bridge.cc
        facade.cc decorator.cc flyweight.cc composite.cc
        chain_of_responsibility.cc strategy.cc state.cc observer.cc
        aggregate.cc memento.cc command.cc template_method.cc
        mediator.cc interpreter.cc visitor.cc)

add_library(patterns STATIC ${SOURCE_FILES} ${HEADER_FILES})
