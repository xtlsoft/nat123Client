#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "about.h"
#include "QSystemTrayIcon"
#include "thread.h"

namespace Ui {
class mainwindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    ~mainwindow();

private slots:
    void on_action_3_triggered();

    void on_about_clicked();

    void on_exit_clicked();

    void on_action_5_triggered();

    void on_action_nat123_triggered();

    void on_go_nat123_clicked();

private:
    Ui::mainwindow *ui;
    about abWindow;
    Thread thread;
};

#endif // MAINWINDOW_H
