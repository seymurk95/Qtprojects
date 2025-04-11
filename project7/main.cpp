#include <QTextStream>
#include <QList>
#include <algorithm>
#include "student.h"

int main()
{
   QTextStream out(stdout);
   QList<Student> students={
       Student("Aleksandra Speranskaya","Math and Computer Science"),
       Student("Diego Maradona","Psycology"),
       Student("Leonel messi","Economics"),
       Student("Maykl Jackson","Chemistry"),
       Student("Jack the murderer","Physics"),
       Student("Pi Diddy","Chemistry"),
       Student("Justine Biber","Economics"),
       Student("Pasha Technic","Chemistry"),
   };
   std::sort(students.begin(),students.end(),[](const Student& s1,const Student& s2){
                                   return s1.getName()<s2.getName();
   });
   for(Student student:students){
     out << student.getName() <<":"<<student.getFaculty()<<"\n";
   }

    return 0;
}
