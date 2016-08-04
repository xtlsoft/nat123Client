#include "nat123installing.h"
#include "nat123install.h"
#include "ui_nat123installing.h"
#include "stdio.h"
#include <QCloseEvent>
#include <QMessageBox>

int canBeCloseInstallingWindow=0;

nat123installing::nat123installing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nat123installing)
{
    ui->setupUi(this);
}

nat123installing::~nat123installing()
{
    delete ui;
}

void nat123installing::closeEvent(QCloseEvent *event)
{
    if(canBeCloseInstallingWindow==1){
        event->accept();
    }else{
        event->ignore();
    }
}
