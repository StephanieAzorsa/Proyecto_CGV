/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../appOpenGLTutorial/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[15];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 30), // "on_hsldRotateX_actionTriggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "action"
QT_MOC_LITERAL(4, 46, 30), // "on_hsldRotateY_actionTriggered"
QT_MOC_LITERAL(5, 77, 30), // "on_hsldRotateZ_actionTriggered"
QT_MOC_LITERAL(6, 108, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(7, 131, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(8, 156, 28), // "on_hsldScale_actionTriggered"
QT_MOC_LITERAL(9, 185, 36), // "on_checkBoxTransparente_state..."
QT_MOC_LITERAL(10, 222, 4), // "arg1"
QT_MOC_LITERAL(11, 227, 31), // "on_checkBoxRelleno_stateChanged"
QT_MOC_LITERAL(12, 259, 31), // "on_hsdSegmentoX_actionTriggered"
QT_MOC_LITERAL(13, 291, 31), // "on_hsdSegmentoY_actionTriggered"
QT_MOC_LITERAL(14, 323, 24) // "on_radioButton_3_clicked"

    },
    "Widget\0on_hsldRotateX_actionTriggered\0"
    "\0action\0on_hsldRotateY_actionTriggered\0"
    "on_hsldRotateZ_actionTriggered\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "on_hsldScale_actionTriggered\0"
    "on_checkBoxTransparente_stateChanged\0"
    "arg1\0on_checkBoxRelleno_stateChanged\0"
    "on_hsdSegmentoX_actionTriggered\0"
    "on_hsdSegmentoY_actionTriggered\0"
    "on_radioButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
       9,    1,   83,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_hsldRotateX_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_hsldRotateY_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_hsldRotateZ_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_radioButton_clicked(); break;
        case 4: _t->on_radioButton_2_clicked(); break;
        case 5: _t->on_hsldScale_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxTransparente_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxRelleno_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_hsdSegmentoX_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_hsdSegmentoY_actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_radioButton_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
