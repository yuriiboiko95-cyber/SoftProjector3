/****************************************************************************
** Meta object code from reading C++ file 'softprojector.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/softprojector.hpp"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'softprojector.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13SoftProjectorE_t {};
} // unnamed namespace

template <> constexpr inline auto SoftProjector::qt_create_metaobjectdata<qt_meta_tag_ZN13SoftProjectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SoftProjector",
        "updateSetting",
        "",
        "GeneralSettings&",
        "g",
        "Theme&",
        "t",
        "SlideShowSettings&",
        "ssets",
        "BibleVersionSettings&",
        "bsets",
        "bsets2",
        "bsets3",
        "bsets4",
        "saveSettings",
        "positionDisplayWindow",
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
        "setWaitCursor",
        "setArrowCursor",
        "setAppDataDir",
        "QDir",
        "d",
        "clearHttpOutput",
        "showDisplayScreen",
        "show",
        "applySetting",
        "s",
        "b1",
        "b2",
        "b3",
        "b4",
        "on_actionSong_Counter_triggered",
        "on_projectTab_currentChanged",
        "index",
        "updateEditActions",
        "on_actionNew_triggered",
        "on_actionEdit_triggered",
        "on_actionCopy_triggered",
        "on_actionDelete_triggered",
        "updateWindowText",
        "showBible",
        "showSong",
        "currentRow",
        "showAnnounce",
        "showPicture",
        "showVideo",
        "retranslateUis",
        "createLanguageActions",
        "switchLanguage",
        "QAction*",
        "action",
        "on_actionDonate_triggered",
        "on_action_Help_triggered",
        "on_actionManage_Database_triggered",
        "on_actionAbout_triggered",
        "on_listShow_doubleClicked",
        "QModelIndex",
        "on_actionSettings_triggered",
        "newSong",
        "copySong",
        "editSong",
        "deleteSong",
        "newSlideShow",
        "editSlideShow",
        "deleteSlideShow",
        "addMediaToLibrary",
        "removeMediaFromLibrary",
        "newAnnouncement",
        "editAnnouncement",
        "copyAnnouncement",
        "deleteAnnoucement",
        "on_actionShow_triggered",
        "on_actionHide_triggered",
        "on_listShow_currentRowChanged",
        "on_actionClose_triggered",
        "setSongList",
        "Song",
        "song",
        "row",
        "setAnnounceText",
        "Announcement",
        "announce",
        "setChapterList",
        "chapter_list",
        "caption",
        "QItemSelection",
        "selectedItems",
        "setPictureList",
        "QList<SlideShowItem>&",
        "image_list",
        "name",
        "setVideo",
        "VideoInfo&",
        "video",
        "playVideo",
        "pauseVideo",
        "stopVideo",
        "setVideoPosition",
        "position",
        "videoStopped",
        "on_listShow_itemSelectionChanged",
        "on_rbMultiVerse_toggled",
        "checked",
        "on_actionPrint_triggered",
        "on_actionPrintSchedule_triggered",
        "nextSlide",
        "prevSlide",
        "on_actionScheduleAdd_triggered",
        "on_actionScheduleRemove_triggered",
        "on_actionScheduleClear_triggered",
        "addToShcedule",
        "BibleHistory&",
        "b",
        "Song&",
        "SlideShow&",
        "v",
        "Announcement&",
        "a",
        "reloadShceduleList",
        "on_listWidgetSchedule_doubleClicked",
        "on_listWidgetSchedule_itemSelectionChanged",
        "on_actionMoveScheduleTop_triggered",
        "on_actionMoveScheduleUp_triggered",
        "on_actionMoveScheduleDown_triggered",
        "on_actionMoveScheduleBottom_triggered",
        "on_actionNewSchedule_triggered",
        "on_actionOpenSchedule_triggered",
        "on_actionSaveSchedule_triggered",
        "on_actionSaveScheduleAs_triggered",
        "on_actionCloseSchedule_triggered",
        "openSchedule",
        "saveSchedule",
        "overWrite",
        "saveScheduleNew",
        "QSqlQuery&",
        "q",
        "saveScheduleItemNew",
        "scid",
        "BibleHistory",
        "SlideShow",
        "VideoInfo",
        "saveScheduleUpdate",
        "saveScheduleItemUpdate",
        "openScheduleItem",
        "on_actionClear_triggered",
        "on_actionCloseDisplay_triggered",
        "updateCloseDisplayButtons",
        "isOn",
        "sendBibleVerseToServer",
        "sendSongVerseToServer",
        "anyVerseOutputEnabled",
        "sendBibleImagesToProclaim",
        "Verse",
        "verse",
        "showSongVerseSplit",
        "enabled",
        "sendSongVerseSplit",
        "splitSongVerse",
        "setSongVerseSplitList",
        "currentVerseIndex",
        "selectRow",
        "on_songVerseSplitListWidget_itemSelectionChanged",
        "on_songVerseSplitListWidget_itemDoubleClicked",
        "QListWidgetItem*",
        "item",
        "on_songVerseSplitListWidgetNavigation",
        "Qt::Key"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'updateSetting'
        QtMocHelpers::SlotData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
            { 0x80000000 | 9, 11 }, { 0x80000000 | 9, 12 }, { 0x80000000 | 9, 13 },
        }}),
        // Slot 'saveSettings'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'positionDisplayWindow'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateScreen'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'httpServerState'
        QtMocHelpers::SlotData<void(bool &, QString &, int &, int &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 21 }, { 0x80000000 | 22, 23 }, { 0x80000000 | 22, 24 },
        }}),
        // Slot 'proclaimServerState'
        QtMocHelpers::SlotData<void(bool &, QString &, int &, int &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { 0x80000000 | 20, 26 }, { 0x80000000 | 22, 27 }, { 0x80000000 | 22, 28 },
        }}),
        // Slot 'setWaitCursor'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setArrowCursor'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setAppDataDir'
        QtMocHelpers::SlotData<void(QDir)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 32, 33 },
        }}),
        // Slot 'clearHttpOutput'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showDisplayScreen'
        QtMocHelpers::SlotData<void(bool)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 36 },
        }}),
        // Slot 'applySetting'
        QtMocHelpers::SlotData<void(GeneralSettings &, Theme &, SlideShowSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &, BibleVersionSettings &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 38 }, { 0x80000000 | 9, 39 },
            { 0x80000000 | 9, 40 }, { 0x80000000 | 9, 41 }, { 0x80000000 | 9, 42 },
        }}),
        // Slot 'on_actionSong_Counter_triggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_projectTab_currentChanged'
        QtMocHelpers::SlotData<void(int)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 45 },
        }}),
        // Slot 'updateEditActions'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNew_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEdit_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWindowText'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showBible'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSong'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 54 },
        }}),
        // Slot 'showAnnounce'
        QtMocHelpers::SlotData<void(int)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 54 },
        }}),
        // Slot 'showPicture'
        QtMocHelpers::SlotData<void(int)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 54 },
        }}),
        // Slot 'showVideo'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'retranslateUis'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'createLanguageActions'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchLanguage'
        QtMocHelpers::SlotData<void(QAction *)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 61, 62 },
        }}),
        // Slot 'on_actionDonate_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Help_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionManage_Database_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_doubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 68, 45 },
        }}),
        // Slot 'on_actionSettings_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newSong'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copySong'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editSong'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteSong'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newSlideShow'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editSlideShow'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteSlideShow'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addMediaToLibrary'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeMediaFromLibrary'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newAnnouncement'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editAnnouncement'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyAnnouncement'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'deleteAnnoucement'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_triggered'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHide_triggered'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_currentRowChanged'
        QtMocHelpers::SlotData<void(int)>(85, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 54 },
        }}),
        // Slot 'on_actionClose_triggered'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setSongList'
        QtMocHelpers::SlotData<void(Song, int)>(87, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 88, 89 }, { QMetaType::Int, 90 },
        }}),
        // Slot 'setAnnounceText'
        QtMocHelpers::SlotData<void(Announcement, int)>(91, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 92, 93 }, { QMetaType::Int, 90 },
        }}),
        // Slot 'setChapterList'
        QtMocHelpers::SlotData<void(QStringList, QString, QItemSelection)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QStringList, 95 }, { QMetaType::QString, 96 }, { 0x80000000 | 97, 98 },
        }}),
        // Slot 'setPictureList'
        QtMocHelpers::SlotData<void(QList<SlideShowItem> &, int, QString)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 100, 101 }, { QMetaType::Int, 90 }, { QMetaType::QString, 102 },
        }}),
        // Slot 'setVideo'
        QtMocHelpers::SlotData<void(VideoInfo &)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 104, 105 },
        }}),
        // Slot 'playVideo'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pauseVideo'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stopVideo'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setVideoPosition'
        QtMocHelpers::SlotData<void(qint64)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 110 },
        }}),
        // Slot 'videoStopped'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listShow_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_rbMultiVerse_toggled'
        QtMocHelpers::SlotData<void(bool)>(113, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 114 },
        }}),
        // Slot 'on_actionPrint_triggered'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrintSchedule_triggered'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextSlide'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevSlide'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleAdd_triggered'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleRemove_triggered'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScheduleClear_triggered'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(BibleHistory &)>(122, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 123, 124 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(Song &)>(122, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 125, 38 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(SlideShow &)>(122, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 126, 38 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(VideoInfo &)>(122, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 104, 127 },
        }}),
        // Slot 'addToShcedule'
        QtMocHelpers::SlotData<void(Announcement &)>(122, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 128, 129 },
        }}),
        // Slot 'reloadShceduleList'
        QtMocHelpers::SlotData<void()>(130, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_listWidgetSchedule_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(131, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 68, 45 },
        }}),
        // Slot 'on_listWidgetSchedule_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(132, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleTop_triggered'
        QtMocHelpers::SlotData<void()>(133, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleUp_triggered'
        QtMocHelpers::SlotData<void()>(134, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleDown_triggered'
        QtMocHelpers::SlotData<void()>(135, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveScheduleBottom_triggered'
        QtMocHelpers::SlotData<void()>(136, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewSchedule_triggered'
        QtMocHelpers::SlotData<void()>(137, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenSchedule_triggered'
        QtMocHelpers::SlotData<void()>(138, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveSchedule_triggered'
        QtMocHelpers::SlotData<void()>(139, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveScheduleAs_triggered'
        QtMocHelpers::SlotData<void()>(140, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseSchedule_triggered'
        QtMocHelpers::SlotData<void()>(141, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openSchedule'
        QtMocHelpers::SlotData<void()>(142, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveSchedule'
        QtMocHelpers::SlotData<void(bool)>(143, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 144 },
        }}),
        // Slot 'saveScheduleNew'
        QtMocHelpers::SlotData<void(QSqlQuery &)>(145, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const BibleHistory &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 150, 124 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Song &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 88, 38 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const SlideShow &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 151, 38 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const VideoInfo &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 152, 127 },
        }}),
        // Slot 'saveScheduleItemNew'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Announcement &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 92, 129 },
        }}),
        // Slot 'saveScheduleUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &)>(153, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const BibleHistory &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 150, 124 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Song &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 88, 38 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const SlideShow &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 151, 38 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const VideoInfo &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 152, 127 },
        }}),
        // Slot 'saveScheduleItemUpdate'
        QtMocHelpers::SlotData<void(QSqlQuery &, int, const Announcement &)>(154, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 92, 129 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, BibleHistory &)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 123, 124 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, Song &)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 125, 38 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, SlideShow &)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 126, 38 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, VideoInfo &)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 104, 127 },
        }}),
        // Slot 'openScheduleItem'
        QtMocHelpers::SlotData<void(QSqlQuery &, const int, Announcement &)>(155, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 146, 147 }, { QMetaType::Int, 149 }, { 0x80000000 | 128, 129 },
        }}),
        // Slot 'on_actionClear_triggered'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseDisplay_triggered'
        QtMocHelpers::SlotData<void()>(157, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCloseDisplayButtons'
        QtMocHelpers::SlotData<void(bool)>(158, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 159 },
        }}),
        // Slot 'sendBibleVerseToServer'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendSongVerseToServer'
        QtMocHelpers::SlotData<void()>(161, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'anyVerseOutputEnabled'
        QtMocHelpers::SlotData<bool()>(162, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'sendBibleImagesToProclaim'
        QtMocHelpers::SlotData<void(Verse)>(163, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 164, 165 },
        }}),
        // Slot 'showSongVerseSplit'
        QtMocHelpers::SlotData<void(bool)>(166, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 167 },
        }}),
        // Slot 'sendSongVerseSplit'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'splitSongVerse'
        QtMocHelpers::SlotData<QStringList(QString)>(169, 2, QMC::AccessPrivate, QMetaType::QStringList, {{
            { QMetaType::QString, 165 },
        }}),
        // Slot 'setSongVerseSplitList'
        QtMocHelpers::SlotData<void(int, QString)>(170, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 171 }, { QMetaType::QString, 172 },
        }}),
        // Slot 'setSongVerseSplitList'
        QtMocHelpers::SlotData<void(int)>(170, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 171 },
        }}),
        // Slot 'on_songVerseSplitListWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(173, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_songVerseSplitListWidget_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(174, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 175, 176 },
        }}),
        // Slot 'on_songVerseSplitListWidgetNavigation'
        QtMocHelpers::SlotData<void(Qt::Key)>(177, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 178, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SoftProjector, qt_meta_tag_ZN13SoftProjectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SoftProjector::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SoftProjectorE_t>.metaTypes,
    nullptr
} };

void SoftProjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SoftProjector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateSetting((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->positionDisplayWindow(); break;
        case 3: _t->updateScreen(); break;
        case 4: _t->httpServerState((*reinterpret_cast<std::add_pointer_t<bool&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[4]))); break;
        case 5: _t->proclaimServerState((*reinterpret_cast<std::add_pointer_t<bool&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int&>>(_a[4]))); break;
        case 6: _t->setWaitCursor(); break;
        case 7: _t->setArrowCursor(); break;
        case 8: _t->setAppDataDir((*reinterpret_cast<std::add_pointer_t<QDir>>(_a[1]))); break;
        case 9: _t->clearHttpOutput(); break;
        case 10: _t->showDisplayScreen((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->applySetting((*reinterpret_cast<std::add_pointer_t<GeneralSettings&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Theme&>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShowSettings&>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[6])),(*reinterpret_cast<std::add_pointer_t<BibleVersionSettings&>>(_a[7]))); break;
        case 12: _t->on_actionSong_Counter_triggered(); break;
        case 13: _t->on_projectTab_currentChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->updateEditActions(); break;
        case 15: _t->on_actionNew_triggered(); break;
        case 16: _t->on_actionEdit_triggered(); break;
        case 17: _t->on_actionCopy_triggered(); break;
        case 18: _t->on_actionDelete_triggered(); break;
        case 19: _t->updateWindowText(); break;
        case 20: _t->showBible(); break;
        case 21: _t->showSong((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->showAnnounce((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->showPicture((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->showVideo(); break;
        case 25: _t->retranslateUis(); break;
        case 26: _t->createLanguageActions(); break;
        case 27: _t->switchLanguage((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 28: _t->on_actionDonate_triggered(); break;
        case 29: _t->on_action_Help_triggered(); break;
        case 30: _t->on_actionManage_Database_triggered(); break;
        case 31: _t->on_actionAbout_triggered(); break;
        case 32: _t->on_listShow_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 33: _t->on_actionSettings_triggered(); break;
        case 34: _t->newSong(); break;
        case 35: _t->copySong(); break;
        case 36: _t->editSong(); break;
        case 37: _t->deleteSong(); break;
        case 38: _t->newSlideShow(); break;
        case 39: _t->editSlideShow(); break;
        case 40: _t->deleteSlideShow(); break;
        case 41: _t->addMediaToLibrary(); break;
        case 42: _t->removeMediaFromLibrary(); break;
        case 43: _t->newAnnouncement(); break;
        case 44: _t->editAnnouncement(); break;
        case 45: _t->copyAnnouncement(); break;
        case 46: _t->deleteAnnoucement(); break;
        case 47: _t->on_actionShow_triggered(); break;
        case 48: _t->on_actionHide_triggered(); break;
        case 49: _t->on_listShow_currentRowChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->on_actionClose_triggered(); break;
        case 51: _t->setSongList((*reinterpret_cast<std::add_pointer_t<Song>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 52: _t->setAnnounceText((*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 53: _t->setChapterList((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[3]))); break;
        case 54: _t->setPictureList((*reinterpret_cast<std::add_pointer_t<QList<SlideShowItem>&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 55: _t->setVideo((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 56: _t->playVideo(); break;
        case 57: _t->pauseVideo(); break;
        case 58: _t->stopVideo(); break;
        case 59: _t->setVideoPosition((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 60: _t->videoStopped(); break;
        case 61: _t->on_listShow_itemSelectionChanged(); break;
        case 62: _t->on_rbMultiVerse_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 63: _t->on_actionPrint_triggered(); break;
        case 64: _t->on_actionPrintSchedule_triggered(); break;
        case 65: _t->nextSlide(); break;
        case 66: _t->prevSlide(); break;
        case 67: _t->on_actionScheduleAdd_triggered(); break;
        case 68: _t->on_actionScheduleRemove_triggered(); break;
        case 69: _t->on_actionScheduleClear_triggered(); break;
        case 70: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[1]))); break;
        case 71: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<Song&>>(_a[1]))); break;
        case 72: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[1]))); break;
        case 73: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[1]))); break;
        case 74: _t->addToShcedule((*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[1]))); break;
        case 75: _t->reloadShceduleList(); break;
        case 76: _t->on_listWidgetSchedule_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 77: _t->on_listWidgetSchedule_itemSelectionChanged(); break;
        case 78: _t->on_actionMoveScheduleTop_triggered(); break;
        case 79: _t->on_actionMoveScheduleUp_triggered(); break;
        case 80: _t->on_actionMoveScheduleDown_triggered(); break;
        case 81: _t->on_actionMoveScheduleBottom_triggered(); break;
        case 82: _t->on_actionNewSchedule_triggered(); break;
        case 83: _t->on_actionOpenSchedule_triggered(); break;
        case 84: _t->on_actionSaveSchedule_triggered(); break;
        case 85: _t->on_actionSaveScheduleAs_triggered(); break;
        case 86: _t->on_actionCloseSchedule_triggered(); break;
        case 87: _t->openSchedule(); break;
        case 88: _t->saveSchedule((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 89: _t->saveScheduleNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1]))); break;
        case 90: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory>>(_a[3]))); break;
        case 91: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song>>(_a[3]))); break;
        case 92: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow>>(_a[3]))); break;
        case 93: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[3]))); break;
        case 94: _t->saveScheduleItemNew((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[3]))); break;
        case 95: _t->saveScheduleUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1]))); break;
        case 96: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory>>(_a[3]))); break;
        case 97: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song>>(_a[3]))); break;
        case 98: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow>>(_a[3]))); break;
        case 99: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo>>(_a[3]))); break;
        case 100: _t->saveScheduleItemUpdate((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement>>(_a[3]))); break;
        case 101: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<BibleHistory&>>(_a[3]))); break;
        case 102: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Song&>>(_a[3]))); break;
        case 103: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<SlideShow&>>(_a[3]))); break;
        case 104: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<VideoInfo&>>(_a[3]))); break;
        case 105: _t->openScheduleItem((*reinterpret_cast<std::add_pointer_t<QSqlQuery&>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<Announcement&>>(_a[3]))); break;
        case 106: _t->on_actionClear_triggered(); break;
        case 107: _t->on_actionCloseDisplay_triggered(); break;
        case 108: _t->updateCloseDisplayButtons((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 109: _t->sendBibleVerseToServer(); break;
        case 110: _t->sendSongVerseToServer(); break;
        case 111: { bool _r = _t->anyVerseOutputEnabled();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 112: _t->sendBibleImagesToProclaim((*reinterpret_cast<std::add_pointer_t<Verse>>(_a[1]))); break;
        case 113: _t->showSongVerseSplit((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 114: _t->sendSongVerseSplit(); break;
        case 115: { QStringList _r = _t->splitSongVerse((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QStringList*>(_a[0]) = std::move(_r); }  break;
        case 116: _t->setSongVerseSplitList((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 117: _t->setSongVerseSplitList((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 118: _t->on_songVerseSplitListWidget_itemSelectionChanged(); break;
        case 119: _t->on_songVerseSplitListWidget_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 120: _t->on_songVerseSplitListWidgetNavigation((*reinterpret_cast<std::add_pointer_t<Qt::Key>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SoftProjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftProjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SoftProjectorE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SoftProjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 121)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 121;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 121)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 121;
    }
    return _id;
}
QT_WARNING_POP
