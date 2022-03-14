#ifndef PERSONMODEL_H
#define PERSONMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include "person.h"
#include "datasource.h"

class PersonModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(DataSource* dataSource READ dataSource WRITE setDataSource NOTIFY dataSourceChanged)

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

signals:
    void dataSourceChanged();

private:
//    QList<Person*> mPersons;
    DataSource* mDataSource;
    bool m_signalConnected;

};

#endif // PERSONMODEL_H
