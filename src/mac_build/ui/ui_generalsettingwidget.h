/********************************************************************************
** Form generated from reading UI file 'generalsettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGWIDGET_H
#define UI_GENERALSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralSettingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxDisplayOnTop;
    QCheckBox *checkBoxUseDarkTheme;
    QLabel *labelDarkThemeInfo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBoxTheme;
    QPushButton *pushButtonAddTheme;
    QGroupBox *groupBoxDisplayScreen;
    QGridLayout *gridLayout;
    QComboBox *comboBoxDisplayScreen_2;
    QComboBox *comboBoxDisplayScreen;
    QLabel *label_displayScreen_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_displayScreen;
    QComboBox *comboBoxDisplayScreen_3;
    QLabel *label_displayScreen_3;
    QLabel *label_displayScreen_21;
    QCheckBox *checkBoxDisplayOnStartUp;
    QLabel *label_displayScreen_4;
    QComboBox *comboBoxDisplayScreen_4;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBoxDisplayControls;
    QGridLayout *gridLayout_4;
    QLabel *labelControlsInfo;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIconSize;
    QComboBox *comboBoxIconSize;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelAlignment;
    QComboBox *comboBoxControlsAlignV;
    QComboBox *comboBoxControlsAlignH;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelOpacity;
    QLabel *labelTransparent;
    QSlider *horizontalSliderOpacity;
    QLabel *labelOpaque;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_5;
    QSpinBox *spinBoxWebSocketPort;
    QSpacerItem *horizontalSpacer_51;
    QLabel *label_httpPort;
    QCheckBox *checkBoxSendSongs;
    QCheckBox *checkBoxDisableScreens;
    QLabel *label_webSocketPort;
    QSpinBox *spinBoxHttpPort;
    QCheckBox *checkBoxEnableHttpServer;
    QLabel *label_ipAddress;
    QLineEdit *lineEditHTTPServerIPAddress;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *GeneralSettingWidget)
    {
        if (GeneralSettingWidget->objectName().isEmpty())
            GeneralSettingWidget->setObjectName("GeneralSettingWidget");
        GeneralSettingWidget->resize(371, 519);
        verticalLayout = new QVBoxLayout(GeneralSettingWidget);
        verticalLayout->setObjectName("verticalLayout");
        checkBoxDisplayOnTop = new QCheckBox(GeneralSettingWidget);
        checkBoxDisplayOnTop->setObjectName("checkBoxDisplayOnTop");

        verticalLayout->addWidget(checkBoxDisplayOnTop);

        checkBoxUseDarkTheme = new QCheckBox(GeneralSettingWidget);
        checkBoxUseDarkTheme->setObjectName("checkBoxUseDarkTheme");

        verticalLayout->addWidget(checkBoxUseDarkTheme);

        labelDarkThemeInfo = new QLabel(GeneralSettingWidget);
        labelDarkThemeInfo->setObjectName("labelDarkThemeInfo");

        verticalLayout->addWidget(labelDarkThemeInfo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(GeneralSettingWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        comboBoxTheme = new QComboBox(GeneralSettingWidget);
        comboBoxTheme->setObjectName("comboBoxTheme");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxTheme->sizePolicy().hasHeightForWidth());
        comboBoxTheme->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBoxTheme);

        pushButtonAddTheme = new QPushButton(GeneralSettingWidget);
        pushButtonAddTheme->setObjectName("pushButtonAddTheme");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/add.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonAddTheme->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonAddTheme);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBoxDisplayScreen = new QGroupBox(GeneralSettingWidget);
        groupBoxDisplayScreen->setObjectName("groupBoxDisplayScreen");
        gridLayout = new QGridLayout(groupBoxDisplayScreen);
        gridLayout->setObjectName("gridLayout");
        comboBoxDisplayScreen_2 = new QComboBox(groupBoxDisplayScreen);
        comboBoxDisplayScreen_2->setObjectName("comboBoxDisplayScreen_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxDisplayScreen_2->sizePolicy().hasHeightForWidth());
        comboBoxDisplayScreen_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxDisplayScreen_2, 1, 1, 1, 1);

        comboBoxDisplayScreen = new QComboBox(groupBoxDisplayScreen);
        comboBoxDisplayScreen->setObjectName("comboBoxDisplayScreen");
        sizePolicy.setHeightForWidth(comboBoxDisplayScreen->sizePolicy().hasHeightForWidth());
        comboBoxDisplayScreen->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxDisplayScreen, 0, 1, 1, 1);

        label_displayScreen_2 = new QLabel(groupBoxDisplayScreen);
        label_displayScreen_2->setObjectName("label_displayScreen_2");
        label_displayScreen_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_displayScreen_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(162, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        label_displayScreen = new QLabel(groupBoxDisplayScreen);
        label_displayScreen->setObjectName("label_displayScreen");
        label_displayScreen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_displayScreen, 0, 0, 1, 1);

        comboBoxDisplayScreen_3 = new QComboBox(groupBoxDisplayScreen);
        comboBoxDisplayScreen_3->setObjectName("comboBoxDisplayScreen_3");
        sizePolicy1.setHeightForWidth(comboBoxDisplayScreen_3->sizePolicy().hasHeightForWidth());
        comboBoxDisplayScreen_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBoxDisplayScreen_3, 2, 1, 1, 1);

        label_displayScreen_3 = new QLabel(groupBoxDisplayScreen);
        label_displayScreen_3->setObjectName("label_displayScreen_3");
        label_displayScreen_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_displayScreen_3, 2, 0, 1, 1);

        label_displayScreen_21 = new QLabel(groupBoxDisplayScreen);
        label_displayScreen_21->setObjectName("label_displayScreen_21");
        label_displayScreen_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_displayScreen_21, 1, 0, 1, 1);

        checkBoxDisplayOnStartUp = new QCheckBox(groupBoxDisplayScreen);
        checkBoxDisplayOnStartUp->setObjectName("checkBoxDisplayOnStartUp");

        gridLayout->addWidget(checkBoxDisplayOnStartUp, 4, 0, 1, 3);

        label_displayScreen_4 = new QLabel(groupBoxDisplayScreen);
        label_displayScreen_4->setObjectName("label_displayScreen_4");
        label_displayScreen_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_displayScreen_4, 3, 0, 1, 1);

        comboBoxDisplayScreen_4 = new QComboBox(groupBoxDisplayScreen);
        comboBoxDisplayScreen_4->setObjectName("comboBoxDisplayScreen_4");

        gridLayout->addWidget(comboBoxDisplayScreen_4, 3, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 2, 1, 1);


        verticalLayout->addWidget(groupBoxDisplayScreen);

        groupBoxDisplayControls = new QGroupBox(GeneralSettingWidget);
        groupBoxDisplayControls->setObjectName("groupBoxDisplayControls");
        gridLayout_4 = new QGridLayout(groupBoxDisplayControls);
        gridLayout_4->setObjectName("gridLayout_4");
        labelControlsInfo = new QLabel(groupBoxDisplayControls);
        labelControlsInfo->setObjectName("labelControlsInfo");
        labelControlsInfo->setWordWrap(true);

        gridLayout_4->addWidget(labelControlsInfo, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelIconSize = new QLabel(groupBoxDisplayControls);
        labelIconSize->setObjectName("labelIconSize");

        horizontalLayout->addWidget(labelIconSize);

        comboBoxIconSize = new QComboBox(groupBoxDisplayControls);
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->addItem(QString());
        comboBoxIconSize->setObjectName("comboBoxIconSize");

        horizontalLayout->addWidget(comboBoxIconSize);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        labelAlignment = new QLabel(groupBoxDisplayControls);
        labelAlignment->setObjectName("labelAlignment");

        horizontalLayout->addWidget(labelAlignment);

        comboBoxControlsAlignV = new QComboBox(groupBoxDisplayControls);
        comboBoxControlsAlignV->addItem(QString());
        comboBoxControlsAlignV->addItem(QString());
        comboBoxControlsAlignV->addItem(QString());
        comboBoxControlsAlignV->setObjectName("comboBoxControlsAlignV");

        horizontalLayout->addWidget(comboBoxControlsAlignV);

        comboBoxControlsAlignH = new QComboBox(groupBoxDisplayControls);
        comboBoxControlsAlignH->addItem(QString());
        comboBoxControlsAlignH->addItem(QString());
        comboBoxControlsAlignH->addItem(QString());
        comboBoxControlsAlignH->setObjectName("comboBoxControlsAlignH");

        horizontalLayout->addWidget(comboBoxControlsAlignH);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelOpacity = new QLabel(groupBoxDisplayControls);
        labelOpacity->setObjectName("labelOpacity");

        horizontalLayout_3->addWidget(labelOpacity);

        labelTransparent = new QLabel(groupBoxDisplayControls);
        labelTransparent->setObjectName("labelTransparent");

        horizontalLayout_3->addWidget(labelTransparent);

        horizontalSliderOpacity = new QSlider(groupBoxDisplayControls);
        horizontalSliderOpacity->setObjectName("horizontalSliderOpacity");
        horizontalSliderOpacity->setMaximum(102);
        horizontalSliderOpacity->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderOpacity);

        labelOpaque = new QLabel(groupBoxDisplayControls);
        labelOpaque->setObjectName("labelOpaque");

        horizontalLayout_3->addWidget(labelOpaque);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBoxDisplayControls);

        gridGroupBox = new QGroupBox(GeneralSettingWidget);
        gridGroupBox->setObjectName("gridGroupBox");
        gridLayout_5 = new QGridLayout(gridGroupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(9, 9, 9, 9);
        spinBoxWebSocketPort = new QSpinBox(gridGroupBox);
        spinBoxWebSocketPort->setObjectName("spinBoxWebSocketPort");
        spinBoxWebSocketPort->setMinimumSize(QSize(60, 0));
        spinBoxWebSocketPort->setFrame(true);
        spinBoxWebSocketPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxWebSocketPort->setMaximum(9999);
        spinBoxWebSocketPort->setValue(8089);

        gridLayout_5->addWidget(spinBoxWebSocketPort, 5, 1, 1, 1);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_51, 4, 2, 1, 1);

        label_httpPort = new QLabel(gridGroupBox);
        label_httpPort->setObjectName("label_httpPort");
        label_httpPort->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_httpPort->sizePolicy().hasHeightForWidth());
        label_httpPort->setSizePolicy(sizePolicy2);
        label_httpPort->setMinimumSize(QSize(0, 0));
        label_httpPort->setMaximumSize(QSize(16777213, 16777215));

        gridLayout_5->addWidget(label_httpPort, 4, 0, 1, 1);

        checkBoxSendSongs = new QCheckBox(gridGroupBox);
        checkBoxSendSongs->setObjectName("checkBoxSendSongs");
        checkBoxSendSongs->setChecked(true);

        gridLayout_5->addWidget(checkBoxSendSongs, 7, 0, 1, 3);

        checkBoxDisableScreens = new QCheckBox(gridGroupBox);
        checkBoxDisableScreens->setObjectName("checkBoxDisableScreens");

        gridLayout_5->addWidget(checkBoxDisableScreens, 8, 0, 1, 3);

        label_webSocketPort = new QLabel(gridGroupBox);
        label_webSocketPort->setObjectName("label_webSocketPort");

        gridLayout_5->addWidget(label_webSocketPort, 5, 0, 1, 1);

        spinBoxHttpPort = new QSpinBox(gridGroupBox);
        spinBoxHttpPort->setObjectName("spinBoxHttpPort");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoxHttpPort->sizePolicy().hasHeightForWidth());
        spinBoxHttpPort->setSizePolicy(sizePolicy3);
        spinBoxHttpPort->setMinimumSize(QSize(60, 0));
        spinBoxHttpPort->setFrame(true);
        spinBoxHttpPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxHttpPort->setMaximum(9999);
        spinBoxHttpPort->setValue(8087);

        gridLayout_5->addWidget(spinBoxHttpPort, 4, 1, 1, 1);

        checkBoxEnableHttpServer = new QCheckBox(gridGroupBox);
        checkBoxEnableHttpServer->setObjectName("checkBoxEnableHttpServer");

        gridLayout_5->addWidget(checkBoxEnableHttpServer, 0, 0, 1, 3);

        label_ipAddress = new QLabel(gridGroupBox);
        label_ipAddress->setObjectName("label_ipAddress");

        gridLayout_5->addWidget(label_ipAddress, 2, 0, 1, 1);

        lineEditHTTPServerIPAddress = new QLineEdit(gridGroupBox);
        lineEditHTTPServerIPAddress->setObjectName("lineEditHTTPServerIPAddress");

        gridLayout_5->addWidget(lineEditHTTPServerIPAddress, 2, 1, 1, 1);


        verticalLayout->addWidget(gridGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButtonDefault = new QPushButton(GeneralSettingWidget);
        pushButtonDefault->setObjectName("pushButtonDefault");

        gridLayout_2->addWidget(pushButtonDefault, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        QWidget::setTabOrder(checkBoxDisplayOnTop, comboBoxTheme);
        QWidget::setTabOrder(comboBoxTheme, pushButtonAddTheme);
        QWidget::setTabOrder(pushButtonAddTheme, comboBoxDisplayScreen);
        QWidget::setTabOrder(comboBoxDisplayScreen, comboBoxDisplayScreen_2);
        QWidget::setTabOrder(comboBoxDisplayScreen_2, comboBoxIconSize);
        QWidget::setTabOrder(comboBoxIconSize, comboBoxControlsAlignV);
        QWidget::setTabOrder(comboBoxControlsAlignV, comboBoxControlsAlignH);
        QWidget::setTabOrder(comboBoxControlsAlignH, horizontalSliderOpacity);
        QWidget::setTabOrder(horizontalSliderOpacity, pushButtonDefault);

        retranslateUi(GeneralSettingWidget);

        QMetaObject::connectSlotsByName(GeneralSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettingWidget)
    {
#if QT_CONFIG(tooltip)
        checkBoxDisplayOnTop->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "If checked, the screen \"window\" is always drawn on top of other windows. This prevents the user from accidently drawing a window onto the projector's screen.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxDisplayOnTop->setText(QCoreApplication::translate("GeneralSettingWidget", "Display window always on top", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseDarkTheme->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Immediately Updates Registry", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseDarkTheme->setText(QCoreApplication::translate("GeneralSettingWidget", "Use Dark Theme", nullptr));
#if QT_CONFIG(tooltip)
        labelDarkThemeInfo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        labelDarkThemeInfo->setText(QCoreApplication::translate("GeneralSettingWidget", "NOTE: You can customize the settings in 'DarkTheme.ini'", nullptr));
        label->setText(QCoreApplication::translate("GeneralSettingWidget", "Theme:", nullptr));
        pushButtonAddTheme->setText(QCoreApplication::translate("GeneralSettingWidget", "Add New Theme", nullptr));
        groupBoxDisplayScreen->setTitle(QCoreApplication::translate("GeneralSettingWidget", "Display Screen Selection", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxDisplayScreen_2->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Select onto which screen to display", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        comboBoxDisplayScreen->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Select onto which screen to display", nullptr));
#endif // QT_CONFIG(tooltip)
        label_displayScreen_2->setText(QCoreApplication::translate("GeneralSettingWidget", "Secondary Display Screen:", nullptr));
        label_displayScreen->setText(QCoreApplication::translate("GeneralSettingWidget", "Primary Display Screen:", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxDisplayScreen_3->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Select onto which screen to display", nullptr));
#endif // QT_CONFIG(tooltip)
        label_displayScreen_3->setText(QCoreApplication::translate("GeneralSettingWidget", "Tertiary Display Screen:", nullptr));
        label_displayScreen_21->setText(QCoreApplication::translate("GeneralSettingWidget", "Secondary Display Screen:", nullptr));
        checkBoxDisplayOnStartUp->setText(QCoreApplication::translate("GeneralSettingWidget", "Show Display Screen on SoftProjector Startup", nullptr));
        label_displayScreen_4->setText(QCoreApplication::translate("GeneralSettingWidget", "Quaternary Display Screen:", nullptr));
#if QT_CONFIG(tooltip)
        comboBoxDisplayScreen_4->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Select onto which screen to display", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxDisplayControls->setTitle(QCoreApplication::translate("GeneralSettingWidget", "Primary Display Screen Controls", nullptr));
        labelControlsInfo->setText(QCoreApplication::translate("GeneralSettingWidget", "NOTE: Display screen controls will be visible on the primary display screen only when one monitor is avaliable.", nullptr));
        labelIconSize->setText(QCoreApplication::translate("GeneralSettingWidget", "Button Size:", nullptr));
        comboBoxIconSize->setItemText(0, QCoreApplication::translate("GeneralSettingWidget", "16x16", nullptr));
        comboBoxIconSize->setItemText(1, QCoreApplication::translate("GeneralSettingWidget", "24x24", nullptr));
        comboBoxIconSize->setItemText(2, QCoreApplication::translate("GeneralSettingWidget", "32x32", nullptr));
        comboBoxIconSize->setItemText(3, QCoreApplication::translate("GeneralSettingWidget", "48x48", nullptr));
        comboBoxIconSize->setItemText(4, QCoreApplication::translate("GeneralSettingWidget", "64x64", nullptr));
        comboBoxIconSize->setItemText(5, QCoreApplication::translate("GeneralSettingWidget", "96x96", nullptr));

        labelAlignment->setText(QCoreApplication::translate("GeneralSettingWidget", "Alignment:", nullptr));
        comboBoxControlsAlignV->setItemText(0, QCoreApplication::translate("GeneralSettingWidget", "Top", nullptr));
        comboBoxControlsAlignV->setItemText(1, QCoreApplication::translate("GeneralSettingWidget", "Middle", nullptr));
        comboBoxControlsAlignV->setItemText(2, QCoreApplication::translate("GeneralSettingWidget", "Bottom", nullptr));

        comboBoxControlsAlignH->setItemText(0, QCoreApplication::translate("GeneralSettingWidget", "Left", nullptr));
        comboBoxControlsAlignH->setItemText(1, QCoreApplication::translate("GeneralSettingWidget", "Center", nullptr));
        comboBoxControlsAlignH->setItemText(2, QCoreApplication::translate("GeneralSettingWidget", "Right", nullptr));

        labelOpacity->setText(QCoreApplication::translate("GeneralSettingWidget", "Opacity:", nullptr));
        labelTransparent->setText(QCoreApplication::translate("GeneralSettingWidget", "Transparent", nullptr));
        labelOpaque->setText(QCoreApplication::translate("GeneralSettingWidget", "Opaque", nullptr));
        gridGroupBox->setTitle(QCoreApplication::translate("GeneralSettingWidget", "HTTP Server (changes require restart)", nullptr));
        label_httpPort->setText(QCoreApplication::translate("GeneralSettingWidget", "HTTP Port:", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxSendSongs->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Send song verses over WebSocket when HTTP mode is active.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxSendSongs->setText(QCoreApplication::translate("GeneralSettingWidget", "Send Songs", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxDisableScreens->setToolTip(QCoreApplication::translate("GeneralSettingWidget", "Disable display forms for HTTP-only use (restart required).", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxDisableScreens->setText(QCoreApplication::translate("GeneralSettingWidget", "Disable Screens", nullptr));
        label_webSocketPort->setText(QCoreApplication::translate("GeneralSettingWidget", "WebSocket Port:", nullptr));
        checkBoxEnableHttpServer->setText(QCoreApplication::translate("GeneralSettingWidget", "Enable HTTP Server", nullptr));
        label_ipAddress->setText(QCoreApplication::translate("GeneralSettingWidget", "IP Address:", nullptr));
        pushButtonDefault->setText(QCoreApplication::translate("GeneralSettingWidget", "Reset All To Default", nullptr));
        (void)GeneralSettingWidget;
    } // retranslateUi

};

namespace Ui {
    class GeneralSettingWidget: public Ui_GeneralSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSETTINGWIDGET_H
