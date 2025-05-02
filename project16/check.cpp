#include"check.h"
#include<QMenu>
#include<QMenuBar>
#include<QStatusBar>
Checkmenu::Checkmenu(QWidget* parent):
    QMainWindow(parent){
    viewst = new QAction("&View statusbar",this);
    viewst -> setCheckable(true);
    viewst -> setChecked(true);
    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(viewst);
    statusBar();
    connect(viewst,&QAction::triggered,this,&Checkmenu::toggleStatusBar);

}
void Checkmenu::toggleStatusBar(){
    if(viewst-> isChecked()){
        statusBar()->show();

    }else{
        statusBar()->hide();
    }
}
