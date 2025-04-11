/*#include <QTextStream>
#include <QVector>
int main()
{
    QTextStream out(stdout);
    QVector<int> vals={1,2,3,4,5};
    out<<vals.size()<<endl;
    out<<vals.first()<<endl;
    out<<vals.last()<<endl;
    vals.append(6);
    vals.prepend(0);
    for(int val: vals){
        out<<val<<" ";
    }
    out<<endl;

    return 0;
}*/
/*#include <QTextStream>
#include <QList>
#include <algorithm>
int main()
{
    QTextStream out(stdout);
    QList<QString> faculties = {"Прикмат","Эконом","Физфак","Филология","Химфак","Психология"};
    for(int i = 0;i!=faculties.size();++i){
        out<<faculties.at(i)<<endl;
    }
    faculties<<QString("Журфак")<<QString("Истфак");
    std::sort(faculties.begin(),faculties.end());
    for(QString faculty:faculties){
        out<<faculty<<endl;
    }
}*/
/*#include <QTextStream>
#include <QStringList>

int main()
{
    QTextStream out(stdout);
    QString faculties = "Прикмат,Эконом,Физфак,Филология,Химфак,Психология";
    QStringList msu = faculties.split(",");
    QStringListIterator it(msu);
    while(it.hasNext()){
        out<<it.next().trimmed()<<endl;
    }

}*/
/*#include <QTextStream>
#include <QStringList>
#include<algorithm>
#include<QSet>
int main()
{
    QTextStream out(stdout);
    QSet<QString> technical = {"Прикмат","Физфак","Химфак"};
    QSet<QString> liberalarts ={"Эконом","Филология","Психология"};
    out<<technical.size()<<endl;
    liberalarts.insert("Журфак");
    technical.unite(liberalarts);
    out<<technical.size()<<endl;
    for(QString faculty:technical){
        out<<faculty<<endl;

    }
    QList<QString>l_technical = technical.values();
    std::sort(l_technical.begin(),l_technical.end());
    out<<"----------------------"<<endl;
    for(QString val:l_technical){
        out<<val<<endl;
    }
}*/
#include <QTextStream>
#include<map>
int main()
{
    QTextStream out(stdout);
    QMap<QString,int> students={ {"Прикмат",59},{"Эконом",30},{"Физфак",10},{"Филология",40},{"Химфак",10},{"Психология",50}};
    students.insert("Журфак",0);
    QList<int> values=students.values();
    out<<"values: "<<endl;
    for(int val: values){
        out<<val<<endl;
    }
    QList<QString> keys = students.keys();
    out<<"Keys: "<<endl;
    QMapIterator<QString,int> it(students);
    out<<"pairs: "<<endl;
    while(it.hasNext()){
        it.next();
        out<<it.key()<<":"<<it.value()<<endl;
    }
}
