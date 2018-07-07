#include "mainwindow.h"
#include "menuWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuWindow menu;
    MainWindow w;
    //w.show();
    menu.show();

    return a.exec();
}
