#include"click.h"
#include<QPushButton>
#include<QHBoxLayout>
#include<QApplication>
Click::Click(QWidget *parent):QWidget (parent){
    auto hbox = new QHBoxLayout(this);
    hbox ->setSpacing(5);
    auto *quitBtn = new QPushButton("Quit",this);
    hbox -> addWidget(quitBtn,0,Qt::AlignLeft|Qt::AlignTop);
    connect(quitBtn,&QPushButton::clicked,qApp,&QApplication::quit);
}
