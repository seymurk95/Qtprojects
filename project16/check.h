#pragma once
#include<QMainWindow>
#include <QApplication>
class Checkmenu: public QMainWindow{
    Q_OBJECT
public:
    Checkmenu(QWidget* parent=0);
private slots:
    void toggleStatusBar();
private:
    QAction *viewst;

};
