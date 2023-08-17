#include "widget.h"
#include "QPushButton"
#include "mypushbutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton * btn = new QPushButton;
    //setParent()参数为当前对象指针，Widget的指针为this
    btn->setParent(this);
    btn->setText("第一个按钮");

    //创建第二个按钮，按照控件大小创建窗口
    QPushButton * btn2 = new QPushButton("第二个按钮",this);

    //移动btn2的位置
    btn2->move(100,100);
//    //重置窗口大小
//    resize(600,400);
    //设置固定窗口大小
    setFixedSize(600,400);
    //设置窗口标题
    setWindowTitle("第一个窗口");



    //创建一个自己的按钮对象
    MyPushbutton * mybtn = new MyPushbutton;
    mybtn->setText("我的按钮");

    mybtn->move(100,0);
    mybtn->setParent(this);


    //需求：点击按钮关闭窗口
    connect(mybtn,&QPushButton::clicked,this,&Widget::close);
}

Widget::~Widget()
{
}

