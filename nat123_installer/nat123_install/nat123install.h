#ifndef NAT123INSTALL_H
#define NAT123INSTALL_H

#include <QMainWindow>
#include "nat123installing.h"
#include "about.h"

namespace Ui {
class Nat123Install;
}

class Nat123Install : public QMainWindow
{
    Q_OBJECT

public:
    explicit Nat123Install(QWidget *parent = 0);
    ~Nat123Install();
    void closeEvent(QCloseEvent *event);

    void XtlInstall();
    int natInstallingWindowLoad();

private slots:
    void on_installButton_clicked();

    void on_setupConf1_clicked();

    void on_setupConf2_clicked();

    void on_setupConf3_clicked();

    void on_createLink_clicked();

    void on_about_triggered();

    void on_deletLink_clicked();

    void on_removeButton_clicked();

private:
    Ui::Nat123Install *ui; 
    nat123installing natInstallWindow;
    about abWindow;
};


#endif // NAT123INSTALL_H
