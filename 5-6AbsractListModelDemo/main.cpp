#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
//#include "person.h"
//#include "personmodel.h"
#include "concretepersonmodel.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    ConcretePersonModel mModel;
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("myModel", &mModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if(engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
