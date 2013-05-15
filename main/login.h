#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QWidget>
#include <QHBoxLayout>
#include <QGridLayout>
//
#include <QTimer>
#include <QIcon>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
class Login : public QDialog
{
    Q_OBJECT
private:
    QTimer *opactimer;
    QPushButton *clicker;
    QIcon *Icon1;
public:
    Login(QWidget *parent = 0);
    ~Login();
    void Load();
public slots:
    void opacitychange(){
        if(this->windowOpacity() < 1){
            this->setWindowOpacity(this->windowOpacity() + 0.035);
        }else opactimer->stop();
    }
};

#endif // LOGIN_H
