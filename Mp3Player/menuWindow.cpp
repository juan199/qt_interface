#include "menuWindow.h"
#include "mainwindow.h"
#include "radioWindow.h"
#include <QPushButton>
#include <qlabel.h>
#include <QTextStream>
#include <QCoreApplication>


MenuWindow::MenuWindow(QWidget *parent) :
 QMainWindow(parent)
 {
 // Set size of the window
 setFixedSize(500, 200);

 mainWindow = new MainWindow();
 radioWindow = new RadioWindow();

 label = new QLabel(this);
 label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
 label->setText("Welcome! Please select an option:");
 label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
 label->setGeometry(15,10,250,25);
 //label->setAlignment(Qt::AlignCenter);

 // Create and position the button
 toMp3View_button = new QPushButton("Mp3 Player", this);
 toMp3View_button->setGeometry(60, 60, 150, 100);

 toRadioView_button = new QPushButton("Radio", this);
 toRadioView_button->setGeometry(250, 60, 150, 100);

 //Connect button signal to appropriate slot
  connect(toMp3View_button, SIGNAL (released()),this, SLOT (handleMp3Button()));
  connect(toRadioView_button, SIGNAL (released()),this, SLOT (handleRadioButton()));

  // connected to the slot start the main window on the button in the second window
  connect(mainWindow, &MainWindow::firstWindow, this, &MainWindow::show);
  connect(radioWindow, &RadioWindow::firstWindow, this, &MainWindow::show);
}


void MenuWindow::handleMp3Button()
{
    QTextStream out(stdout); // Console Print Enable
    out << "Mp3 Button was touched" << endl;

    //mainWindow->on_actionStop_triggered();
    mainWindow->on_playbutton_clicked();
    mainWindow->show();
    this->close();
}

void MenuWindow::handleRadioButton()
{
    QTextStream out(stdout); // Console Print Enable
    out << "Radio Button was touched" << endl;
    mainWindow->on_actionStop_triggered();
    radioWindow->show();
    this->close();
}

MenuWindow::~MenuWindow()
{
    //delete ui;
    this->close();

}
