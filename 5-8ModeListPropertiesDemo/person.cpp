#include "person.h"

Person::Person(QObject *parent)
    : m_names("None"), m_favoriteColor("None"), m_age(0)
{
    qDebug() << "Creating person object for " << m_names;
}

Person::Person(const QString &names, const QString &favoritecolor, const int &age, QObject *parent)
    :QObject(parent), m_names(names), m_favoriteColor(favoritecolor), m_age(age)
{
    qDebug() << "Creating person object for " << m_names;
}

const QString &Person::names() const
{
    return m_names;
}

void Person::setNames(const QString &newNames)
{
    if (m_names == newNames)
        return;
    m_names = newNames;
//    emit namesChanged();
}

const QString &Person::favoriteColor() const
{
    return m_favoriteColor;
}

void Person::setFavoriteColor(const QString &newFavoriteColor)
{
    if (m_favoriteColor == newFavoriteColor)
        return;
    m_favoriteColor = newFavoriteColor;
//    emit favoriteColorChanged();
}

int Person::age() const
{
    return m_age;
}

void Person::setAge(int newAge)
{
    if (m_age == newAge)
        return;
    m_age = newAge;
//    emit ageChanged();
}
