set(HEADERS
    helloworldapplication.h
    helloworldplugin.h
)

set(SOURCES
    helloworldapplication.cpp
    helloworldplugin.cpp
)

set(OTHER_FILES
    helloworldplugin.json
)

add_library(webserver-plugins-helloworldplugin SHARED ${HEADERS} ${SOURCES} ${OTHER_FILES})

set_target_properties(webserver-plugins-helloworldplugin PROPERTIES OUTPUT_NAME helloworldplugin PREFIX "")

target_link_libraries(webserver-plugins-helloworldplugin Qt5::Core Qt5::Network webserverlib)

add_dependencies(webserver-plugins webserver-plugins-helloworldplugin)
