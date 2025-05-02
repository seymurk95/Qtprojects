#include "table.h"

#include <QApplication>
#include<QString>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int row =10;
    int column = 15;
    Table w;
    QTableWidgetItem *newItem  = new QTableWidgetItem(QString::number((row+ 1)*(column +1)));

    w.table -> setItem(row,column,newItem);
    w.resize(250,300);
    w.setWindowTitle("w");
    w.show();
    return a.exec();
}
