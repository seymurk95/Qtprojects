#include<QTextStream>
#include"disconnect.h"
#include<QCheckBox>
#include<QHBoxLayout>
Disconnect::Disconnect(QWidget *parent): QWidget(parent){
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox -> setSpacing(5);
    clickbtn = new QPushButton("Click",this);
    hbox -> addWidget(clickbtn,0,Qt::AlignLeft|Qt::AlignTop);
    QCheckBox *cb = new QCheckBox("Connect",this);
    cb -> setCheckState(Qt::Checked);
    hbox -> addWidget(cb,0,Qt::AlignLeft|Qt::AlignTop);
    connect(clickbtn,&QPushButton::clicked,this,&Disconnect::onClick);
    connect(cb,&QCheckBox::stateChanged,this,&Disconnect::onCheck);
}
void Disconnect::onClick(){
    QTextStream out(stdout);
    out<<"Butto clicked"<<endl;
}
void Disconnect::onCheck(int state){
    if(state== Qt::Checked){
        connect(clickbtn,&QPushButton::clicked,this,&Disconnect::onClick);
    }else{
        disconnect(clickbtn,&QPushButton::clicked,this,&Disconnect::onClick);
    }
}
