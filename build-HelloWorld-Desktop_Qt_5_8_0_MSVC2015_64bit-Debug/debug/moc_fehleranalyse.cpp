/****************************************************************************
** Meta object code from reading C++ file 'fehleranalyse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Typo_aktuelle_arbeitsversion/fehleranalyse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fehleranalyse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Fehleranalyse_t {
    QByteArrayData data[4];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Fehleranalyse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Fehleranalyse_t qt_meta_stringdata_Fehleranalyse = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Fehleranalyse"
QT_MOC_LITERAL(1, 14, 10), // "wrong_word"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8) // "QString*"

    },
    "Fehleranalyse\0wrong_word\0\0QString*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Fehleranalyse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void Fehleranalyse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Fehleranalyse *_t = static_cast<Fehleranalyse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wrong_word((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Fehleranalyse::*_t)(QString , QString * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Fehleranalyse::wrong_word)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Fehleranalyse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Fehleranalyse.data,
      qt_meta_data_Fehleranalyse,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Fehleranalyse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fehleranalyse::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Fehleranalyse.stringdata0))
        return static_cast<void*>(const_cast< Fehleranalyse*>(this));
    return QObject::qt_metacast(_clname);
}

int Fehleranalyse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Fehleranalyse::wrong_word(QString _t1, QString * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
