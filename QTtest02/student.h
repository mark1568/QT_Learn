#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student:public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = 0);
    void treat();

    void treat(QString foodName);

};

#endif // STUDENT_H
