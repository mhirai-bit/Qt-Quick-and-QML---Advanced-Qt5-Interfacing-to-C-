#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QQmlListProperty>
#include "person.h"
#include "datasource.h"

class PersonModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(DataSource* dataSource READ dataSource WRITE setDataSource NOTIFY dataSourceChanged)
    Q_PROPERTY(QQmlListProperty<Person> persons READ persons NOTIFY personsChanged)
    Q_CLASSINFO("DefaultProperty", "persons");

    enum PersonRoles {
        NamesRole = Qt::UserRole + 1,
        FavoriteColorRole,
        AgeRole
    };

public:
    explicit PersonModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    Qt::ItemFlags flags(const QModelIndex& index) const;
    QHash<int, QByteArray> roleNames() const;

    DataSource *dataSource() const;
    void setDataSource(DataSource *newDataSource);

    const QQmlListProperty<Person> &persons();

    //QML Helper Methods
    Q_INVOKABLE void addPerson(const QString &names, const QString &favoriteColor, const int &age);
    Q_INVOKABLE void removeLastItem();

signals:
    void dataSourceChanged();

    void personsChanged();

private:

    //Methods
    static void appendPerson(QQmlListProperty<Person>*, Person*);
    static int personCount(QQmlListProperty<Person>*);
    static Person* person(QQmlListProperty<Person>*, int);
    static void clearPersons(QQmlListProperty<Person>*);

//    QList<Person*> mPersons;
    DataSource* mDataSource;
    bool m_signalConnected;

    QQmlListProperty<Person> m_persons;
};

#endif // PERSONMODEL_H
