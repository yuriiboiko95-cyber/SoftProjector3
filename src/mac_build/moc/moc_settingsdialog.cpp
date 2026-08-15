/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/settingsdialog.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN14SettingsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto SettingsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN14SettingsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SettingsDialog",
        "updateSettings",
        "",
        "GeneralSettings&",
        "sets",
        "Theme&",
        "thm",
        "SlideShowSettings&",
        "ssets",
        "BibleVersionSettings&",
        "bsets",
        "bsets2",
        "bsets3",
        "bsets4",
        "positionsDisplayWindow",
        "updateScreen",
        "httpServerState",
        "bool&",
        "state",
        "QString&",
        "httpServerIPAddress",
        "int&",
        "httpServerPort",
        "webSocketServerPort",
        "proclaimServerState",
        "proclaimIPAddress",
        "proclaimHttpPort",
        "proclaimWebSocketPort",
        "loadSettings",
        "on_listWidget_currentRowChanged",
        "currentRow",
        "setUseDispScreen2",
        "toUse",
        "setUseDispScreen3",
        "setUseDispScreen4",
        "on_buttonBox_clicked",
        "QAbstractButton*",
        "button",
        "applySettings",
        "changeTheme",
        "theme_id",
        "getThemes",
        "setThemes",
        "applyToAllActive",
        "t",
        "backName",
        "QPixmap",
        "background"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateSettings'
        QtMocHelpers::SignalData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
            { 0x80000000 | 9, 11 }, { 0x80000000 | 9, 12 }, { 0x80000000 | 9, 13 },
        }}),
        // Signal 'positionsDisplayWindow'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateScreen'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'httpServerState'
        QtMocHelpers::SignalData<void(bool &, QString &, int &, int &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { 0x80000000 | 19, 20 }, { 0x80000000 | 21, 22 }, { 0x80000000 | 21, 23 },
        }}),
        // Signal 'proclaimServerState'
        QtMocHelpers::SignalData<void(bool &, QString &, int &, int &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { 0x80000000 | 19, 25 }, { 0x80000000 | 21, 26 }, { 0x80000000 | 21, 27 },
        }}),
        // Slot 'loadSettings'
        QtMocHelpers::SlotData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
            { 0x80000000 | 9, 11 }, { 0x80000000 | 9, 12 }, { 0x80000000 | 9, 13 },
        }}),
        // Slot 'on_listWidget_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'setUseDispScreen2'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 32 },
        }}),
        // Slot 'setUseDispScreen3'
        QtMocHelpers::SlotData<void(bool)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 32 },
        }}),
        // Slot 'setUseDispScreen4'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 32 },
        }}),
        // Slot 'on_buttonBox_clicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Slot 'applySettings'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeTheme'
        QtMocHelpers::SlotData<void(int)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 40 },
        }}),
        // Slot 'getThemes'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setThemes'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'applyToAllActive'
        QtMocHelpers::SlotData<void(int, QString, QPixmap)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 44 }, { QMetaType::QString, 45 }, { 0x80000000 | 46, 47 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SettingsDialog, qt_meta_tag_ZN14SettingsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SettingsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SettingsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SettingsDialogE_t>.metaTypes,
    nullptr
} };

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SettingsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateSettings((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 1: _t->positionsDisplayWindow(); break;
        case 2: _t->updateScreen(); break;
        case 3: _t->httpServerState((*reinterpret_cast<std::add_pointer_t<bool&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[4]))); break;
        case 4: _t->proclaimServerState((*reinterpret_cast<std::add_pointer_t<bool&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[4]))); break;
        case 5: _t->loadSettings((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 6: _t->on_listWidget_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setUseDispScreen2((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setUseDispScreen3((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setUseDispScreen4((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_buttonBox_clicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 11: _t->applySettings(); break;
        case 12: _t->changeTheme((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->getThemes(); break;
        case 14: _t->setThemes(); break;
        case 15: _t->applyToAllActive((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SettingsDialog::*)(GeneralSettings & , Theme & , SlideShowSettings & , BibleVersionSettings & , BibleVersionSettings & , BibleVersionSettings & , BibleVersionSettings & )>(_a, &SettingsDialog::updateSettings, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsDialog::*)()>(_a, &SettingsDialog::positionsDisplayWindow, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsDialog::*)()>(_a, &SettingsDialog::updateScreen, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsDialog::*)(bool & , QString & , int & , int & )>(_a, &SettingsDialog::httpServerState, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsDialog::*)(bool & , QString & , int & , int & )>(_a, &SettingsDialog::proclaimServerState, 4))
            return;
    }
}

const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SettingsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::updateSettings(GeneralSettings & _t1, Theme & _t2, SlideShowSettings & _t3, BibleVersionSettings & _t4, BibleVersionSettings & _t5, BibleVersionSettings & _t6, BibleVersionSettings & _t7)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3, _t4, _t5, _t6, _t7);
}

// SIGNAL 1
void SettingsDialog::positionsDisplayWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SettingsDialog::updateScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SettingsDialog::httpServerState(bool & _t1, QString & _t2, int & _t3, int & _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void SettingsDialog::proclaimServerState(bool & _t1, QString & _t2, int & _t3, int & _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3, _t4);
}
QT_WARNING_POP
