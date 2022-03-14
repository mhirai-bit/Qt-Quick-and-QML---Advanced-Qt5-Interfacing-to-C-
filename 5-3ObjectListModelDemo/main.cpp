#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "person.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QList<QObject *> personList;

    QQmlApplicationEngine engine;

    personList.append(new Person("John Doe C++", "green", 32, &engine));
    personList.append(new Person("Mary Green", "blue", 23, &engine));
    personList.append(new Person("Mitch Nathson", "dodgerblue", 30, &engine));
    personList.append(new Person("Daniel Sten", "red", 67, &engine));

    engine.rootContext()->setContextProperty("personModel", QVariant::fromValue(personList));
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
