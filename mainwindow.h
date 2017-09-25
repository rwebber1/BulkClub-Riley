#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_logout_button2_clicked();

    void on_logout_button1_clicked();

    void on_customerPurchase_t_tabBarClicked(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
