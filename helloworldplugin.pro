QT += core network

DBLIBS += webserverlib

HEADERS += helloworldplugin.h \
    helloworldapplication.h

SOURCES += helloworldplugin.cpp \
    helloworldapplication.cpp

FORMS +=

RESOURCES +=

TRANSLATIONS +=

OTHER_FILES += helloworldplugin.json

include(../plugin.pri)
