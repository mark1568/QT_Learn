#include "mypushbutton.h"

MyPushbutton::MyPushbutton(QWidget *parent)
    : QPushButton{parent}
{
    qDebug()<<"构造调用";

}


MyPushbutton::~MyPushbutton()
{
    qDebug()<<"析构调用";
}
