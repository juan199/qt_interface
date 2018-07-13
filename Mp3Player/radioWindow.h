#ifndef RADIOWINDOW_H
#define RADIOWINDOW_H

#include "mainwindow.h"
#include <QMainWindow>
#include <QDial>
#include <qlabel.h>
#include <QLCDNumber>

class RadioWindow : public QMainWindow
{
    Q_OBJECT

public:
  explicit RadioWindow(QWidget *parent = 0);
  virtual ~RadioWindow();

signals:
    void firstWindow();

private slots:
    void return_to_menu();

private:
 //MainWindow *mainWindow;
 QLCDNumber *lcdDisplay;
 QDial *radiDial;
 QLabel *label;
 QPushButton *returnPushButton;
};

#endif // RADIOWINDOW_H
