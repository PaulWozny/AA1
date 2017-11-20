/****************************************************************************
** Meta object code from reading C++ file 'keypad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "keypad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keypad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_keypad_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_keypad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_keypad_t qt_meta_stringdata_keypad = {
    {
QT_MOC_LITERAL(0, 0, 6), // "keypad"
QT_MOC_LITERAL(1, 7, 14), // "SendKpadNumber"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "number"
QT_MOC_LITERAL(4, 30, 12), // "digitPressed"
QT_MOC_LITERAL(5, 43, 11), // "clearNumber"
QT_MOC_LITERAL(6, 55, 11) // "applyNumber"

    },
    "keypad\0SendKpadNumber\0\0number\0"
    "digitPressed\0clearNumber\0applyNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_keypad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void keypad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        keypad *_t = static_cast<keypad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendKpadNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->digitPressed(); break;
        case 2: _t->clearNumber(); break;
        case 3: _t->applyNumber(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (keypad::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&keypad::SendKpadNumber)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject keypad::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_keypad.data,
      qt_meta_data_keypad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *keypad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *keypad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_keypad.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int keypad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void keypad::SendKpadNumber(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
