#ifndef LOGINNOW_H
#define LOGINNOW_H

#include <QWidget>

namespace Ui {
class loginnow;
}

class loginnow : public QWidget
{
    Q_OBJECT

public:
    explicit loginnow(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    ~loginnow();

private:
    Ui::loginnow *ui;
};

#endif // LOGINNOW_H
