#include "login.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}
