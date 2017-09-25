/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stacked_widget;
    QWidget *login_page;
    QLabel *userLabel;
    QLabel *passLabel;
    QLineEdit *userEdit;
    QLineEdit *passEdit;
    QPushButton *pushButton;
    QLabel *errorLabel;
    QWidget *admin_page;
    QLabel *label_2;
    QPushButton *logout_button1;
    QTabWidget *tabWidget;
    QWidget *inventory_tab_a;
    QWidget *membership_tab_a;
    QWidget *manager_page;
    QPushButton *logout_button2;
    QTabWidget *customer_purchase_t;
    QWidget *inventory_tab_m;
    QWidget *membership_tab_m;
    QWidget *tab;
    QTableView *tableView_Customer;
    QWidget *tab_2;
    QTableView *tableView;
    QComboBox *comboBox;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 484);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stacked_widget = new QStackedWidget(centralWidget);
        stacked_widget->setObjectName(QStringLiteral("stacked_widget"));
        stacked_widget->setGeometry(QRect(10, 10, 651, 411));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        userLabel = new QLabel(login_page);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(160, 160, 47, 13));
        passLabel = new QLabel(login_page);
        passLabel->setObjectName(QStringLiteral("passLabel"));
        passLabel->setGeometry(QRect(160, 190, 47, 13));
        userEdit = new QLineEdit(login_page);
        userEdit->setObjectName(QStringLiteral("userEdit"));
        userEdit->setGeometry(QRect(230, 160, 113, 20));
        passEdit = new QLineEdit(login_page);
        passEdit->setObjectName(QStringLiteral("passEdit"));
        passEdit->setGeometry(QRect(230, 190, 113, 20));
        passEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(login_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 230, 75, 23));
        errorLabel = new QLabel(login_page);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setGeometry(QRect(150, 210, 221, 20));
        stacked_widget->addWidget(login_page);
        admin_page = new QWidget();
        admin_page->setObjectName(QStringLiteral("admin_page"));
        label_2 = new QLabel(admin_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 10, 47, 13));
        logout_button1 = new QPushButton(admin_page);
        logout_button1->setObjectName(QStringLiteral("logout_button1"));
        logout_button1->setGeometry(QRect(510, 10, 75, 23));
        tabWidget = new QTabWidget(admin_page);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 631, 381));
        inventory_tab_a = new QWidget();
        inventory_tab_a->setObjectName(QStringLiteral("inventory_tab_a"));
        tabWidget->addTab(inventory_tab_a, QString());
        membership_tab_a = new QWidget();
        membership_tab_a->setObjectName(QStringLiteral("membership_tab_a"));
        tabWidget->addTab(membership_tab_a, QString());
        stacked_widget->addWidget(admin_page);
        manager_page = new QWidget();
        manager_page->setObjectName(QStringLiteral("manager_page"));
        logout_button2 = new QPushButton(manager_page);
        logout_button2->setObjectName(QStringLiteral("logout_button2"));
        logout_button2->setGeometry(QRect(520, 20, 75, 23));
        customer_purchase_t = new QTabWidget(manager_page);
        customer_purchase_t->setObjectName(QStringLiteral("customer_purchase_t"));
        customer_purchase_t->setGeometry(QRect(16, 39, 631, 381));
        inventory_tab_m = new QWidget();
        inventory_tab_m->setObjectName(QStringLiteral("inventory_tab_m"));
        customer_purchase_t->addTab(inventory_tab_m, QString());
        membership_tab_m = new QWidget();
        membership_tab_m->setObjectName(QStringLiteral("membership_tab_m"));
        customer_purchase_t->addTab(membership_tab_m, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView_Customer = new QTableView(tab);
        tableView_Customer->setObjectName(QStringLiteral("tableView_Customer"));
        tableView_Customer->setGeometry(QRect(10, 11, 591, 351));
        customer_purchase_t->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(3, 5, 531, 341));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(546, 5, 69, 22));
        comboBox->setEditable(false);
        customer_purchase_t->addTab(tab_2, QString());
        label = new QLabel(manager_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 3, 71, 20));
        stacked_widget->addWidget(manager_page);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stacked_widget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);
        customer_purchase_t->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        userLabel->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        passLabel->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        errorLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic; color:#ff0000;\">Error! - username or password is invalid!</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Admin", Q_NULLPTR));
        logout_button1->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(inventory_tab_a), QApplication::translate("MainWindow", "Manage Inventory", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(membership_tab_a), QApplication::translate("MainWindow", "Membership", Q_NULLPTR));
        logout_button2->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        customer_purchase_t->setTabText(customer_purchase_t->indexOf(inventory_tab_m), QApplication::translate("MainWindow", "Manage Inventory", Q_NULLPTR));
        customer_purchase_t->setTabText(customer_purchase_t->indexOf(membership_tab_m), QApplication::translate("MainWindow", "Membership", Q_NULLPTR));
        customer_purchase_t->setTabText(customer_purchase_t->indexOf(tab), QApplication::translate("MainWindow", "Customer Purchase List", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8/20/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/21/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/22/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/23/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/24/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/25/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8/26/17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Week 8/20", Q_NULLPTR)
        );
        customer_purchase_t->setTabText(customer_purchase_t->indexOf(tab_2), QApplication::translate("MainWindow", "Revenue", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Store Manager", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
