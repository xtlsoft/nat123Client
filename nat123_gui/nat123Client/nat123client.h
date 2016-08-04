#ifndef NAT123CLIENT_H
#define NAT123CLIENT_H

#include <QMainWindow>
#include "about.h"
#include "loginnow.h"
#include "mainwindow.h"
#include "thread.h"

extern int canCloseMainWindow;
extern int canCloseLoginNow;

namespace Ui {
class nat123client;
}

class nat123client : public QMainWindow
{
    Q_OBJECT

public:
    explicit nat123client(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    ~nat123client();
    Ui::nat123client *myuif;

private slots:
    void on_action_triggered();

    void on_loginButton_clicked();

    void on_username_textChanged(const QString &username_q);

    void on_password_textChanged(const QString &password_q);

private:
    Ui::nat123client *ui;
    about abWindow;
    loginnow loginWindow;
    mainwindow mainWin;
    Thread thread;
};

#endif // NAT123CLIENT_H
