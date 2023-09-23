#include "application_engine.h"
#include "operation.h"
#include "processfactory.h"
#include "api_key.h"

#include <QApplication>
#include <QCommandLineParser>


int main(int argc, char *argv[])
{
    //Main app
    QApplication app(argc, argv);

    //Read API Key or register it
    ApiKey apikey = ApiKey();
    apikey.receiveKey();

    //Register QML Types
    qmlRegisterType<ProcessFactory>("ProcessFactory", 1, 0, "ProcessFactory");
    qmlRegisterUncreatableType<Operation>("Operation", 1, 0, "Operation", "Not creatable as it is an enum type");

    //Engine that binds c++ and qml files
    ApplicationEngine engine = ApplicationEngine();
    QObject::connect(&apikey,SIGNAL(keySetSignal(QString)),&engine,SLOT(setup(QString)));

    return app.exec();
}
