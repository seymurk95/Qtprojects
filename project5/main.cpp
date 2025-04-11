/*#include <QTextStream>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QList<QString> months;
    months.append("January");
    months.append("February");
    months.append("March");
    months.append("April");
    months.append("May");
    months.append("June");
    months.append("July");
    months.append("August");
    months.append("September");
    months.append("October");
    months.append("November");
    months.append("December");
    QDate dt1(2025,4,1);
    QDate dt2(2024,2,11);
    QDate dt3(2023,1,7);
    QDate dt4(2020,3,3);
    QDate dt5(2022,7,8);
    out<<QString("Day: ")<<dt1.daysInMonth()<<QString(" in month ")<<months.at(dt1.month()-1)<<endl;
    out<<QString("Day: ")<<dt2.daysInMonth()<<QString(" in month ")<<months.at(dt2.month()-1)<<endl;
    out<<QString("Day: ")<<dt3.daysInMonth()<<QString(" in month ")<<months.at(dt3.month()-1)<<endl;
    out<<QString("Day: ")<<dt4.daysInMonth()<<QString(" in month ")<<months.at(dt4.month()-1)<<endl;
}*/
/*#include <QTextStream>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QList<QDate> dates({QDate(2024,2,29),QDate(2023,2,29),QDate(2025,4,31)});
    for(int i=0;i!=dates.size();++i){
        if(dates.at(i).isValid()){
            out<<"Date "<<i+1<<" is valid "<<endl;
        }else{
            out<<"Date "<<i+1<<" is not valid "<<endl;
        }
    }
    return 0;
}*/

/*#include <QTextStream>
#include<QDateTime>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDateTime cdt = QDateTime::currentDateTime();
    out<<cdt.toString()<<endl;
    out<<cdt.date().toString()<<endl;
    out<<cdt.time().toString()<<endl;
}*/
/*#include <QTextStream>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate cd = QDate::currentDate();
    out<<"Gregorian: "<<cd.toString(Qt::ISODate)<<endl;
    out<<"Julian: "<<cd.toJulianDay()<<endl;
}*/
/*#include <QTextStream>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate dt(2025,6,1);
    QDate nd=dt.addDays(42);
    QDate academ(2025,6,30);
    out<<"42 days from "<<dt.toString()<<" is "<<nd.toString()<<endl;
    out<<"There are "<<QDate::currentDate().daysTo(academ) <<" days till academ"<<endl;

}*/
/*#include <QTextStream>
#include<QDate>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDate ramses2(-1300,5,1);
    QDate mongols(1222,7,28);
    int j_today=QDate::currentDate().toJulianDay();
    int j_ramses2 = ramses2.toJulianDay();
    int j_mongols = mongols.toJulianDay();
    out<<"Days since Ramses2 "<<j_today-j_ramses2<<endl;
    out<<"Days since mongols "<<j_today-j_mongols<<endl;
}*/
/*#include <QTextStream>
#include<QDateTime>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    QDateTime cdt = QDateTime::currentDateTime();
    out<<"UTC "<<cdt.toUTC().toString()<<endl;
    out<<"Local "<<cdt.toLocalTime().toString()<<endl;

}*/
#include <QTextStream>
#include<QDateTime>
#include<ctime>
int main()
{
    QTextStream out(stdout);
    out.setCodec("UTF8");
    time_t t = time(0);
    out<<t<<endl;
    QDateTime dt;
    dt.setTime_t(t);
    out<<dt.toString()<<endl;
    QDateTime cd = QDateTime::currentDateTime();
    out<<cd.toTime_t()<<endl;

}
