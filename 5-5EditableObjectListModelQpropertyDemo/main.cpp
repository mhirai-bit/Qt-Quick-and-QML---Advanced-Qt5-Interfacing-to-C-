#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "person.h"
#include "objectlistwrapper.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    ObjectListWrapper wrapper;
    if(!wrapper.initialize())
        return -1;

    return app.exec();
}
