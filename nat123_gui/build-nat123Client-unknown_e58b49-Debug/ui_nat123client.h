/********************************************************************************
** Form generated from reading UI file 'nat123client.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAT123CLIENT_H
#define UI_NAT123CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nat123client
{
public:
    QAction *action;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QPushButton *loginButton;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *nat123client)
    {
        if (nat123client->objectName().isEmpty())
            nat123client->setObjectName(QStringLiteral("nat123client"));
        nat123client->resize(320, 217);
        nat123client->setMinimumSize(QSize(320, 217));
        nat123client->setMaximumSize(QSize(320, 217));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/source/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        nat123client->setWindowIcon(icon);
        action = new QAction(nat123client);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(nat123client);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(57, 84, 51, 17));
        username = new QLineEdit(centralWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(117, 80, 151, 27));
        username->setCursor(QCursor(Qt::IBeamCursor));
        username->setInputMethodHints(Qt::ImhTime);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 122, 41, 17));
        password = new QLineEdit(centralWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(117, 118, 150, 27));
        password->setCursor(QCursor(Qt::IBeamCursor));
        password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData|Qt::ImhTime);
        password->setEchoMode(QLineEdit::Password);
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(110, 160, 99, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(17, -1, 271, 81));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(249, 171, 70, 17));
        nat123client->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(nat123client);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 320, 31));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        nat123client->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(nat123client);

        QMetaObject::connectSlotsByName(nat123client);
    } // setupUi

    void retranslateUi(QMainWindow *nat123client)
    {
        nat123client->setWindowTitle(QApplication::translate("nat123client", "nat123\345\256\242\346\210\267\347\253\257 - \347\231\273\345\275\225", 0));
        action->setText(QApplication::translate("nat123client", "\345\205\263\344\272\216", 0));
        label->setText(QApplication::translate("nat123client", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("nat123client", "\345\257\206\347\240\201", 0));
        loginButton->setText(QApplication::translate("nat123client", "\347\231\273\345\275\225", 0));
        label_3->setText(QApplication::translate("nat123client", "<html><head/><body><p><img src=\":/image/source/logo.gif\"/></p></body></html>", 0));
        label_4->setText(QApplication::translate("nat123client", "Gui by xtl", 0));
        menu->setTitle(QApplication::translate("nat123client", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class nat123client: public Ui_nat123client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAT123CLIENT_H
