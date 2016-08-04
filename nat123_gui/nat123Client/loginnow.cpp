#include "loginnow.h"
#include "ui_loginnow.h"
#include "nat123client.h"
#include <QCloseEvent>

int canCloseLoginNow = 0;

loginnow::loginnow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginnow)
{
    ui->setupUi(this);
}

loginnow::~loginnow()
{
    delete ui;
}

void loginnow::closeEvent( QCloseEvent * event )
{
    if(canCloseLoginNow==1){
        event->accept();
    }else{
        event->ignore();
    }
}
