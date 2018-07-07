#include "menuWindow.h"
#include <QPushButton>
#include <qlabel.h>

MenuWindow::MenuWindow(QWidget *parent) :
 QWidget(parent)
 {
 // Set size of the window
 setFixedSize(500, 200);

 label = new QLabel(this);
 label->setText("Welcome! Please select an option");
 //label->setAlignment(Qt::AlignCenter);

 // Create and position the button
 m_button = new QPushButton("Radio", this);
 m_button->setGeometry(60, 60, 150, 100);

 m_button = new QPushButton("Mp3 Player", this);
 m_button->setGeometry(250, 60, 150, 100);

}
