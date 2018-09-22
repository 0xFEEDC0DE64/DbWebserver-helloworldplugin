#pragma once

#include "webplugin.h"

class HelloWorldPlugin : public WebPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "dbsoftware.webserver.plugin/1.0" FILE "helloworldplugin.json")
    Q_INTERFACES(WebPlugin)

public:
    HelloWorldPlugin(QObject *parent = Q_NULLPTR);

    QString pluginName() const Q_DECL_OVERRIDE;
    WebApplication *createApplication(const QJsonObject &config, WebServer &webServer) const Q_DECL_OVERRIDE;
};
