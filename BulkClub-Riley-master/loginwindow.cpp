#include "loginwindow.h"
#include "mainwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->invalid->hide();

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString userString = ui->userEdit->text();
    QString passString = ui->passEdit->text();

    if(userString == "admin" && passString == "test"){

        this->hide();
        w.show();


    }else if(userString != "admin" || passString != "test"){

        ui->invalid->show();

    }
}
