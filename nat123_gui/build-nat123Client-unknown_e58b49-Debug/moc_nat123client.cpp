/****************************************************************************
** Meta object code from reading C++ file 'nat123client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nat123Client/nat123client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nat123client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_nat123client_t {
    QByteArrayData data[8];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nat123client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nat123client_t qt_meta_stringdata_nat123client = {
    {
QT_MOC_LITERAL(0, 0, 12), // "nat123client"
QT_MOC_LITERAL(1, 13, 19), // "on_action_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(4, 57, 23), // "on_username_textChanged"
QT_MOC_LITERAL(5, 81, 10), // "username_q"
QT_MOC_LITERAL(6, 92, 23), // "on_password_textChanged"
QT_MOC_LITERAL(7, 116, 10) // "password_q"

    },
    "nat123client\0on_action_triggered\0\0"
    "on_loginButton_clicked\0on_username_textChanged\0"
    "username_q\0on_password_textChanged\0"
    "password_q"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nat123client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void nat123client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nat123client *_t = static_cast<nat123client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_triggered(); break;
        case 1: _t->on_loginButton_clicked(); break;
        case 2: _t->on_username_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_password_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject nat123client::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_nat123client.data,
      qt_meta_data_nat123client,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *nat123client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nat123client::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_nat123client.stringdata0))
        return static_cast<void*>(const_cast< nat123client*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int nat123client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
