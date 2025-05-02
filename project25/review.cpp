#include<QGridLayout>
#include"review.h"
#include<QLabel>
#include<QLineEdit>
#include<QTextEdit>
Review::Review(QWidget *parent):QWidget(parent){
    auto *grid = new QGridLayout(this);
    grid ->setVerticalSpacing(15);
    grid ->setHorizontalSpacing(10);
    auto *title = new QLabel("Object",this);
    grid -> addWidget(title,0,0,1,1);
    title -> setAlignment(Qt::AlignRight|Qt::AlignVCenter);
    auto *edt1 = new QLineEdit(this);
    grid ->addWidget(edt1,0,1,1,1);
    auto *name = new QLabel("Studeent",this);
    grid ->addWidget(name,1,0,1,1);
    name -> setAlignment(Qt::AlignRight|Qt::AlignVCenter);
    auto *edt2 = new QLineEdit(this);
    grid ->addWidget(edt2,1,1,1,1);
    auto *review = new QLabel("Marks",this);
    grid ->addWidget(review,2,0,1,1);
    review -> setAlignment(Qt::AlignRight|Qt::AlignTop);
    auto *te = new QTextEdit(this);
    grid ->addWidget(te,2,1,3,1);
    setLayout(grid);


}
