#include "dbmanager.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

DbManager::DbManager(const QString& path)
{

    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if(!m_db.open())
        qDebug() << "Error: connection with database fail";
    else
        qDebug() << "Database: connection okay";

}
