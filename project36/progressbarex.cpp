#include "progressbarex.h"
#include<QProgressBar>
#include<QTimer>
#include<QGridLayout>

ProgressBarEx::ProgressBarEx(QWidget *parent): QWidget(parent) {
    progress = 0;
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&ProgressBarEx::updateBar);
    QGridLayout *grid = new QGridLayout(this);
    grid -> setColumnStretch(2,1);
    pBar = new QProgressBar();
    grid -> addWidget(pBar,0,0,1,3);
    startBtn = new QPushButton("start",this);
    connect(startBtn,&QPushButton::clicked,this,&ProgressBarEx::startMyTimer);
    grid -> addWidget(startBtn,1,0,1,1);
    stopBtn = new QPushButton("stop",this);
    connect(stopBtn,&QPushButton::clicked,this,&ProgressBarEx::stopMyTimer);
    grid -> addWidget(stopBtn,1,1);
}
void ProgressBarEx::startMyTimer(){
    if(progress>=MAX_VALUE){
        progress = 0;
        pBar ->setValue(0);
    }
    if(!timer -> isActive()){
        startBtn->setEnabled(false);
        stopBtn -> setEnabled(true);
        timer -> start(DELAY);
    }
}
void ProgressBarEx::stopMyTimer(){
    if(timer -> isActive()){
        startBtn -> setEnabled(true);
        stopBtn -> setEnabled(false);
        timer -> stop();
    }
}

void ProgressBarEx::updateBar(){
    progress++;
    if(progress<=MAX_VALUE){
        pBar -> setValue(progress);

    }else{
        timer -> stop();
        startBtn->setEnabled(true);
        stopBtn -> setEnabled(false);
    }
}




