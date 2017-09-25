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
    const QString DRIVER ("QSQLITE");
    QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

    if(QSqlDatabase::isDriverAvailable(DRIVER)){

        db.setDatabaseName("C:/Users/cptka/OneDrive/Beast PC Backup/Documents/Saddleback Documents/Computer Science 1C/BulkClubRiley/BulkClub-Riley/inventory.db");
    }

    if(index == 2){


        DbManager conn;
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery(conn.m_db);
        qry->prepare("SELECT * FROM people");
        qry->exec();
        model->setQuery(*qry);
        ui->tableView->setModel(model);
        ui->tableView->show();

    }
}

