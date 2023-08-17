#include "widget.h"
#include <QApplication> //包含一个应用程序类的头文件

int main(int argc, char *argv[])
{
    //a：应用程序对象
    QApplication a(argc, argv);
    //w：窗口对象
    Widget w;
    w.show();
    return a.exec();
}
