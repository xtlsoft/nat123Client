/********************************************************************************
** Form generated from reading UI file 'nat123installing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAT123INSTALLING_H
#define UI_NAT123INSTALLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nat123installing
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *nat123installing)
    {
        if (nat123installing->objectName().isEmpty())
            nat123installing->setObjectName(QStringLiteral("nat123installing"));
        nat123installing->resize(228, 84);
        nat123installing->setMinimumSize(QSize(228, 84));
        nat123installing->setMaximumSize(QSize(228, 84));
        nat123installing->setCursor(QCursor(Qt::WaitCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/source/install.png"), QSize(), QIcon::Normal, QIcon::Off);
        nat123installing->setWindowIcon(icon);
        nat123installing->setAutoFillBackground(false);
        label = new QLabel(nat123installing);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 6, 201, 71));
        label->setCursor(QCursor(Qt::WaitCursor));
        label_2 = new QLabel(nat123installing);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 19, 141, 17));
        label_2->setCursor(QCursor(Qt::WaitCursor));
        label_3 = new QLabel(nat123installing);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(54, 53, 21, 21));

        retranslateUi(nat123installing);

        QMetaObject::connectSlotsByName(nat123installing);
    } // setupUi

    void retranslateUi(QWidget *nat123installing)
    {
        nat123installing->setWindowTitle(QApplication::translate("nat123installing", "\345\256\211\350\243\205nat123", 0));
        label->setText(QApplication::translate("nat123installing", "<html><head/><body><p><img src=\":/images/source/install.png\" width=\"70\"/><img src=\":/images/source/logo.gif\" width=\"140\"/></p></body></html>", 0));
        label_2->setText(QApplication::translate("nat123installing", "\346\255\243\345\234\250\345\256\211\350\243\205\357\274\214\350\257\267\347\250\215\345\200\231...", 0));
        label_3->setText(QApplication::translate("nat123installing", "<html><head/><body><p><img src=\":/images/source/icon.ico\" width=\"20\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class nat123installing: public Ui_nat123installing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAT123INSTALLING_H
