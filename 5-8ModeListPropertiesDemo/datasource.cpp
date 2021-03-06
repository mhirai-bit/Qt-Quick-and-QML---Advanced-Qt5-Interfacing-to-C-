#include "datasource.h"

DataSource::DataSource(QObject *parent)
    : QObject{parent}
{
//    addPerson(new Person("Jamie Lannister", "red", 33));
//    addPerson(new Person("Marry Lane", "cyan", 26));
//    addPerson(new Person("Victor Trunk", "dodgerblue", 30));
//    addPerson(new Person("Ariel Geery", "blue", 33));
//    addPerson(new Person("Knut Vikran", "lightblue", 26));
}

QList<Person *> DataSource::dataItems()
{
    return mPersons;
}

void DataSource::addPerson(Person *person)
{
    const int index =mPersons.size();
//    beginInsertRows(QModelIndex(), index, index);
    emit prePersonAdded();
    mPersons.append(person);
//    endInsertRows();
    emit postPersonAdded();
}

void DataSource::addPerson()
{
    Person *person = new Person("Added Person", "yellowgreen", 45, this);
    addPerson(person);
}

void DataSource::addPerson(const QString &names, const int &age)
{
    Person *person = new Person(names, "yellowgreen", age);
    addPerson(person);
}

void DataSource::removePerson(int index)
{
//    beginRemoveRows(QModelIndex(), index, index);
    emit prePersonRemoved(index);
    mPersons.removeAt(index);
//    endRemoveRows();
    emit postPersonRemoved();
}

void DataSource::removeLastPerson()
{
    removePerson(mPersons.size()-1);
}

int DataSource::personCount()
{
    return mPersons.count();
}

Person *DataSource::personAt(int index)
{
    return mPersons[index];
}

void DataSource::clearPersons()
{
    mPersons.clear();
}
