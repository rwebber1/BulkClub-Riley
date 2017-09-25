#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QMainWindow>
#include "mainwindow.h"
#include "QtSql"

/* In the database inventory.db data is stored for the inventory
 * day in a TABLE "day1" through "day7" with column data types
 * in the order of
 *  day1(date text, id integer, name text, price real, quantity integer)
 * Example:
 *  day1 VALUES('08/20/2017',12899,'Pork Tenderloin',19.25,2)
 *
 * For the Shopper Data, it is in TABLE "people" with column data
 * types in the order of
 *  people(name text, id integer, membership text, date text);
 * Example:
 *  people VALUES('Sam Single',31311,'Executive','12/05/2017');
 *
 * These are TABLE and COLUMN variable names and orders for your
 * implementation. -Kai
 *
 */


class DbManager
{
public:
    DbManager(const QString& path = "C:/Users/dsinghal0/Documents/Project1/BulkClub-Riley/BulkClub-Riley-master/inventory.db");
    QSqlDatabase m_db;

private:

};

#endif // DBMANAGER_H
