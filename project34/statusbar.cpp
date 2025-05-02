#include"statusbar.h"
#include<QFrame>
#include<QStatusBar>
#include<QLabel>
#include<QHBoxLayout>
Statusbar::Statusbar(QWidget *parent): QMainWindow(parent){
    auto *frame = new QFrame(this);
    setCentralWidget(frame);
    auto *hbox = new QHBoxLayout(frame);
    okBtn = new QPushButton("ok",frame);
    hbox -> addWidget(okBtn,0,Qt::AlignLeft|Qt::AlignTop);
    applyBtn = new QPushButton("apply",frame);
    hbox -> addWidget(applyBtn,1,Qt::AlignLeft|Qt::AlignTop);
    statusBar();
    connect(okBtn,&QPushButton::clicked,this,&Statusbar::OnOkPressed);
    connect(applyBtn,&QPushButton::clicked,this,&Statusbar::OnApplyPressed);
}

void Statusbar::OnOkPressed(){
    statusBar() -> showMessage("Ok Pressed",2000);
}

void Statusbar::OnApplyPressed(){
    statusBar() -> showMessage("Apply Pressed",2000);
}
