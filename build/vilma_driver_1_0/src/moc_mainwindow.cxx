/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/vilma_driver_1_0/src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      25,   21,   11,   11, 0x08,
      59,   51,   11,   11, 0x08,
      90,   51,   11,   11, 0x08,
     129,   51,   11,   11, 0x08,
     186,  177,   11,   11, 0x08,
     232,  177,   11,   11, 0x08,
     273,  177,   11,   11, 0x08,
     309,   51,   11,   11, 0x08,
     343,   51,   11,   11, 0x08,
     387,   51,   11,   11, 0x08,
     431,   51,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0update()\0key\0"
    "keyPressEvent(QKeyEvent*)\0checked\0"
    "on_Set_new_speed_toggled(bool)\0"
    "on_Constant_speed_button_toggled(bool)\0"
    "on_Set_wheel_direction_from_table_toggled(bool)\0"
    "position\0on_current_acel_label_slider_sliderMoved(int)\0"
    "on_current_brake_slider_sliderMoved(int)\0"
    "on_steering_slider_sliderMoved(int)\0"
    "on_handbrake_button_toggled(bool)\0"
    "on_gears_forward_radio_button_toggled(bool)\0"
    "on_gears_neutral_radio_button_toggled(bool)\0"
    "on_gears_backwards_radio_button_toggled(bool)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->on_Set_new_speed_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_Constant_speed_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_Set_wheel_direction_from_table_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_current_acel_label_slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_current_brake_slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_steering_slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_handbrake_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_gears_forward_radio_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_gears_neutral_radio_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_gears_backwards_radio_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
