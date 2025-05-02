#pragma once
#include<QWidget>
#include<QTableWidget>
class Table : public QWidget
{
public:
    Table(QWidget *parent = 0);
    QTableWidget *table;
};


