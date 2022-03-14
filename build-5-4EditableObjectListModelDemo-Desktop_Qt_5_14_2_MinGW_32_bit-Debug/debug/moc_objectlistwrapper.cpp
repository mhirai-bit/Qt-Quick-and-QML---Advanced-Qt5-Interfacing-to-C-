/****************************************************************************
** Meta object code from reading C++ file 'objectlistwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../5-4EditableObjectListModelDemo/objectlistwrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'objectlistwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ObjectListWrapper_t {
    QByteArrayData data[11];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectListWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectListWrapper_t qt_meta_stringdata_ObjectListWrapper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ObjectListWrapper"
QT_MOC_LITERAL(1, 18, 8), // "setNames"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 5), // "names"
QT_MOC_LITERAL(5, 40, 6), // "setAge"
QT_MOC_LITERAL(6, 47, 3), // "age"
QT_MOC_LITERAL(7, 51, 16), // "setFavoriteColor"
QT_MOC_LITERAL(8, 68, 13), // "favoriteColor"
QT_MOC_LITERAL(9, 82, 7), // "persons"
QT_MOC_LITERAL(10, 90, 9) // "addPerson"

    },
    "ObjectListWrapper\0setNames\0\0index\0"
    "names\0setAge\0age\0setFavoriteColor\0"
    "favoriteColor\0persons\0addPerson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectListWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x02 /* Public */,
       5,    2,   44,    2, 0x02 /* Public */,
       7,    2,   49,    2, 0x02 /* Public */,
       9,    0,   54,    2, 0x02 /* Public */,
      10,    0,   55,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObjectListWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectListWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->setAge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->setFavoriteColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->persons(); break;
        case 4: _t->addPerson(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectListWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ObjectListWrapper.data,
    qt_meta_data_ObjectListWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectListWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectListWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectListWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ObjectListWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
