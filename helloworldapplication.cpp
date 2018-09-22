#include "helloworldapplication.h"

#include "httprequest.h"
#include "httpresponse.h"
#include "httpclientconnection.h"

HelloWorldApplication::HelloWorldApplication(const QJsonObject &config, QObject *parent) :
    WebApplication(parent)
{

}

void HelloWorldApplication::start()
{

}

void HelloWorldApplication::handleRequest(HttpClientConnection *connection, const HttpRequest &request)
{
    HttpResponse response;
    response.protocol = request.protocol;
    response.statusCode = HttpResponse::StatusCode::OK;
    connection->sendResponse(response, "Hello from HelloWorldApplication: " + request.path);
}
