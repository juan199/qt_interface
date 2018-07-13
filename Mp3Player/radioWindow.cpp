#include "mainwindow.h"
#include "radioWindow.h"
#include <QPushButton>
#include <qlabel.h>
#include <QTextStream>
#include <QCoreApplication>
#include <QDial>


RadioWindow::RadioWindow(QWidget *parent) :
 QMainWindow(parent)
 {
 // Set size of the window
 setFixedSize(500, 200);

 //mainWindow = new MainWindow();

 //label = new QLabel(this);
 //label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
 //label->setText("Welcome! Please select an option:");
 //label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
 //label->setGeometry(15,10,250,25);

 returnPushButton = new QPushButton("Main Menu", this);
 //Connect button signal to appropriate slot
  connect(returnPushButton, SIGNAL (released()),this, SLOT (return_to_menu()));

 // Create and position the button
 radiDial = new QDial(this);
 radiDial->rangeChanged(100, 110);
 radiDial->setGeometry(60, 60, 150, 100);


 lcdDisplay = new QLCDNumber(this);
 lcdDisplay->setGeometry(250, 60, 150, 100);
 lcdDisplay->setDigitCount(3);
 lcdDisplay->smallDecimalPoint();

 connect(radiDial, SIGNAL(valueChanged(int)), lcdDisplay, SLOT(display(int)));

}


void RadioWindow:: return_to_menu()
{
    //this->on_stopbutton_clicked();
    this->close();
    emit firstWindow();
}


RadioWindow::~RadioWindow()
{
    //delete ui;
    this->close();

}

/*RadioWindow::on_dial_valueChanged(int value)
{
    lcdDisplay->display(value);
}*/
