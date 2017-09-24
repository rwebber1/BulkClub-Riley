#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stacked_widget->setCurrentIndex(0);

    ui->errorLabel->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->userEdit->text();
    QString password = ui->passEdit->text();

    if(username == "admin" && password == "test")
    {
        ui->stacked_widget->setCurrentIndex(1);
        ui->errorLabel->hide();
        ui->userEdit->clear();
        ui->passEdit->clear();
    }
    else if(username == "manager" && password == "test")
    {
        ui->stacked_widget->setCurrentIndex(2);
        ui->errorLabel->hide();
        ui->userEdit->clear();
        ui->passEdit->clear();
    }
    else
    {
        ui->errorLabel->show();
    }
}

void MainWindow::on_logout_button2_clicked()
{
    ui->stacked_widget->setCurrentIndex(0);
}

void MainWindow::on_logout_button1_clicked()
{
    ui->stacked_widget->setCurrentIndex(0);
}
