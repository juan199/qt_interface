/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionNext;
    QAction *actionPrevious;
    QAction *actionActionAboutUs;
    QAction *actionAboutQt;
    QAction *actionShuffle;
    QAction *actionMute;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QSlider *vSlider;
    QLabel *art;
    QLabel *infoLabel;
    QDial *dial;
    QProgressBar *progressBar;
    QLabel *status;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playbutton;
    QPushButton *stopbutton;
    QPushButton *nextbutton;
    QPushButton *prebutton;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *shuffle;
    QPushButton *mute;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControls;
    QMenu *menuAbout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(650, 450);
        MainWindow->setMaximumSize(QSize(650, 450));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/play.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(32, 32));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon2);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon5);
        actionPrevious = new QAction(MainWindow);
        actionPrevious->setObjectName(QStringLiteral("actionPrevious"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon/pre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious->setIcon(icon6);
        actionActionAboutUs = new QAction(MainWindow);
        actionActionAboutUs->setObjectName(QStringLiteral("actionActionAboutUs"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        actionShuffle = new QAction(MainWindow);
        actionShuffle->setObjectName(QStringLiteral("actionShuffle"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon/unshuffle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShuffle->setIcon(icon7);
        actionMute = new QAction(MainWindow);
        actionMute->setObjectName(QStringLiteral("actionMute"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/icon/mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMute->setIcon(icon8);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(220, 10, 411, 231));
        listWidget->setSortingEnabled(true);
        vSlider = new QSlider(centralWidget);
        vSlider->setObjectName(QStringLiteral("vSlider"));
        vSlider->setGeometry(QRect(10, 290, 331, 41));
        vSlider->setOrientation(Qt::Horizontal);
        art = new QLabel(centralWidget);
        art->setObjectName(QStringLiteral("art"));
        art->setGeometry(QRect(10, 30, 201, 191));
        infoLabel = new QLabel(centralWidget);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));
        infoLabel->setGeometry(QRect(20, 230, 191, 21));
        QFont font;
        font.setPointSize(10);
        infoLabel->setFont(font);
        infoLabel->setTextFormat(Qt::RichText);
        infoLabel->setWordWrap(false);
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(490, 254, 131, 121));
        dial->setValue(50);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(500, 374, 121, 10));
        progressBar->setMaximumSize(QSize(16777215, 10));
        progressBar->setValue(50);
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(410, 380, 101, 20));
        status->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 330, 341, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playbutton = new QPushButton(layoutWidget);
        playbutton->setObjectName(QStringLiteral("playbutton"));
        playbutton->setMinimumSize(QSize(60, 60));
        playbutton->setBaseSize(QSize(64, 64));
        playbutton->setStyleSheet(QStringLiteral(""));
        playbutton->setIconSize(QSize(64, 64));

        horizontalLayout->addWidget(playbutton);

        stopbutton = new QPushButton(layoutWidget);
        stopbutton->setObjectName(QStringLiteral("stopbutton"));
        stopbutton->setMinimumSize(QSize(50, 40));
        stopbutton->setMaximumSize(QSize(32, 32));
        stopbutton->setBaseSize(QSize(32, 32));
        stopbutton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(stopbutton);

        nextbutton = new QPushButton(layoutWidget);
        nextbutton->setObjectName(QStringLiteral("nextbutton"));
        nextbutton->setMinimumSize(QSize(50, 40));
        nextbutton->setMaximumSize(QSize(32, 32));
        nextbutton->setBaseSize(QSize(32, 32));
        nextbutton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(nextbutton);

        prebutton = new QPushButton(layoutWidget);
        prebutton->setObjectName(QStringLiteral("prebutton"));
        prebutton->setMinimumSize(QSize(60, 40));
        prebutton->setMaximumSize(QSize(32, 32));
        prebutton->setBaseSize(QSize(32, 32));
        prebutton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(prebutton);

        horizontalSpacer = new QSpacerItem(QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(370, 250, 121, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        shuffle = new QPushButton(layoutWidget1);
        shuffle->setObjectName(QStringLiteral("shuffle"));
        shuffle->setMinimumSize(QSize(30, 30));
        shuffle->setMaximumSize(QSize(20, 20));
        shuffle->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(shuffle);

        mute = new QPushButton(layoutWidget1);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setMinimumSize(QSize(40, 34));
        mute->setMaximumSize(QSize(16, 16));
        mute->setIconSize(QSize(30, 24));

        horizontalLayout_2->addWidget(mute);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        listWidget->raise();
        vSlider->raise();
        art->raise();
        infoLabel->raise();
        dial->raise();
        progressBar->raise();
        status->raise();
        mute->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuControls = new QMenu(menuBar);
        menuControls->setObjectName(QStringLiteral("menuControls"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControls->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuControls->addAction(actionPlay);
        menuControls->addAction(actionPause);
        menuControls->addAction(actionStop);
        menuControls->addAction(actionNext);
        menuControls->addAction(actionPrevious);
        menuControls->addAction(actionShuffle);
        menuControls->addAction(actionMute);
        menuAbout->addAction(actionActionAboutUs);
        menuAbout->addAction(actionAboutQt);

        retranslateUi(MainWindow);
        QObject::connect(dial, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mp3Factory", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "open", 0));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open file", 0));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionPlay->setText(QApplication::translate("MainWindow", "play", 0));
        actionPlay->setShortcut(QApplication::translate("MainWindow", "Space", 0));
        actionPause->setText(QApplication::translate("MainWindow", "pause", 0));
        actionStop->setText(QApplication::translate("MainWindow", "stop", 0));
        actionStop->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        actionNext->setText(QApplication::translate("MainWindow", "next", 0));
#ifndef QT_NO_TOOLTIP
        actionNext->setToolTip(QApplication::translate("MainWindow", "Next Song", 0));
#endif // QT_NO_TOOLTIP
        actionNext->setShortcut(QApplication::translate("MainWindow", "PgUp", 0));
        actionPrevious->setText(QApplication::translate("MainWindow", "previous", 0));
#ifndef QT_NO_TOOLTIP
        actionPrevious->setToolTip(QApplication::translate("MainWindow", "Previous Song", 0));
#endif // QT_NO_TOOLTIP
        actionPrevious->setShortcut(QApplication::translate("MainWindow", "PgDown", 0));
        actionActionAboutUs->setText(QApplication::translate("MainWindow", "actionAboutUs", 0));
        actionActionAboutUs->setShortcut(QApplication::translate("MainWindow", "F11", 0));
        actionAboutQt->setText(QApplication::translate("MainWindow", "aboutQt", 0));
        actionAboutQt->setShortcut(QApplication::translate("MainWindow", "F12", 0));
        actionShuffle->setText(QApplication::translate("MainWindow", "shuffle", 0));
#ifndef QT_NO_TOOLTIP
        actionShuffle->setToolTip(QApplication::translate("MainWindow", "Shuffle songs", 0));
#endif // QT_NO_TOOLTIP
        actionShuffle->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", 0));
        actionMute->setText(QApplication::translate("MainWindow", "mute", 0));
#ifndef QT_NO_TOOLTIP
        actionMute->setToolTip(QApplication::translate("MainWindow", "Mute", 0));
#endif // QT_NO_TOOLTIP
        actionMute->setShortcut(QApplication::translate("MainWindow", "M", 0));
        art->setText(QString());
        infoLabel->setText(QString());
        status->setText(QString());
        playbutton->setText(QString());
        stopbutton->setText(QString());
        nextbutton->setText(QString());
        prebutton->setText(QString());
        shuffle->setText(QString());
        mute->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuControls->setTitle(QApplication::translate("MainWindow", "Controls", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
