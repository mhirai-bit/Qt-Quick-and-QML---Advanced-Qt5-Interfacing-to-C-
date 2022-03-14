#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "singletonclass.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);


    //    qmlRegisterSingletonType<SingletonClass>("com.blikoon1.singletondata1",1,0,"MyApi",
    //                                             SingletonClass::singletonProvider);

    qmlRegisterSingletonType<SingletonClass>("com.blikoon1.singletondata1",1,0,"MyApi",
                                             [](QQmlEngine *engine, QJSEngine *scriptEngine)->QObject*{
        Q_UNUSED(engine)
        Q_UNUSED(scriptEngine)

        SingletonClass* example = new SingletonClass();
        return example;

    });

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
