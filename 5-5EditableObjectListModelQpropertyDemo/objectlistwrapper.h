#ifndef OBJECTLISTWRAPPER_H
#define OBJECTLISTWRAPPER_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "person.h"

class ObjectListWrapper : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QObject*> mypersons READ mypersons WRITE setmypersons NOTIFY mypersonsChanged)
public:
    explicit ObjectListWrapper(QObject *parent = nullptr);
    bool initialize();
    Q_INVOKABLE void setNames(int index, const QString &names);
    Q_INVOKABLE void setAge(int index, const int &age);
    Q_INVOKABLE void setFavoriteColor(int index, const QString &favoriteColor);

    Q_INVOKABLE const QList<QObject *> &persons() const;
    Q_INVOKABLE void addPerson();

    const QList<QObject *> &mypersons() const;
    void setmypersons(const QList<QObject *> &newMypersons);

signals:
    void mypersonsChanged(QList<QObject*> mPersons);

private:
    void populateModelWithData();
    void resetModel();
    void printPersons();
    QList<QObject*> mPersons; //Thishould be QObject*, Prson* is not going to work in QML
    QQmlApplicationEngine mEngine;
//    QList<QObject *> m_mypersons;
};

#endif // OBJECTLISTWRAPPER_H
