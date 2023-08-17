#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher:public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = 0);

signals:
    void hunger();

    void hunger(QString foodName);
};

#endif // TEACHER_H
