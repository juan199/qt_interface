#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>
#include <qlabel.h>

class QPushButton;
class MenuWindow : public QWidget
{
 public:
  explicit MenuWindow(QWidget *parent = 0);

private:
 QPushButton *m_button;
 QLabel *label;
};

#endif // MENUWINDOW_H
