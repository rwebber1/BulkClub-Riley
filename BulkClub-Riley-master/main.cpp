#include "loginwindow.h"
#include "mainwindow.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();



    return a.exec();
}
