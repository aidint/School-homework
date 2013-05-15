#include "login.h"
#include <QBitmap>
Login::Login(QWidget *parent)
    : QDialog(parent)
{
    //setting up the login form:
    this->setWindowOpacity(0);
    this->resize(200,150);
    this->setWindowTitle("ورود");
    this->setWindowIcon(QIcon(":/105.ico"));
    //setting up the button:
    QBrush* brush = new QBrush();
    QPixmap pixmap(":/105.ico");
    brush->setTexture(pixmap);

    QPalette* palette = new QPalette();
    palette->setBrush(QPalette::Button,*brush);

    QPushButton *centralWidget = new QPushButton(this);
    centralWidget->setFlat(true);
    centralWidget->setAutoFillBackground(true);
    centralWidget->setPalette(*palette);
    centralWidget->setMask(pixmap.mask());
    centralWidget->setFixedSize(pixmap.width(),pixmap.height());
    Load();
}

Login::~Login()
{

}

void Login::Load(){
    opactimer = new QTimer;
    connect(opactimer, SIGNAL(timeout()), this, SLOT(opacitychange()));
    opactimer->start(100);
}


