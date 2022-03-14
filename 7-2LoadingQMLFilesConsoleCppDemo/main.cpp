#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QDebug>
#include <QQmlProperty>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    qDebug() << "Running qml app";
    QQmlEngine engine;
    QQmlComponent component(&engine, "qrc:/main.qml");

    QObject* rootObject = component.create();

    qDebug() << "Object name is :"  << rootObject->objectName();

    //Print the number of children in the qml file
    qDebug() << "Children count :" << rootObject->children().count();

    //Read Child1
    QObject* child1 = rootObject->findChild<QObject*>("Child1");
    if(child1)
    {
        qDebug() << "Age is : " << QQmlProperty::read(child1, "age").toInt();
    }


    return app.exec();
}
