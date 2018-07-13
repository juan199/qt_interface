#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include "mainwindow.h"
#include "radioWindow.h"
#include <QMainWindow>
#include <QPushButton>
#include <qlabel.h>


class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
  explicit MenuWindow(QWidget *parent = 0);
  virtual ~MenuWindow();

//public slots:
//    void openNewWindow();

private slots:
    void handleMp3Button();
    void handleRadioButton();

private:
 MainWindow *mainWindow;
 RadioWindow *radioWindow;
 QPushButton *toMp3View_button;
 QPushButton *toRadioView_button;
 QLabel *label;
};

#endif // MENUWINDOW_H
