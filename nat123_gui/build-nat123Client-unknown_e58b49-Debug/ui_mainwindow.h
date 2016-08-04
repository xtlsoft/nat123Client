/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *action_nat123;
    QAction *action_3;
    QAction *action_5;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *go_nat123;
    QPushButton *about;
    QPushButton *exit;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(502, 283);
        mainwindow->setMinimumSize(QSize(502, 283));
        mainwindow->setMaximumSize(QSize(502, 283));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/source/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindow->setWindowIcon(icon);
        action_nat123 = new QAction(mainwindow);
        action_nat123->setObjectName(QStringLiteral("action_nat123"));
        action_nat123->setIcon(icon);
        action_3 = new QAction(mainwindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/source/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon1);
        action_5 = new QAction(mainwindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/source/install.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon2);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 236, 67, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(56, 24, 381, 51));
        go_nat123 = new QPushButton(centralwidget);
        go_nat123->setObjectName(QStringLiteral("go_nat123"));
        go_nat123->setGeometry(QRect(150, 90, 181, 27));
        about = new QPushButton(centralwidget);
        about->setObjectName(QStringLiteral("about"));
        about->setGeometry(QRect(190, 130, 99, 27));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(191, 170, 99, 27));
        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 502, 31));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        mainwindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_nat123);
        menu->addSeparator();
        menu->addAction(action_3);
        menu->addSeparator();
        menu->addAction(action_5);

        retranslateUi(mainwindow);

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "nat123\345\256\242\346\210\267\347\253\257", 0));
        action_nat123->setText(QApplication::translate("mainwindow", "\346\211\223\345\274\200nat123\345\256\230\347\275\221", 0));
        action_3->setText(QApplication::translate("mainwindow", "\345\205\263\344\272\216", 0));
        action_5->setText(QApplication::translate("mainwindow", "\351\200\200\345\207\272\346\234\215\345\212\241", 0));
        label->setText(QApplication::translate("mainwindow", "Gui by xtl", 0));
        label_2->setText(QApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#5a841a;\">\345\260\212\346\225\254</span><span style=\" font-size:14pt; color:#884685;\">\347\232\204</span><span style=\" font-size:18pt; color:#a33b46;\">\347\224\250\346\210\267</span><span style=\" font-size:16pt; color:#387988;\">\357\274\214</span><span style=\" font-size:18pt; color:#159d82;\">\346\202\250</span><span style=\" font-size:14pt; color:#33309d;\">\345\267\262</span><span style=\" font-size:18pt; color:#159d82;\">\347\231\273\345\275\225</span><span style=\" font-size:16pt; color:#38457e;\">\357\274\214</span><span style=\" font-size:18pt; color:#3c32c6;\">\346\234\215\345\212\241</span><span style=\" font-size:14pt; color:#68334d;\">\345\267\262</span><span style=\" font-size:18pt; color:#a33ea1;\">\345\220\257\345\212\250</span><span style=\" font-size:16pt; color:#7b1b7e;\">\357\274\201</span></p></body></html>", 0));
        go_nat123->setText(QApplication::translate("mainwindow", "\345\211\215\345\276\200nat123\345\256\230\347\275\221\351\205\215\347\275\256\346\230\240\345\260\204", 0));
        about->setText(QApplication::translate("mainwindow", "\345\205\263\344\272\216", 0));
        exit->setText(QApplication::translate("mainwindow", "\351\200\200\345\207\272\346\234\215\345\212\241", 0));
        menu->setTitle(QApplication::translate("mainwindow", "\345\221\275\344\273\244", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
