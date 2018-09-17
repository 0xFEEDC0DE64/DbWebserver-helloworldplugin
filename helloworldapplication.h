#pragma once

#include "webapplication.h"

class QJsonObject;

class HelloWorldApplication : public WebApplication
{
    Q_OBJECT

public:
    HelloWorldApplication(const QJsonObject &config, QObject *parent = Q_NULLPTR);

    void start() Q_DECL_OVERRIDE;
};
