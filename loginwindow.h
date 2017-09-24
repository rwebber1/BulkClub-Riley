#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow w;
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();

private:

    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
