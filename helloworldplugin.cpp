#include "helloworldplugin.h"

#include "helloworldapplication.h"

HelloWorldPlugin::HelloWorldPlugin(QObject *parent) :
    WebPlugin(parent)
{

}

QString HelloWorldPlugin::pluginName() const
{
    return QStringLiteral("helloworld");
}

WebApplication *HelloWorldPlugin::createApplication(const QJsonObject &config, WebServer &webServer) const
{
    return new HelloWorldApplication(config, webServer);
}

