/****************************************************************************
** Meta object code from reading C++ file 'tab1socketclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tab1socketclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab1socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tab1SocketClient_t {
    QByteArrayData data[8];
    char stringdata[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Tab1SocketClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Tab1SocketClient_t qt_meta_stringdata_Tab1SocketClient = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 16),
QT_MOC_LITERAL(4, 51, 15),
QT_MOC_LITERAL(5, 67, 19),
QT_MOC_LITERAL(6, 87, 20),
QT_MOC_LITERAL(7, 108, 18)
    },
    "Tab1SocketClient\0sigTab2RecvData\0\0"
    "sigQfileRecvData\0sigTab4RecvData\0"
    "slotConnectToServer\0slotSocketRecvUpdate\0"
    "slotSocketSendData\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab1SocketClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       3,    1,   47,    2, 0x06,
       4,    1,   50,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   53,    2, 0x08,
       6,    1,   56,    2, 0x08,
       7,    1,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Tab1SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tab1SocketClient *_t = static_cast<Tab1SocketClient *>(_o);
        switch (_id) {
        case 0: _t->sigTab2RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sigQfileRecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sigTab4RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotConnectToServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slotSocketRecvUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slotSocketSendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Tab1SocketClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tab1SocketClient::sigTab2RecvData)) {
                *result = 0;
            }
        }
        {
            typedef void (Tab1SocketClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tab1SocketClient::sigQfileRecvData)) {
                *result = 1;
            }
        }
        {
            typedef void (Tab1SocketClient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Tab1SocketClient::sigTab4RecvData)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Tab1SocketClient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tab1SocketClient.data,
      qt_meta_data_Tab1SocketClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *Tab1SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab1SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tab1SocketClient.stringdata))
        return static_cast<void*>(const_cast< Tab1SocketClient*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tab1SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Tab1SocketClient::sigTab2RecvData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tab1SocketClient::sigQfileRecvData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tab1SocketClient::sigTab4RecvData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
