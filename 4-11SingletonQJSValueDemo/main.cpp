#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <singletonclass.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    //    qmlRegisterSingletonType("com.blikoon.singletondata",1,0,"MyApi",
    //                             SingletonClass::singletonProvider);

    qmlRegisterSingletonType("com.blikoon.singletondata",1,0,"MyApi",
                             [](QQmlEngine *engine, QJSEngine *scriptEngine)->QJSValue{
        int mValue = 5;
        QJSValue jsValue = engine->newObject();
        jsValue.setProperty("someProperty", mValue);

        //Put in an array
        QJSValue mArray = engine->newArray(3);
        for(int i = 1; i <= 3; i++)
        {
            mArray.setProperty(i, i*5);
        }

        jsValue.setProperty("mArray", mArray);

        return jsValue;
    }
    );

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
