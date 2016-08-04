#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCloseEvent>
#include "nat123client.h"
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>
#include <QMessageBox>

int canCloseMainWindow = 0;

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::on_action_3_triggered()
{
    abWindow.show();
}

void mainwindow::closeEvent( QCloseEvent * event )
{
    if(canCloseMainWindow==1){
        event->accept();
    }else{
        event->ignore();
    }
}

void mainwindow::on_about_clicked()
{
    abWindow.show();
}

void mainwindow::on_exit_clicked()
{
    switch( QMessageBox::information(this,
                                    tr("确认"),
                                    tr("您确定要退出“Nat123”吗？"),
                                    tr("确定"), tr("取消"),
                                    0, 1 ) )
    {
        case 0:
            thread.stop();
            thread.wait();
            canCloseMainWindow=1;
            this->close();
            exit(0);
        break;
        case 1:
        default:
        break;
    }
}

void mainwindow::on_action_5_triggered()
{
    switch( QMessageBox::information(this,
                                    tr("确认"),
                                    tr("您确定要退出“Nat123”吗？"),
                                    tr("确定"), tr("取消"),
                                    0, 1 ) )
    {
        case 0:
            thread.stop();
            thread.wait();
            canCloseMainWindow=1;
            this->close();
            exit(0);
        break;
        case 1:
        default:
        break;
    }
}


void mainwindow::on_action_nat123_triggered()
{
    const QUrl url("http://www.nat123.com/");
    qDebug() << url.scheme();
    qDebug() << url.port();
    QDesktopServices::openUrl(url);
}

void mainwindow::on_go_nat123_clicked()
{
    const QUrl url("http://www.nat123.com/");
    qDebug() << url.scheme();
    qDebug() << url.port();
    QDesktopServices::openUrl(url);
}
