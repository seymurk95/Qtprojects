#pragma once
#include<QWidget>
#include<QPushButton>
#include<QListWidget>
class ListWidget: public QWidget{
    Q_OBJECT
public:
    ListWidget(QWidget *parent = nullptr);
private slots:
    void addItem();
    void renameItem();
    void removeItem();
    void clearItem();
private:
    QListWidget *lw;
    QPushButton *add;
    QPushButton *rename;
    QPushButton *remove;
    QPushButton *removeAll;

};
