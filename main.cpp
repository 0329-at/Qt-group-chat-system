#include "denglu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    denglu d;
    d.show();

    return a.exec();
}
