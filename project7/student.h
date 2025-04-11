class Student{
public:
  Student(QString,QString);
  QString getName() const;
  QString getFaculty() const;
private:
  QString name;
  QString faculty;
};
