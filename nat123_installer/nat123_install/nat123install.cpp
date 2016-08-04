#include "nat123install.h"
#include "ui_nat123install.h"
#include "nat123installing.h"
#include "stdio.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QTimer>

int InstallMode=1;
int CreateLink=1;
int DelLink=1;

Nat123Install::Nat123Install(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Nat123Install)
{
    printf("Loading nat123Install by xtlsoft...\n");
    system("sleep 0.3");
    printf("Loaded mainWindow.\n");
    printf("Email:xtl@xtlsoft.top\n");
    printf("All done, have fun!\n");

    ui->setupUi(this);
}

Nat123Install::~Nat123Install()
{
//    delete ui;
}

void Nat123Install::on_installButton_clicked()
{
    printf("InstallButton clicked:  ");
    printf("%d ",InstallMode);
    printf("%d.\n",CreateLink);
    this->hide();
    QMessageBox::information(this,"安装须知","安装大约需要3~10分钟，取决于网速。安装过程中会假死（窗口变灰，提示未响应），属正常现象，请不要关闭，耐心等待即可。程序将安装在/etc/nat123下。如密码输错或安装方式选错，会直接又跳到主界面，但还是会提示‘安装完成’。","确定");
    natInstallWindow.show();
    QEventLoop eventloop; QTimer::singleShot(100, &eventloop, SLOT(quit())); eventloop.exec();
    printf("start install\n");
    switch(InstallMode){
        case 1:
            system("gksu ./source/apt.sh");
        break;
        case 2:
            system("gksu ./source/yum.sh");
        break;
        case 3:
            system("gksu ./source/zypper.sh");
        break;
    }
    if(CreateLink==1){
        system("cp ./source/nat123 ~/nat123");
    }
    printf("Install success!\n");
    this->show();
    canBeCloseInstallingWindow=1;
    natInstallWindow.close();
    QMessageBox::information(this,"安装完成","已安装完成nat123。","确定");
}

void Nat123Install::on_setupConf1_clicked()
{
    InstallMode=1;
}

void Nat123Install::on_setupConf2_clicked()
{
    InstallMode=2;
}

void Nat123Install::on_setupConf3_clicked()
{
    InstallMode=3;
}

void Nat123Install::on_createLink_clicked()
{
    if(CreateLink==1){
        CreateLink=0;
    }else{
        CreateLink=1;
    }
}

void Nat123Install::closeEvent( QCloseEvent * event )
{
    switch( QMessageBox::information( this,
                                    tr("确认"),
                                    tr("您确定要退出“Nat123一键安装器(by xtlsoft)吗？”"),
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

void Nat123Install::on_about_triggered()
{
    printf("about clicked.\n");
    abWindow.show();
}

void Nat123Install::on_deletLink_clicked()
{
    if(DelLink==1){
        DelLink=0;
    }else{
        DelLink=1;
    }
}

void Nat123Install::on_removeButton_clicked()
{
    system("gksu \"rm -rf /etc/nat123\"");
    if(DelLink==1){
        system("rm -f ~/nat123");
    }
    QMessageBox::information(this,"拆卸完成","已完成拆卸nat123。","确定");
}
