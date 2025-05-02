#include"toolbar.h"
#include<QToolBar>
#include<QIcon>
#include<QAction>
Toolbar::Toolbar(QWidget *parent):
    QMainWindow(parent){
    QPixmap newpix("/home/stud-05/Downloads/blueberries.png");
    QPixmap openpix("/home/stud-05/Downloads/blueberries.png");
    QPixmap quitpix("/home/stud-05/Downloads/blueberries.png");

QToolBar *toolbar = addToolBar("main");
toolbar -> addAction(QIcon(newpix),"New File");
toolbar -> addAction(QIcon(openpix),"Open File");
toolbar -> addSeparator();
QAction *quit =toolbar->addAction(QIcon(quitpix),"Quit");
connect(quit,&QAction::triggered,qApp,&QApplication::quit);
}
