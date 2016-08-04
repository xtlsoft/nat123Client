#include "thread.h"
#include <QDebug>

Thread::Thread()
{
    stopped = false;
}

void Thread::run()
{
    if(!stopped)
    {
        printMessage();
    }
    stopped = false;
}

void Thread::stop()
{
    stopped = true;
}

void Thread::printMessage()
{
    system(this->startbash.c_str());
}
