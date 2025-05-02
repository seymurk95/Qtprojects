#include "nesting.h"
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QPushButton>
#include<QListWidget>
Layouts::Layouts(QWidget *parent):
    QWidget(parent){
    auto *vbox = new QVBoxLayout();
    auto *hbox = new QHBoxLayout(this);
    auto *lw = new QListWidget(this);
    lw -> addItem("prikmat");
    lw -> addItem("eco");
    lw -> addItem("psy");
    lw -> addItem("phi");
    lw -> addItem("physics");
    lw -> addItem("chemistry");
    auto *add = new QPushButton("Add",this);
    auto *rename = new QPushButton("Rename",this);
    auto *remove = new QPushButton("Remove",this);
    auto *remove_all = new QPushButton("Remove ALL",this);
    vbox -> addStretch(1);
    vbox ->addWidget(add);
    vbox ->addWidget(rename);
    vbox ->addWidget(rename);
    vbox ->addWidget(remove_all);
    vbox ->addStretch(1);
    hbox -> addWidget(lw);
    hbox -> addSpacing(15);
    hbox -> addLayout(vbox);
    setLayout(hbox);

}
