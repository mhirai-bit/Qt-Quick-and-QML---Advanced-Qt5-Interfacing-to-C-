#include "personmodel.h"

PersonModel::PersonModel(QObject *parent)
    : QAbstractListModel{parent},
      m_signalConnected{false}
{

}

int PersonModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return mDataSource->dataItems().size();
}

QVariant PersonModel::data(const QModelIndex index, int role) const
{
    if(index.row() < 0 || index.row() >= mDataSource->dataItems().size())
    {
        return QVariant();
    }
    //The index is valid
    Person * person = mDataSource->dataItems().at(index.row());
    if(role == NamesRole)
        return person->names();
    if(role == FavoriteColorRole)
        return person->favoriteColor();
    if(role == AgeRole)
        return person->age();
    return QVariant();
}

bool PersonModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    Person * person = mDataSource->dataItems().at(index.row());
    bool somethingChanged = false;

    switch(role){
    case NamesRole:
    {
        if(person->names() != value.toString())
        {
            person->setNames(value.toString());
            somethingChanged = true;
        }
    }
        break;
    case FavoriteColorRole:
    {
        if(person->favoriteColor() != value.toString())
        {
            person->setFavoriteColor(value.toString());
            somethingChanged = true;
        }
    }
        break;
    case AgeRole:
    {
        if(person->age() != value.toInt())
        {
            person->setAge(value.toInt());
            somethingChanged = true;
        }
    }
        break;
    }

    if(somethingChanged)
    {
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }
    return false;

}

Qt::ItemFlags PersonModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
        return Qt::NoItemFlags;
    return Qt::ItemIsEditable;
}

QHash<int, QByteArray> PersonModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NamesRole] = "names";
    roles[FavoriteColorRole] = "favoriteColor";
    roles[AgeRole] = "age";
    return roles;
}

DataSource *PersonModel::dataSource() const
{
    return mDataSource;
}

void PersonModel::setDataSource(DataSource *newDataSource)
{
//    if (mDataSource == newDataSource)
//        return;
//    mDataSource = newDataSource;
//    emit dataSourceChanged();
    beginResetModel();
    if(mDataSource && m_signalConnected)
        mDataSource->disconnect(this);

    mDataSource = newDataSource;

    connect(mDataSource, &DataSource::prePersonAdded, this, [=](){
        const int index = mDataSource->dataItems().size();
        beginInsertRows(QModelIndex(), index, index);
    });
    connect(mDataSource, &DataSource::postPersonAdded, this, [=](){
        endInsertRows();
    });
    connect(mDataSource, &DataSource::prePersonRemoved, this, [=](int index){
        beginRemoveRows(QModelIndex(), index, index);
    });
    connect(mDataSource, &DataSource::postPersonRemoved, this, [=](){
        endRemoveRows();
    });

    m_signalConnected = true;

    endResetModel();
}
