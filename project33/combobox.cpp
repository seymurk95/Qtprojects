#include"combobox.h"
#include<QHBoxLayout>
#include<QStringList>
ComboBoxEx::ComboBoxEx(QWidget *parent): QWidget(parent){
    QStringList faculties{"prikmat","fizfak","ximfak","econom","filfak","psixfak"};
    auto *hbox = new QHBoxLayout(this);
    combo = new QComboBox();
    combo -> addItems(faculties);
    hbox -> addWidget(combo);
    hbox -> addSpacing(15);
    label =new QLabel("prikmat",this);
    hbox -> addWidget(label);
    connect(combo,qOverload<const QString&>(&QComboBox::activated),label,&QLabel::setText);
}
