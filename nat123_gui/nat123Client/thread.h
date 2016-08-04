#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <iostream>
#include <string>
#include <QByteArray>
#include <QString>
#include <vector>
#include "stdio.h"

using namespace std;

class Thread : public QThread
{
    Q_OBJECT
public:
    Thread();
    string startbash;
    void stop();

protected:
    void run();
    void printMessage();

private:
    volatile bool stopped;
};

#endif // THREAD_H
