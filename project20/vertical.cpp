#include"vertical.h"
#include<QVBoxLayout>
#include<QPushButton>
VerticalBox::VerticalBox(QWidget *parent):
    QWidget(parent){
    auto *vbox = new QVBoxLayout(this);
    vbox -> setSpacing(1);
    auto *prikmat = new QPushButton("Prikmat",this);
    prikmat -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto *econom = new QPushButton("econom",this);
    econom -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto *physics = new QPushButton("physics",this);
    physics -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto *che = new QPushButton("che",this);
    che -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto *phi = new QPushButton("phi",this);
    phi -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    auto *psy = new QPushButton("psy",this);
    psy -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    vbox -> addWidget(prikmat);
    vbox -> addWidget(econom);
    vbox -> addWidget(physics);
    vbox -> addWidget(che);
    vbox -> addWidget(phi);
    vbox -> addWidget(psy);
    setLayout(vbox);
}
