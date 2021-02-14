/****************************************************************************
** Meta object code from reading C++ file 'AndroidQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/include/AndroidQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AndroidQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AndroidQt_t {
    QByteArrayData data[13];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AndroidQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AndroidQt_t qt_meta_stringdata_AndroidQt = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AndroidQt"
QT_MOC_LITERAL(1, 10, 4), // "sync"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 5), // "paint"
QT_MOC_LITERAL(4, 22, 19), // "handleWindowChanged"
QT_MOC_LITERAL(5, 42, 13), // "QQuickWindow*"
QT_MOC_LITERAL(6, 56, 6), // "theWin"
QT_MOC_LITERAL(7, 63, 17), // "ReadShapeFromFile"
QT_MOC_LITERAL(8, 81, 11), // "theFilePath"
QT_MOC_LITERAL(9, 93, 9), // "InitTouch"
QT_MOC_LITERAL(10, 103, 4), // "theX"
QT_MOC_LITERAL(11, 108, 4), // "theY"
QT_MOC_LITERAL(12, 113, 11) // "UpdateTouch"

    },
    "AndroidQt\0sync\0\0paint\0handleWindowChanged\0"
    "QQuickWindow*\0theWin\0ReadShapeFromFile\0"
    "theFilePath\0InitTouch\0theX\0theY\0"
    "UpdateTouch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AndroidQt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   49,    2, 0x02 /* Public */,
       9,    2,   52,    2, 0x02 /* Public */,
      12,    2,   57,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,

       0        // eod
};

void AndroidQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AndroidQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sync(); break;
        case 1: _t->paint(); break;
        case 2: _t->handleWindowChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->ReadShapeFromFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->InitTouch((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 5: _t->UpdateTouch((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickWindow* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AndroidQt::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_AndroidQt.data,
    qt_meta_data_AndroidQt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AndroidQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AndroidQt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidQt.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int AndroidQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
