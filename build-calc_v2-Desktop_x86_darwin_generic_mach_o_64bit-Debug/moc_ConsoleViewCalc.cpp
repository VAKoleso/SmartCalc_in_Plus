/****************************************************************************
** Meta object code from reading C++ file 'ConsoleViewCalc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/ConsoleView/ConsoleViewCalc.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConsoleViewCalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__consoleView_t {
    const uint offsetsAndSize[18];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__consoleView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__consoleView_t qt_meta_stringdata_s21__consoleView = {
    {
QT_MOC_LITERAL(0, 16), // "s21::consoleView"
QT_MOC_LITERAL(17, 6), // "signal"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 14), // "digits_numbers"
QT_MOC_LITERAL(40, 24), // "on_pushButton_ac_clicked"
QT_MOC_LITERAL(65, 25), // "on_pushButton_c_2_clicked"
QT_MOC_LITERAL(91, 23), // "on_pushButton_c_clicked"
QT_MOC_LITERAL(115, 25), // "on_pushButton_rav_clicked"
QT_MOC_LITERAL(141, 26) // "on_pushButton_cred_clicked"

    },
    "s21::consoleView\0signal\0\0digits_numbers\0"
    "on_pushButton_ac_clicked\0"
    "on_pushButton_c_2_clicked\0"
    "on_pushButton_c_clicked\0"
    "on_pushButton_rav_clicked\0"
    "on_pushButton_cred_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__consoleView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   59,    2, 0x08,    3 /* Private */,
       4,    0,   60,    2, 0x08,    4 /* Private */,
       5,    0,   61,    2, 0x08,    5 /* Private */,
       6,    0,   62,    2, 0x08,    6 /* Private */,
       7,    0,   63,    2, 0x08,    7 /* Private */,
       8,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void s21::consoleView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<consoleView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->digits_numbers(); break;
        case 2: _t->on_pushButton_ac_clicked(); break;
        case 3: _t->on_pushButton_c_2_clicked(); break;
        case 4: _t->on_pushButton_c_clicked(); break;
        case 5: _t->on_pushButton_rav_clicked(); break;
        case 6: _t->on_pushButton_cred_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (consoleView::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&consoleView::signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject s21::consoleView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_s21__consoleView.offsetsAndSize,
    qt_meta_data_s21__consoleView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__consoleView_t
, QtPrivate::TypeAndForceComplete<consoleView, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::consoleView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::consoleView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__consoleView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int s21::consoleView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void s21::consoleView::signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
