#include "widget.h"
#include "ui_widget.h"
#include "QPushButton"
//Teacher类
//Student类
//下课后，老师出发信号饿了，学生响应信号，请客

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师的对象
    this->zt = new Teacher(this);
    //创建一个学生的对象
    this->st = new Student(this);

    //老师饿了 学生请客的连接
//    connect(zt,&Teacher::hunger,st,&Student::treat);

//    //调用下课函数
//    classIsOver();
//    void (Teacher:: *teachersignal)(QString) = &Teacher::hunger;
//    void (Student:: *studentsignal)(QString) = &Student::treat;
//    connect(zt,teachersignal,st,studentsignal);
//    classIsOver();

    //点击按钮出发下课
    QPushButton *btn = new QPushButton("下课",this);
    this->resize(600,400);

//    connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);

    //无参版本
    void (Teacher:: *teachersignal2)(void) = &Teacher::hunger;
    void (Student:: *studentsignal2)(void) = &Student::treat;
    connect(zt,teachersignal2,st,studentsignal2);

    //信号连接信号
    connect(btn,&QPushButton::clicked,zt,teachersignal2);

}

void Widget::classIsOver()
{
    //下课函数，调用后触发老师饿了的信号：hunger()
    emit zt->hunger("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}

