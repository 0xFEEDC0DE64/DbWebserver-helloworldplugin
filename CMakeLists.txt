set(HEADERS
    helloworldapplication.h
    helloworldplugin.h
)

set(SOURCES
    helloworldapplication.cpp
    helloworldplugin.cpp
)

add_library(helloworldplugin SHARED ${HEADERS} ${SOURCES})

target_link_libraries(helloworldplugin Qt5::Core Qt5::Network webserverlib)
