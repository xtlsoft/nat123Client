/****************************************************************************
** Meta object code from reading C++ file 'nat123install.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nat123_install/nat123install.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nat123install.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Nat123Install_t {
    QByteArrayData data[10];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Nat123Install_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Nat123Install_t qt_meta_stringdata_Nat123Install = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Nat123Install"
QT_MOC_LITERAL(1, 14, 24), // "on_installButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "on_setupConf1_clicked"
QT_MOC_LITERAL(4, 62, 21), // "on_setupConf2_clicked"
QT_MOC_LITERAL(5, 84, 21), // "on_setupConf3_clicked"
QT_MOC_LITERAL(6, 106, 21), // "on_createLink_clicked"
QT_MOC_LITERAL(7, 128, 18), // "on_about_triggered"
QT_MOC_LITERAL(8, 147, 20), // "on_deletLink_clicked"
QT_MOC_LITERAL(9, 168, 23) // "on_removeButton_clicked"

    },
    "Nat123Install\0on_installButton_clicked\0"
    "\0on_setupConf1_clicked\0on_setupConf2_clicked\0"
    "on_setupConf3_clicked\0on_createLink_clicked\0"
    "on_about_triggered\0on_deletLink_clicked\0"
    "on_removeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Nat123Install[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Nat123Install::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Nat123Install *_t = static_cast<Nat123Install *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_installButton_clicked(); break;
        case 1: _t->on_setupConf1_clicked(); break;
        case 2: _t->on_setupConf2_clicked(); break;
        case 3: _t->on_setupConf3_clicked(); break;
        case 4: _t->on_createLink_clicked(); break;
        case 5: _t->on_about_triggered(); break;
        case 6: _t->on_deletLink_clicked(); break;
        case 7: _t->on_removeButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Nat123Install::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Nat123Install.data,
      qt_meta_data_Nat123Install,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Nat123Install::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Nat123Install::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Nat123Install.stringdata0))
        return static_cast<void*>(const_cast< Nat123Install*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Nat123Install::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
