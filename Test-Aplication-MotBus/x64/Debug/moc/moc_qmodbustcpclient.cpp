/****************************************************************************
** Meta object code from reading C++ file 'qmodbustcpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../qmodbustcpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmodbustcpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QModbusTcpClient_t {
    QByteArrayData data[25];
    char stringdata0[522];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModbusTcpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModbusTcpClient_t qt_meta_stringdata_QModbusTcpClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QModbusTcpClient"
QT_MOC_LITERAL(1, 17, 25), // "onWriteSingleWordSentence"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "writeSuccess"
QT_MOC_LITERAL(4, 57, 11), // "wordAddress"
QT_MOC_LITERAL(5, 69, 9), // "wordValue"
QT_MOC_LITERAL(6, 79, 38), // "onReadMultipleHoldingRegister..."
QT_MOC_LITERAL(7, 118, 12), // "startAddress"
QT_MOC_LITERAL(8, 131, 16), // "QVector<quint16>"
QT_MOC_LITERAL(9, 148, 6), // "values"
QT_MOC_LITERAL(10, 155, 49), // "onReadMultipleHoldingRegister..."
QT_MOC_LITERAL(11, 205, 7), // "address"
QT_MOC_LITERAL(12, 213, 5), // "value"
QT_MOC_LITERAL(13, 219, 36), // "onReadMultipleInputRegistersS..."
QT_MOC_LITERAL(14, 256, 47), // "onReadMultipleInputRegistersS..."
QT_MOC_LITERAL(15, 304, 25), // "onForceSingleCoilSentence"
QT_MOC_LITERAL(16, 330, 11), // "coilAddress"
QT_MOC_LITERAL(17, 342, 28), // "onForceMultipleCoilsSentence"
QT_MOC_LITERAL(18, 371, 13), // "QVector<bool>"
QT_MOC_LITERAL(19, 385, 20), // "valuesWriteRequested"
QT_MOC_LITERAL(20, 406, 20), // "numberOfCoilsWritten"
QT_MOC_LITERAL(21, 427, 34), // "onReadMultipleInputsStatusSen..."
QT_MOC_LITERAL(22, 462, 33), // "onPresetMultipleRegistersSent..."
QT_MOC_LITERAL(23, 496, 14), // "nbValueWritten"
QT_MOC_LITERAL(24, 511, 10) // "onDataRecv"

    },
    "QModbusTcpClient\0onWriteSingleWordSentence\0"
    "\0writeSuccess\0wordAddress\0wordValue\0"
    "onReadMultipleHoldingRegistersSentence\0"
    "startAddress\0QVector<quint16>\0values\0"
    "onReadMultipleHoldingRegistersSentenceSingleValue\0"
    "address\0value\0onReadMultipleInputRegistersSentence\0"
    "onReadMultipleInputRegistersSentenceSingleValue\0"
    "onForceSingleCoilSentence\0coilAddress\0"
    "onForceMultipleCoilsSentence\0QVector<bool>\0"
    "valuesWriteRequested\0numberOfCoilsWritten\0"
    "onReadMultipleInputsStatusSentence\0"
    "onPresetMultipleRegistersSentence\0"
    "nbValueWritten\0onDataRecv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModbusTcpClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       6,    2,   71,    2, 0x06 /* Public */,
      10,    2,   76,    2, 0x06 /* Public */,
      13,    2,   81,    2, 0x06 /* Public */,
      14,    2,   86,    2, 0x06 /* Public */,
      15,    3,   91,    2, 0x06 /* Public */,
      17,    4,   98,    2, 0x06 /* Public */,
      21,    2,  107,    2, 0x06 /* Public */,
      22,    4,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::UShort, QMetaType::UShort,    3,    4,    5,
    QMetaType::Void, QMetaType::UShort, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,   11,   12,
    QMetaType::Void, QMetaType::UShort, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::UShort, QMetaType::UShort,   11,   12,
    QMetaType::Void, QMetaType::Bool, QMetaType::UShort, QMetaType::Bool,    3,   16,   12,
    QMetaType::Void, QMetaType::Bool, QMetaType::UShort, 0x80000000 | 18, QMetaType::UShort,    3,    7,   19,   20,
    QMetaType::Void, QMetaType::UShort, 0x80000000 | 18,    7,    9,
    QMetaType::Void, QMetaType::Bool, QMetaType::UShort, 0x80000000 | 8, QMetaType::UShort,    3,    7,   19,   23,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QModbusTcpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QModbusTcpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onWriteSingleWordSentence((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 1: _t->onReadMultipleHoldingRegistersSentence((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< QVector<quint16>(*)>(_a[2]))); break;
        case 2: _t->onReadMultipleHoldingRegistersSentenceSingleValue((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 3: _t->onReadMultipleInputRegistersSentence((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< QVector<quint16>(*)>(_a[2]))); break;
        case 4: _t->onReadMultipleInputRegistersSentenceSingleValue((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 5: _t->onForceSingleCoilSentence((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->onForceMultipleCoilsSentence((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<bool>(*)>(_a[3])),(*reinterpret_cast< quint16(*)>(_a[4]))); break;
        case 7: _t->onReadMultipleInputsStatusSentence((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< QVector<bool>(*)>(_a[2]))); break;
        case 8: _t->onPresetMultipleRegistersSentence((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< QVector<quint16>(*)>(_a[3])),(*reinterpret_cast< quint16(*)>(_a[4]))); break;
        case 9: _t->onDataRecv(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint16> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QModbusTcpClient::*)(bool , quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onWriteSingleWordSentence)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(quint16 , QVector<quint16> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onReadMultipleHoldingRegistersSentence)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onReadMultipleHoldingRegistersSentenceSingleValue)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(quint16 , QVector<quint16> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onReadMultipleInputRegistersSentence)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(quint16 , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onReadMultipleInputRegistersSentenceSingleValue)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(bool , quint16 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onForceSingleCoilSentence)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(bool , quint16 , QVector<bool> , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onForceMultipleCoilsSentence)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(quint16 , QVector<bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onReadMultipleInputsStatusSentence)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QModbusTcpClient::*)(bool , quint16 , QVector<quint16> , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusTcpClient::onPresetMultipleRegistersSentence)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QModbusTcpClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpSocket::staticMetaObject>(),
    qt_meta_stringdata_QModbusTcpClient.data,
    qt_meta_data_QModbusTcpClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QModbusTcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusTcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusTcpClient.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int QModbusTcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QModbusTcpClient::onWriteSingleWordSentence(bool _t1, quint16 _t2, quint16 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QModbusTcpClient::onReadMultipleHoldingRegistersSentence(quint16 _t1, QVector<quint16> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QModbusTcpClient::onReadMultipleHoldingRegistersSentenceSingleValue(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QModbusTcpClient::onReadMultipleInputRegistersSentence(quint16 _t1, QVector<quint16> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QModbusTcpClient::onReadMultipleInputRegistersSentenceSingleValue(quint16 _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QModbusTcpClient::onForceSingleCoilSentence(bool _t1, quint16 _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QModbusTcpClient::onForceMultipleCoilsSentence(bool _t1, quint16 _t2, QVector<bool> _t3, quint16 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QModbusTcpClient::onReadMultipleInputsStatusSentence(quint16 _t1, QVector<bool> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QModbusTcpClient::onPresetMultipleRegistersSentence(bool _t1, quint16 _t2, QVector<quint16> _t3, quint16 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
