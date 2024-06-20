/****************************************************************************
** Meta object code from reading C++ file 'HOME.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QT/HOME.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HOME.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSHOMEENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHOMEENDCLASS = QtMocHelpers::stringData(
    "HOME",
    "update_label",
    "",
    "showtime",
    "test_port",
    "on_button_on_led_clicked",
    "on_button_off_led_clicked",
    "on_button_sortie_clicked",
    "on_button_plus_clim_clicked",
    "on_button_mois_clim_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHOMEENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[10];
    char stringdata5[25];
    char stringdata6[26];
    char stringdata7[25];
    char stringdata8[28];
    char stringdata9[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHOMEENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHOMEENDCLASS_t qt_meta_stringdata_CLASSHOMEENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "HOME"
        QT_MOC_LITERAL(5, 12),  // "update_label"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 8),  // "showtime"
        QT_MOC_LITERAL(28, 9),  // "test_port"
        QT_MOC_LITERAL(38, 24),  // "on_button_on_led_clicked"
        QT_MOC_LITERAL(63, 25),  // "on_button_off_led_clicked"
        QT_MOC_LITERAL(89, 24),  // "on_button_sortie_clicked"
        QT_MOC_LITERAL(114, 27),  // "on_button_plus_clim_clicked"
        QT_MOC_LITERAL(142, 27)   // "on_button_mois_clim_clicked"
    },
    "HOME",
    "update_label",
    "",
    "showtime",
    "test_port",
    "on_button_on_led_clicked",
    "on_button_off_led_clicked",
    "on_button_sortie_clicked",
    "on_button_plus_clim_clicked",
    "on_button_mois_clim_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHOMEENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

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

Q_CONSTINIT const QMetaObject HOME::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSHOMEENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHOMEENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHOMEENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HOME, std::true_type>,
        // method 'update_label'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showtime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_port'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_on_led_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_off_led_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_sortie_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_plus_clim_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_button_mois_clim_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void HOME::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HOME *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_label(); break;
        case 1: _t->showtime(); break;
        case 2: _t->test_port(); break;
        case 3: _t->on_button_on_led_clicked(); break;
        case 4: _t->on_button_off_led_clicked(); break;
        case 5: _t->on_button_sortie_clicked(); break;
        case 6: _t->on_button_plus_clim_clicked(); break;
        case 7: _t->on_button_mois_clim_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *HOME::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HOME::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHOMEENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HOME::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
