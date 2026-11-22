/***************************************************************************
//
//    softProjector - an open source media projection software
//    Copyright (C) 2017  Vladislav Kobzar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation version 3 of the License.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
***************************************************************************/

#include "../headers/generalsettingwidget.hpp"
#include "ui_generalsettingwidget.h"

GeneralSettingWidget::GeneralSettingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeneralSettingWidget)
{
    ui->setupUi(this);
}

GeneralSettingWidget::~GeneralSettingWidget()
{
    delete ui;
}

void GeneralSettingWidget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
     switch ( e->type() ) {
     case QEvent::LanguageChange:
         ui->retranslateUi(this);
         break;
     default:
         break;
     }
}

void GeneralSettingWidget::setSettings(GeneralSettings settings)
{
    mySettings = settings;
    loadSettings();
}

void GeneralSettingWidget::loadSettings()
{
    ui->checkBoxDisplayOnTop->setChecked(mySettings.displayIsOnTop);
    QSettings settings("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",QSettings::NativeFormat);
    if(settings.value("SoftProjectorUseLightTheme")==0)
        ui->checkBoxUseDarkTheme->setChecked(true);
    else
        ui->checkBoxUseDarkTheme->setChecked(false);
    ui->labelDarkThemeInfo->setToolTip(qApp->applicationDirPath()+"/DarkTheme.ini");
    ui->checkBoxDisplayOnStartUp->setChecked(mySettings.displayOnStartUp);

    // Load Themes
    loadThemes();
    ui->comboBoxTheme->setCurrentIndex(themeIdList.indexOf(mySettings.currentThemeId));

    // Get display screen infomration
    monitors.clear();

    int screen_count = QApplication::screens().count();
    int i = 1;
    ui->comboBoxDisplayScreen->clear();
    for(QScreen * s: QApplication::screens())
    {
        QString label = QString("%1 - %2 - %3x%4 at (%5, %6)").arg(i).arg(s->name())
                .arg(s->geometry().width()).arg(s->geometry().height())
                .arg(s->geometry().x()).arg(s->geometry().y());
        if(s==QGuiApplication::primaryScreen())
            label += tr(" [main]");
        monitors << label;
        ++i;
    }

    if(screen_count>1)
    {
        ui->groupBoxDisplayScreen->setEnabled(true);
    }
    else
    {
        ui->groupBoxDisplayScreen->setEnabled(false);
    }

    // Fill display screen comboBoxes
    ui->comboBoxDisplayScreen->clear();
    ui->comboBoxDisplayScreen->addItems(monitors);
    ui->comboBoxDisplayScreen_2->clear();
    ui->comboBoxDisplayScreen_2->addItem(tr("none"));
    ui->comboBoxDisplayScreen_2->addItems(monitors);
    ui->comboBoxDisplayScreen_3->clear();
    ui->comboBoxDisplayScreen_3->addItem(tr("none"));
    ui->comboBoxDisplayScreen_3->addItems(monitors);
    ui->comboBoxDisplayScreen_4->clear();
    ui->comboBoxDisplayScreen_4->addItem(tr("none"));
    ui->comboBoxDisplayScreen_4->addItems(monitors);

    // Set primary display screen
    if(mySettings.displayScreen<0 || mySettings.displayScreen>=screen_count)
        ui->comboBoxDisplayScreen->setCurrentIndex(0);
    else
        ui->comboBoxDisplayScreen->setCurrentIndex(mySettings.displayScreen);

    // Set secondary display screen
    if(mySettings.displayScreen2<-1 || mySettings.displayScreen2>=screen_count)
        ui->comboBoxDisplayScreen_2->setCurrentIndex(0);
    else
        ui->comboBoxDisplayScreen_2->setCurrentIndex(mySettings.displayScreen2+1);

    // Set third display screen
    if(mySettings.displayScreen3<-1 || mySettings.displayScreen3>=screen_count)
        ui->comboBoxDisplayScreen_3->setCurrentIndex(0);
    else
        ui->comboBoxDisplayScreen_3->setCurrentIndex(mySettings.displayScreen3+1);

    // Set fourth display screen
    if(mySettings.displayScreen4<-1 || mySettings.displayScreen4>=screen_count)
        ui->comboBoxDisplayScreen_4->setCurrentIndex(0);
    else
        ui->comboBoxDisplayScreen_4->setCurrentIndex(mySettings.displayScreen4+1);

    if(screen_count -1 <2)
    {
        ui->comboBoxDisplayScreen_2->setCurrentIndex(0);
        ui->comboBoxDisplayScreen_2->setEnabled(false);
        ui->comboBoxDisplayScreen_2->setToolTip("Display unavailable");
    }

    if(ui->comboBoxDisplayScreen_2->currentIndex() == 0)
        ui->comboBoxDisplayScreen_3->setEnabled(false);

    if(screen_count -1 <3)
    {
        ui->comboBoxDisplayScreen_3->setCurrentIndex(0);
        ui->comboBoxDisplayScreen_3->setEnabled(false);
        ui->comboBoxDisplayScreen_3->setToolTip("Display unavailable");
    }

    if(screen_count -1 <4)
    {
        ui->comboBoxDisplayScreen_4->setCurrentIndex(0);
        ui->comboBoxDisplayScreen_4->setEnabled(false);
        ui->comboBoxDisplayScreen_4->setToolTip("Display unavailable");
    }
    updateSecondaryDisplayScreen();

    // Set Display Controls
    if(screen_count>1)
        ui->groupBoxDisplayControls->setEnabled(false);
    else
        ui->groupBoxDisplayControls->setEnabled(true);
    ui->comboBoxIconSize->setCurrentIndex(mySettings.displayControls.buttonSize);
    ui->comboBoxControlsAlignV->setCurrentIndex(mySettings.displayControls.alignmentV);
    ui->comboBoxControlsAlignH->setCurrentIndex(mySettings.displayControls.alignmentH);
    ui->horizontalSliderOpacity->setValue(mySettings.displayControls.opacity*100);

    // HTTP server
    ui->checkBoxEnableHttpServer->setChecked(mySettings.httpServerEnabled);
    ui->lineEditHTTPServerIPAddress->setText(mySettings.httpServerIPAddress);
    ui->spinBoxHttpPort->setValue(mySettings.httpServerPort);
    ui->spinBoxWebSocketPort->setValue(mySettings.webSocketServerPort);
    ui->checkBoxSendSongs->setChecked(mySettings.httpSendSongs);
    ui->checkBoxDisableScreens->setChecked(mySettings.disableScreens);
}

void GeneralSettingWidget::loadThemes()
{
    QSqlQuery sq;
    sq.exec("SELECT id, name FROM Themes");
    themeIdList.clear();
    themes.clear();
    while(sq.next())
    {
        themeIdList<< sq.value(0).toInt();
        themes<<sq.value(1).toString();
    }
    ui->comboBoxTheme->clear();
    ui->comboBoxTheme->addItems(themes);
}

GeneralSettings GeneralSettingWidget::getSettings()
{
    mySettings.displayIsOnTop = ui->checkBoxDisplayOnTop->isChecked();
    mySettings.useDarkTheme = ui->checkBoxUseDarkTheme->isChecked();
    mySettings.displayOnStartUp = ui->checkBoxDisplayOnStartUp->isChecked();

    int tmx = ui->comboBoxTheme->currentIndex();
    if(tmx != -1)
        mySettings.currentThemeId = themeIdList.at(tmx);
    else
        mySettings.currentThemeId = 0;

    mySettings.displayScreen = ui->comboBoxDisplayScreen->currentIndex();
    mySettings.displayScreen2 = monitors.indexOf(ui->comboBoxDisplayScreen_2->currentText());    
    mySettings.displayScreen3 = monitors.indexOf(ui->comboBoxDisplayScreen_3->currentText());
    mySettings.displayScreen4 = monitors.indexOf(ui->comboBoxDisplayScreen_4->currentText());
    mySettings.displayScreenKey = Settings::screenKey(mySettings.displayScreen);
    mySettings.displayScreenKey2 = Settings::screenKey(mySettings.displayScreen2);
    mySettings.displayScreenKey3 = Settings::screenKey(mySettings.displayScreen3);
    mySettings.displayScreenKey4 = Settings::screenKey(mySettings.displayScreen4);

    mySettings.displayControls.buttonSize = ui->comboBoxIconSize->currentIndex();
    mySettings.displayControls.alignmentV = ui->comboBoxControlsAlignV->currentIndex();
    mySettings.displayControls.alignmentH = ui->comboBoxControlsAlignH->currentIndex();
    qreal r = ui->horizontalSliderOpacity->value();
    r = r/100;
    mySettings.displayControls.opacity = r;

    mySettings.httpServerEnabled = ui->checkBoxEnableHttpServer->isChecked();
    mySettings.httpServerIPAddress = ui->lineEditHTTPServerIPAddress->text();
    mySettings.httpServerPort = ui->spinBoxHttpPort->value();
    mySettings.webSocketServerPort = ui->spinBoxWebSocketPort->value();
    mySettings.httpSendSongs = ui->checkBoxSendSongs->isChecked();
    mySettings.disableScreens = ui->checkBoxDisableScreens->isChecked();

    return mySettings;
}

void GeneralSettingWidget::on_pushButtonDefault_clicked()
{
    GeneralSettings g;
    mySettings = g;
    loadSettings();
}

void GeneralSettingWidget::updateSecondaryDisplayScreen()
{
    QString ds1 = ui->comboBoxDisplayScreen->currentText();
    QString ds2 = ui->comboBoxDisplayScreen_2->currentText();
    QString ds3 = ui->comboBoxDisplayScreen_3->currentText();
    QString ds4 = ui->comboBoxDisplayScreen_4->currentText();
    QStringList monitors2 = monitors;
    //Display 2 (ds2)
    monitors2.removeOne(ds1);

    ui->comboBoxDisplayScreen_2->clear();
    ui->comboBoxDisplayScreen_2->addItem(tr("None"));
    ui->comboBoxDisplayScreen_2->addItems(monitors2);

    int i = ui->comboBoxDisplayScreen_2->findText(ds2);
    if(i != -1)
        ui->comboBoxDisplayScreen_2->setCurrentIndex(i);
    else
    {
        ui->comboBoxDisplayScreen_2->setCurrentIndex(0);
        emit setDisp2Use(false);
    }

    // Display 3 (ds3)
    monitors2.removeOne(ds1);
    monitors2.removeOne(ds2);

    ui->comboBoxDisplayScreen_3->clear();
    ui->comboBoxDisplayScreen_3->addItem(tr("None"));
    ui->comboBoxDisplayScreen_3->addItems(monitors2);

    i = ui->comboBoxDisplayScreen_3->findText(ds3);
    if(i != -1)
        ui->comboBoxDisplayScreen_3->setCurrentIndex(i);
    else
    {
        ui->comboBoxDisplayScreen_3->setCurrentIndex(0);
        emit setDisp3Use(false);
    }

    // Display 4 (ds4)
    monitors2.removeOne(ds1);
    monitors2.removeOne(ds2);
    monitors2.removeOne(ds3);

    ui->comboBoxDisplayScreen_4->clear();
    ui->comboBoxDisplayScreen_4->addItem(tr("None"));
    ui->comboBoxDisplayScreen_4->addItems(monitors2);

    i = ui->comboBoxDisplayScreen_4->findText(ds4);
    if(i != -1)
        ui->comboBoxDisplayScreen_4->setCurrentIndex(i);
    else
    {
        ui->comboBoxDisplayScreen_4->setCurrentIndex(0);
        emit setDisp4Use(false);
    }
}

void GeneralSettingWidget::on_comboBoxDisplayScreen_activated(int index)
{
    Q_UNUSED(index);
    updateSecondaryDisplayScreen();
}

void GeneralSettingWidget::on_comboBoxDisplayScreen_2_activated(int index)
{
    updateSecondaryDisplayScreen();
    int screen_count = QGuiApplication::screens().count();
    if(index<=0)
    {
        emit setDisp2Use(false);
        ui->comboBoxDisplayScreen_3->setEnabled(false);
    }
    else
    {
        emit setDisp2Use(true);
        if(screen_count -1 >=3)
            ui->comboBoxDisplayScreen_3->setEnabled(true);
    }
}

void GeneralSettingWidget::on_comboBoxDisplayScreen_3_activated(int index)
{
    updateSecondaryDisplayScreen();
    int screen_count = QGuiApplication::screens().count();
    if(index<=0)
    {
        emit setDisp3Use(false);
        ui->comboBoxDisplayScreen_4->setEnabled(false);
    }

    else
    {
        emit setDisp3Use(true);
        if(screen_count -1 >=4)
            ui->comboBoxDisplayScreen_4->setEnabled(true);
    }
}

void GeneralSettingWidget::on_comboBoxDisplayScreen_4_activated(int index)
{
    if(index<=0)
        emit setDisp4Use(false);
    else
        emit setDisp4Use(true);
}

void GeneralSettingWidget::on_pushButtonAddTheme_clicked()
{
    Theme tm;
    ThemeInfo tmi;
    int nId;

    AddSongbookDialog theme_dia;
    theme_dia.setWindowTitle(tr("Edit Theme"));
    theme_dia.setWindowText(tr("Theme Name:"),tr("Comments:"));
    theme_dia.setSongbook(tr("Default"),tr("This theme will contain program default settings."));
    int ret = theme_dia.exec();
    switch(ret)
    {
    case AddSongbookDialog::Accepted:
        tmi.name = theme_dia.title;
        tmi.comments = theme_dia.info;
        tm.setThemeInfo(tmi);
        tm.saveThemeNew();
        nId = tm.getThemeId();

        loadThemes();

        ui->comboBoxTheme->setCurrentIndex(themeIdList.indexOf(nId));
        emit themeChanged(nId);

        break;
    case AddSongbookDialog::Rejected:
        break;
    }
}

void GeneralSettingWidget::on_comboBoxTheme_activated(int index)
{
    emit themeChanged(themeIdList.at(index));
}

void GeneralSettingWidget::on_checkBoxUseDarkTheme_clicked()
{
    QSettings settings("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize", QSettings::NativeFormat);
    if (ui->checkBoxUseDarkTheme->isChecked())
        settings.setValue("SoftProjectorUseLightTheme", 0);
    else
        settings.setValue("SoftProjectorUseLightTheme", 1);
    QMessageBox msgBox;
    msgBox.setText("Re-launch the application for the changes to take place.");
    msgBox.exec();
}

void GeneralSettingWidget::on_pushButtonIdentifyScreens_clicked()
{
    // Show the screen number in large text on every screen for a few seconds
    QList<QScreen*> screens = QGuiApplication::screens();
    for(int i(0);i<screens.count();++i)
    {
        QScreen *s = screens.at(i);
        QLabel *l = new QLabel(QString("%1\n%2").arg(i+1).arg(s->name()));
        l->setAttribute(Qt::WA_DeleteOnClose);
        l->setWindowFlags(Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
        l->setAlignment(Qt::AlignCenter);
        l->setStyleSheet("QLabel { background-color: black; color: white; border: 6px solid white; }");
        QFont f = l->font();
        f.setPointSize(s->geometry().height()/12);
        f.setBold(true);
        l->setFont(f);
        QRect g = s->geometry();
        l->setGeometry(g.x()+g.width()/4, g.y()+g.height()/4, g.width()/2, g.height()/2);
        l->show();
        QTimer::singleShot(4000, l, &QLabel::close);
    }
}
