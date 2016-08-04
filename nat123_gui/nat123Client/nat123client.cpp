#include "nat123client.h"
#include "ui_nat123client.h"
#include <QCloseEvent>
#include "stdio.h"
#include <string>
#include <QByteArray>
#include <QTimer>
#include <QString>
#include <vector>
#include <iostream>
#include <QMessageBox>

using namespace std;



QString s2q(const string &s)
{
return QString(QString::fromLocal8Bit(s.c_str()));
}
string q2s(const QString &s)
{
return string((const char *)s.toLocal8Bit());
}

string username_str;
string password_str;

nat123client::nat123client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nat123client)
{
    ui->setupUi(this);
}

nat123client::~nat123client()
{
    delete ui;
}

void nat123client::on_action_triggered()
{
    abWindow.show();
}

void nat123client::on_loginButton_clicked()
{
    this->hide();
    loginWindow.show();
    QEventLoop eventloop; QTimer::singleShot(100, &eventloop, SLOT(quit())); eventloop.exec();
    thread.startbash="gksu mono ./nat123linux.sh autologin "+username_str+" "+password_str;
    thread.start();
    QMessageBox::information(this,"提示","由于nat123官方的限制，本程序不能取得登录状态、联网状态。您可以运行‘top’命令，如果‘mono’的CPU占用率在%60以上，登录肯定不成功。","确定");
    system("sleep 5");
    canCloseLoginNow=1;
    loginWindow.close();
    mainWin.show();
}

void nat123client::on_username_textChanged(const QString &username_q)
{
    username_str = q2s(username_q);
}

void nat123client::on_password_textChanged(const QString &password_q)
{
    password_str = q2s(password_q);
}

void nat123client::closeEvent( QCloseEvent * event )
{
    switch( QMessageBox::information(this,
                                    tr("确认"),
                                    tr("您确定要退出“Nat123”吗？"),
                                    tr("确定"), tr("取消"),
                                    0, 1 ) )
    {
        case 0:
        event->accept();
        break;
        case 1:
        default:
        event->ignore();
        break;
    }
}
