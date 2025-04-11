#include "anothermenu.h"
#include<QMenu>
#include<QMenuBar>
AnotherMenu::AnotherMenu(QWidget* parent):
    QMainWindow(parent){
    QPixmap newpix("/home/stud-05/Downloads/blueberries.png");
    QPixmap openpix("/home/stud-05/Downloads/blueberries.png");
    QPixmap quitpix("/home/stud-05/Downloads/blueberries.png");
    QAction *newa = new QAction(newpix,"&New",this);
    QAction *open = new QAction(openpix,"&New",this);
    QAction *quit = new QAction(quitpix,"&New",this);

    quit -> setShortcut(tr("CTRL+Q"));
    QMenu *file;
    file = menuBar()->addMenu("&File");
    file ->addAction(newa);
    file ->addAction(open);
    file ->addSeparator();
    file ->addAction(quit);
    qApp -> setAttribute(Qt::AA_DontShowIconsInMenus,false);
    connect(quit,&QAction::triggered,qApp,&QApplication::quit);


}
