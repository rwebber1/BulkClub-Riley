#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbmanager.h"

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

void MainWindow::on_customerPurchase_t_tabBarClicked(int index)
{

}

void MainWindow::on_comboBox_activated(int index)
{
    DbManager conn;
    QSqlQueryModel *model = new QSqlQueryModel();
    QSortFilterProxyModel *modelProxy = new QSortFilterProxyModel();
    modelProxy->setSourceModel(model);
    QSqlQuery *qry = new QSqlQuery(conn.m_db);

    if(index == 0)
    {
        qry->prepare("SELECT * FROM day1");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 1)
    {
        qry->prepare("SELECT * FROM day2");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 2)
    {
        qry->prepare("SELECT * FROM day3");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 3)
    {
        qry->prepare("SELECT * FROM day4");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 4)
    {
        qry->prepare("SELECT * FROM day5");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 5)
    {
        qry->prepare("SELECT * FROM day6");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
    else if(index == 6)
    {
        qry->prepare("SELECT * FROM day7");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(modelProxy);
        ui->tableView->sortByColumn(2, Qt::AscendingOrder);
    }
}
