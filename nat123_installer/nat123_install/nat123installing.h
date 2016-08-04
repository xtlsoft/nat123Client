#ifndef NAT123INSTALLING_H
#define NAT123INSTALLING_H

#include <QWidget>

extern int canBeCloseInstallingWindow;

namespace Ui {
class nat123installing;
}

class nat123installing : public QWidget
{
    Q_OBJECT

public:
    explicit nat123installing(QWidget *parent = 0);
    ~nat123installing();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_nat123installing_destroyed();

    void on_nat123installing_onLoad();

private:
    Ui::nat123installing *ui;
};


#endif // NAT123INSTALLING_H
