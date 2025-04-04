/*#include <QTextStream>
#include<QTime>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate dt1(2025,4,11);
    QDate dt2(2025,4,1);
    if(dt1<dt2){
        out<<dt1.toString()<<" comes before "<<dt2.toString()<<endl;
    }else{
        out<<dt2.toString()<<" comes before "<<dt1.toString()<<endl;
    }
    return 0;
}*/

/*#include <QTextStream>
#include<QTime>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("CP866");
    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();
    out<<cd.toString()<<endl;
    out<<ct.toString()<<endl;
    return 0;
}*/

/*#include <QTextStream>
#include<QDate>
int main(){
    QTextStream out(stdout);
    out.setCodec("CP866");
    QList<int> years({2020,2021,2022,2023,2024,2025});
    foreach(int year,years){
        if(QDate::isLeapYear(year)){
            out<<year<<" : is Leap year"<<endl;
        }else{
            out<<year<<" : is not leap year"<<endl;
        }
    }
    return 0;
}
*/
/*#include <QTextStream>
#include<QDate>
int main(){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    QDate cd = QDate::currentDate();
    out<<cd.toString(Qt::TextDate)<<endl;
    out<<cd.toString(Qt::ISODate)<<endl;
    out<<cd.toString(Qt::SystemLocaleShortDate)<<endl;
    out<<cd.toString(Qt::SystemLocaleLongDate)<<endl;
    out<<cd.toString(Qt::DefaultLocaleShortDate)<<endl;
    out<<cd.toString(Qt::DefaultLocaleLongDate)<<endl;
    out<<cd.toString(Qt::SystemLocaleDate)<<endl;
    out<<cd.toString(Qt::LocaleDate)<<endl;
    return 0;
}*/
/*#include <QTextStream>
#include<QDate>
int main(){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    QDate cd = QDate::currentDate();
    out<<cd.toString("yyyy-MM-dd")<<endl;
    out<<cd.toString("yy/M/dd")<<endl;
    out<<cd.toString("d.M.yyyy")<<endl;
     out<<cd.toString("d-MMMM-yyyy")<<endl;
}*/
/*#include <QTextStream>
#include<QTime>
int main(){
    QTextStream out(stdout);
    out.setCodec("UTF-8");
    QTime ct = QTime::currentTime();
    out<<ct.toString(Qt::TextDate)<<endl;
    out<<ct.toString(Qt::ISODate)<<endl;
    out<<ct.toString(Qt::SystemLocaleShortDate)<<endl;
    out<<ct.toString(Qt::SystemLocaleLongDate)<<endl;
    out<<ct.toString(Qt::DefaultLocaleShortDate)<<endl;
    out<<ct.toString(Qt::DefaultLocaleLongDate)<<endl;
    out<<ct.toString(Qt::SystemLocaleDate)<<endl;
    out<<ct.toString(Qt::LocaleDate)<<endl;
    return 0;
}*/
/*#include <QTextStream>
#include<QTime>
int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QTime ct = QTime::currentTime();
    out<<ct.toString("hh:mm:ss:zzz")<<endl;
    out<<QLocale("Russian").toString(ct,"h:m:s a")<<endl;
    out<<QLocale("Russian").toString(ct,"H:m:s A")<<endl;
    out<<QLocale("Russian").toString(ct,"h:m AP")<<endl;
}*/
#include <QTextStream>
#include<QDate>
int main(){
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    int wd = cd.dayOfWeek();

    out<<QDate::shortDayName(wd)<<endl;
    out<<QDate::longDayName(wd)<<endl;
}





