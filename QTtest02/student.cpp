#include "student.h"
#include "QDebug"
Student::Student(QObject *parent):QObject(parent)
{

}

void Student::treat()
{
    qDebug()<<"请老师吃饭";
}

void Student::treat(QString foodName)
{
    qDebug().nospace()<<"老师要吃"<<foodName.toUtf8().data();
}
