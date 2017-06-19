/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Typo_aktuelle_arbeitsversion/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_t {
    QByteArrayData data[11];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "login"
QT_MOC_LITERAL(1, 6, 19), // "signal_username_set"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "after_login_process"
QT_MOC_LITERAL(4, 47, 20), // "after_logout_process"
QT_MOC_LITERAL(5, 68, 29), // "on_abbrechen_anmelden_clicked"
QT_MOC_LITERAL(6, 98, 22), // "on_pb_abmelden_clicked"
QT_MOC_LITERAL(7, 121, 21), // "on_pb_zurueck_clicked"
QT_MOC_LITERAL(8, 143, 30), // "on_button_registrieren_clicked"
QT_MOC_LITERAL(9, 174, 23), // "on_but_anmelden_clicked"
QT_MOC_LITERAL(10, 198, 20) // "profil_show_and_hide"

    },
    "login\0signal_username_set\0\0"
    "after_login_process\0after_logout_process\0"
    "on_abbrechen_anmelden_clicked\0"
    "on_pb_abmelden_clicked\0on_pb_zurueck_clicked\0"
    "on_button_registrieren_clicked\0"
    "on_but_anmelden_clicked\0profil_show_and_hide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,
       4,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        login *_t = static_cast<login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_username_set((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->after_login_process(); break;
        case 2: _t->after_logout_process(); break;
        case 3: _t->on_abbrechen_anmelden_clicked(); break;
        case 4: _t->on_pb_abmelden_clicked(); break;
        case 5: _t->on_pb_zurueck_clicked(); break;
        case 6: _t->on_button_registrieren_clicked(); break;
        case 7: _t->on_but_anmelden_clicked(); break;
        case 8: _t->profil_show_and_hide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (login::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::signal_username_set)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::after_login_process)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::after_logout_process)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject login::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_login.data,
      qt_meta_data_login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata0))
        return static_cast<void*>(const_cast< login*>(this));
    return QDialog::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void login::signal_username_set(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void login::after_login_process()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void login::after_logout_process()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
