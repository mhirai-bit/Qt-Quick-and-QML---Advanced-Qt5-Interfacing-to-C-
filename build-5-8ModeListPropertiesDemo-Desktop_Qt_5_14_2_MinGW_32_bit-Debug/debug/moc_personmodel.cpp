/****************************************************************************
** Meta object code from reading C++ file 'personmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../5-8ModeListPropertiesDemo/personmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PersonModel_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PersonModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PersonModel_t qt_meta_stringdata_PersonModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PersonModel"
QT_MOC_LITERAL(1, 12, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 28, 7), // "persons"
QT_MOC_LITERAL(3, 36, 17), // "dataSourceChanged"
QT_MOC_LITERAL(4, 54, 0), // ""
QT_MOC_LITERAL(5, 55, 14), // "personsChanged"
QT_MOC_LITERAL(6, 70, 9), // "addPerson"
QT_MOC_LITERAL(7, 80, 5), // "names"
QT_MOC_LITERAL(8, 86, 13), // "favoriteColor"
QT_MOC_LITERAL(9, 100, 3), // "age"
QT_MOC_LITERAL(10, 104, 14), // "removeLastItem"
QT_MOC_LITERAL(11, 119, 10), // "dataSource"
QT_MOC_LITERAL(12, 130, 11), // "DataSource*"
QT_MOC_LITERAL(13, 142, 24) // "QQmlListProperty<Person>"

    },
    "PersonModel\0DefaultProperty\0persons\0"
    "dataSourceChanged\0\0personsChanged\0"
    "addPerson\0names\0favoriteColor\0age\0"
    "removeLastItem\0dataSource\0DataSource*\0"
    "QQmlListProperty<Person>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PersonModel[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x06 /* Public */,
       5,    0,   37,    4, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    3,   38,    4, 0x02 /* Public */,
      10,    0,   45,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x0049510b,
       2, 0x80000000 | 13, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void PersonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PersonModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataSourceChanged(); break;
        case 1: _t->personsChanged(); break;
        case 2: _t->addPerson((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 3: _t->removeLastItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PersonModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonModel::dataSourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PersonModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PersonModel::personsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataSource* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PersonModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DataSource**>(_v) = _t->dataSource(); break;
        case 1: *reinterpret_cast< QQmlListProperty<Person>*>(_v) = _t->persons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PersonModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDataSource(*reinterpret_cast< DataSource**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PersonModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_PersonModel.data,
    qt_meta_data_PersonModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PersonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PersonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PersonModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PersonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PersonModel::dataSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PersonModel::personsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
