#include "pixmap.h"
#include<QPixmap>
#include<QLabel>
#include<QHBoxLayout>

Pixmap::Pixmap(QWidget *parent): QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QPixmap pixmap("/home/stud-05/Downloads/images.jpeg");
    QLabel *label = new QLabel(this);
    label -> setPixmap(pixmap);
    hbox -> addWidget(label,0,Qt::AlignTop);
}
