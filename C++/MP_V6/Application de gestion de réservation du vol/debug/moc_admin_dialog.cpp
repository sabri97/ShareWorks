/****************************************************************************
** Meta object code from reading C++ file 'admin_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../admin_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Admin_Dialog_t {
    QByteArrayData data[13];
    char stringdata[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Admin_Dialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Admin_Dialog_t qt_meta_stringdata_Admin_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 10),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 21),
QT_MOC_LITERAL(4, 47, 23),
QT_MOC_LITERAL(5, 71, 15),
QT_MOC_LITERAL(6, 87, 17),
QT_MOC_LITERAL(7, 105, 19),
QT_MOC_LITERAL(8, 125, 15),
QT_MOC_LITERAL(9, 141, 22),
QT_MOC_LITERAL(10, 164, 5),
QT_MOC_LITERAL(11, 170, 21),
QT_MOC_LITERAL(12, 192, 26)
    },
    "Admin_Dialog\0myfunction\0\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_save_clicked\0"
    "on_update_clicked\0on_delete_2_clicked\0"
    "on_load_clicked\0on_tableView_activated\0"
    "index\0on_gestionVol_clicked\0"
    "on_gestionVoyageur_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a,
       3,    0,   65,    2, 0x08,
       4,    0,   66,    2, 0x08,
       5,    0,   67,    2, 0x08,
       6,    0,   68,    2, 0x08,
       7,    0,   69,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    1,   71,    2, 0x08,
      11,    0,   74,    2, 0x08,
      12,    0,   75,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Admin_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin_Dialog *_t = static_cast<Admin_Dialog *>(_o);
        switch (_id) {
        case 0: _t->myfunction(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
 //       case 3: _t->on_save_clicked(); break;
   //     case 4: _t->on_update_clicked(); break;
     //   case 5: _t->on_delete_2_clicked(); break;
       // case 6: _t->on_load_clicked(); break;
        //case 7: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_gestionVol_clicked(); break;
        case 9: _t->on_gestionVoyageur_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Admin_Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Admin_Dialog.data,
      qt_meta_data_Admin_Dialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *Admin_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Admin_Dialog.stringdata))
        return static_cast<void*>(const_cast< Admin_Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Admin_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
