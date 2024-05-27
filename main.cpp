#include "apwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    APWidget w;
    w.show();
    return a.exec();
}
