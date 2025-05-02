#include"listwidget.h"
#include<QInputDialog>
#include<QVBoxLayout>
ListWidget::ListWidget(QWidget *parent): QWidget(parent){
    QVBoxLayout *vbox =new QVBoxLayout();
    vbox -> setSpacing(10);
    QHBoxLayout *hbox = new QHBoxLayout(this);
    lw = new QListWidget(this);
    lw -> addItem("prikmat");
    lw -> addItem("econom");
    lw -> addItem("psixfak");
    lw -> addItem("ximfak");
    lw -> addItem("fizfak");
    lw -> addItem("filfak");
    add = new QPushButton("add",this);
    rename = new QPushButton("rename",this);
    remove = new QPushButton("remove",this);
    removeAll = new QPushButton("clear",this);
    vbox -> setSpacing(3);
    vbox -> addStretch(1);
    vbox -> addWidget(add);
    vbox -> addWidget(rename);
    vbox -> addWidget(remove);
    vbox -> addWidget(removeAll);
    vbox -> addStretch(1);
    hbox -> addWidget(lw);
    hbox -> addSpacing(15);
    hbox -> addLayout(vbox);
    connect(add,&QPushButton::clicked,this,&ListWidget::addItem);
    connect(rename,&QPushButton::clicked,this,&ListWidget::renameItem);
    connect(remove,&QPushButton::clicked,this,&ListWidget::removeItem);
    connect(removeAll,&QPushButton::clicked,this,&ListWidget::clearItem);
    setLayout(hbox);

}

void ListWidget::addItem(){
    QString c_text = QInputDialog::getText(this,"Item","enter new item");
    QString s_text = c_text.simplified();
    if(!s_text.isEmpty()){
        lw -> addItem(s_text);
        int r = lw -> count()-1;
        lw -> setCurrentRow(r);
    }
}

void ListWidget::renameItem(){
    QListWidgetItem *curItem = lw->currentItem();
    int r = lw -> row(curItem);
    QString c_text =curItem -> text();
    QString r_text = QInputDialog::getText(this,"item","enter new item",QLineEdit::Normal,c_text);
    QString s_text = r_text.simplified();
    if(!s_text.isEmpty()){
        QListWidgetItem *item = lw-> takeItem(r);
        delete item;
        lw -> insertItem(r,s_text);
        lw -> setCurrentRow(r);
    }

}

void ListWidget::removeItem(){
    int r = lw -> currentRow();
    if(r!= -1){
        QListWidgetItem *item= lw -> takeItem(r);
        delete item;
    }
}
void ListWidget::clearItem(){
    if(lw->count()!=0){
        lw ->clear();
    }
}
