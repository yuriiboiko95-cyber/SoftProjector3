/****************************************************************************
** Meta object code from reading C++ file 'projectordisplayscreen.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/projectordisplayscreen.hpp"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectordisplayscreen.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ProjectorDisplayScreenE_t {};
} // unnamed namespace

template <> constexpr inline auto ProjectorDisplayScreen::qt_create_metaobjectdata<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ProjectorDisplayScreen",
        "exitSlide",
        "",
        "clearSlide",
        "nextSlide",
        "prevSlide",
        "videoPositionChanged",
        "position",
        "videoDurationChanged",
        "duration",
        "videoPlaybackStateChanged",
        "QMediaPlayer::PlaybackState",
        "state",
        "videoStopped",
        "resetImGenSize",
        "renderNotText",
        "renderPassiveText",
        "QPixmap&",
        "back",
        "useBack",
        "renderBibleText",
        "Verse",
        "bVerse",
        "BibleSettings&",
        "bSets",
        "renderSongText",
        "Stanza",
        "stanza",
        "SongSettings&",
        "sSets",
        "renderAnnounceText",
        "AnnounceSlide",
        "announce",
        "TextSettings&",
        "aSets",
        "renderSlideShow",
        "QPixmap",
        "slide",
        "SlideShowSettings&",
        "ssSets",
        "renderVideo",
        "VideoInfo",
        "videoDetails",
        "playVideo",
        "pauseVideo",
        "stopVideo",
        "setVideoVolume",
        "level",
        "setVideoMuted",
        "muted",
        "setVideoPosition",
        "positionControls",
        "DisplayControlsSettings&",
        "dSettings",
        "setControlsVisible",
        "visible",
        "setBackPixmap",
        "p",
        "fillMode",
        "QColor",
        "c",
        "setTextPixmap",
        "setBackVideo",
        "path",
        "setVideoSource",
        "playerObject",
        "QUrl",
        "updateScreen",
        "exitSlideClicked",
        "nextSlideClicked",
        "prevSlideClicked",
        "playbackStopped"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'exitSlide'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearSlide'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nextSlide'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'prevSlide'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'videoPositionChanged'
        QtMocHelpers::SignalData<void(qint64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 7 },
        }}),
        // Signal 'videoDurationChanged'
        QtMocHelpers::SignalData<void(qint64)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 9 },
        }}),
        // Signal 'videoPlaybackStateChanged'
        QtMocHelpers::SignalData<void(QMediaPlayer::PlaybackState)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'videoStopped'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetImGenSize'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'renderNotText'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'renderPassiveText'
        QtMocHelpers::SlotData<void(QPixmap &, bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Bool, 19 },
        }}),
        // Slot 'renderBibleText'
        QtMocHelpers::SlotData<void(Verse, BibleSettings &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { 0x80000000 | 23, 24 },
        }}),
        // Slot 'renderSongText'
        QtMocHelpers::SlotData<void(Stanza, SongSettings &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 26, 27 }, { 0x80000000 | 28, 29 },
        }}),
        // Slot 'renderAnnounceText'
        QtMocHelpers::SlotData<void(AnnounceSlide, TextSettings &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 32 }, { 0x80000000 | 33, 34 },
        }}),
        // Slot 'renderSlideShow'
        QtMocHelpers::SlotData<void(QPixmap, SlideShowSettings &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 }, { 0x80000000 | 38, 39 },
        }}),
        // Slot 'renderVideo'
        QtMocHelpers::SlotData<void(VideoInfo)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 41, 42 },
        }}),
        // Slot 'playVideo'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pauseVideo'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stopVideo'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVideoVolume'
        QtMocHelpers::SlotData<void(int)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 47 },
        }}),
        // Slot 'setVideoMuted'
        QtMocHelpers::SlotData<void(bool)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'setVideoPosition'
        QtMocHelpers::SlotData<void(qint64)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 7 },
        }}),
        // Slot 'positionControls'
        QtMocHelpers::SlotData<void(DisplayControlsSettings &)>(51, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 52, 53 },
        }}),
        // Slot 'setControlsVisible'
        QtMocHelpers::SlotData<void(bool)>(54, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 55 },
        }}),
        // Slot 'setBackPixmap'
        QtMocHelpers::SlotData<void(QPixmap, int)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 36, 57 }, { QMetaType::Int, 58 },
        }}),
        // Slot 'setBackPixmap'
        QtMocHelpers::SlotData<void(QPixmap, QColor)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 36, 57 }, { 0x80000000 | 59, 60 },
        }}),
        // Slot 'setTextPixmap'
        QtMocHelpers::SlotData<void(QPixmap)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 36, 57 },
        }}),
        // Slot 'setBackVideo'
        QtMocHelpers::SlotData<void(QString)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 63 },
        }}),
        // Slot 'setVideoSource'
        QtMocHelpers::SlotData<void(QObject *, QUrl)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 65 }, { 0x80000000 | 66, 63 },
        }}),
        // Slot 'updateScreen'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'exitSlideClicked'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextSlideClicked'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevSlideClicked'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'videoPositionChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'videoDurationChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'videoPlaybackStateChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'playbackStopped'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProjectorDisplayScreen, qt_meta_tag_ZN22ProjectorDisplayScreenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ProjectorDisplayScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.metaTypes,
    nullptr
} };

void ProjectorDisplayScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProjectorDisplayScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->exitSlide(); break;
        case 1: _t->clearSlide(); break;
        case 2: _t->nextSlide(); break;
        case 3: _t->prevSlide(); break;
        case 4: _t->videoPositionChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->videoDurationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 6: _t->videoPlaybackStateChanged((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 7: _t->videoStopped(); break;
        case 8: _t->resetImGenSize(); break;
        case 9: _t->renderNotText(); break;
        case 10: _t->renderPassiveText((*reinterpret_cast<std::add_pointer_t<QPixmap&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->renderBibleText((*reinterpret_cast<std::add_pointer_t<Verse>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<BibleSettings&>>(_a[2]))); break;
        case 12: _t->renderSongText((*reinterpret_cast<std::add_pointer_t<Stanza>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongSettings&>>(_a[2]))); break;
        case 13: _t->renderAnnounceText((*reinterpret_cast<std::add_pointer_t<AnnounceSlide>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<TextSettings&>>(_a[2]))); break;
        case 14: _t->renderSlideShow((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[2]))); break;
        case 15: _t->renderVideo((*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[1]))); break;
        case 16: _t->playVideo(); break;
        case 17: _t->pauseVideo(); break;
        case 18: _t->stopVideo(); break;
        case 19: _t->setVideoVolume((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->setVideoMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setVideoPosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 22: _t->positionControls((*reinterpret_cast<std::add_pointer_t<DisplayControlsSettings&>>(_a[1]))); break;
        case 23: _t->setControlsVisible((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setBackPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 25: _t->setBackPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QColor>>(_a[2]))); break;
        case 26: _t->setTextPixmap((*reinterpret_cast<std::add_pointer_t<QPixmap>>(_a[1]))); break;
        case 27: _t->setBackVideo((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->setVideoSource((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 29: _t->updateScreen(); break;
        case 30: _t->exitSlideClicked(); break;
        case 31: _t->nextSlideClicked(); break;
        case 32: _t->prevSlideClicked(); break;
        case 33: _t->videoPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->videoDurationChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->videoPlaybackStateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->playbackStopped(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::exitSlide, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::clearSlide, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::nextSlide, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::prevSlide, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(qint64 )>(_a, &ProjectorDisplayScreen::videoPositionChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(qint64 )>(_a, &ProjectorDisplayScreen::videoDurationChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)(QMediaPlayer::PlaybackState )>(_a, &ProjectorDisplayScreen::videoPlaybackStateChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProjectorDisplayScreen::*)()>(_a, &ProjectorDisplayScreen::videoStopped, 7))
            return;
    }
}

const QMetaObject *ProjectorDisplayScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectorDisplayScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ProjectorDisplayScreenE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProjectorDisplayScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void ProjectorDisplayScreen::exitSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProjectorDisplayScreen::clearSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ProjectorDisplayScreen::nextSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProjectorDisplayScreen::prevSlide()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ProjectorDisplayScreen::videoPositionChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void ProjectorDisplayScreen::videoDurationChanged(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void ProjectorDisplayScreen::videoPlaybackStateChanged(QMediaPlayer::PlaybackState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void ProjectorDisplayScreen::videoStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
