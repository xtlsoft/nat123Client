/********************************************************************************
** Form generated from reading UI file 'loginnow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINNOW_H
#define UI_LOGINNOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginnow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *loginnow)
    {
        if (loginnow->objectName().isEmpty())
            loginnow->setObjectName(QStringLiteral("loginnow"));
        loginnow->resize(321, 162);
        loginnow->setMinimumSize(QSize(321, 162));
        loginnow->setMaximumSize(QSize(321, 162));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/source/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        loginnow->setWindowIcon(icon);
        label = new QLabel(loginnow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 11, 291, 91));
        label_2 = new QLabel(loginnow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(72, 90, 181, 41));
        label_3 = new QLabel(loginnow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(248, 130, 81, 31));

        retranslateUi(loginnow);

        QMetaObject::connectSlotsByName(loginnow);
    } // setupUi

    void retranslateUi(QWidget *loginnow)
    {
        loginnow->setWindowTitle(QApplication::translate("loginnow", "\346\255\243\345\234\250\347\231\273\351\231\206...", 0));
        label->setText(QApplication::translate("loginnow", "<html><head/><body><p><img src=\":/image/source/logo.gif\"/></p></body></html>", 0));
        label_2->setText(QApplication::translate("loginnow", "<html><head/><body><p><span style=\" font-size:14pt; color:#202167;\">\346\255\243\345\234\250\347\231\273\345\275\225\357\274\214\350\257\267\347\250\215\345\200\231...</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("loginnow", "<html><head/><body><p>Gui by <img src=\":/image/source/icon.ico\" height=\"20\"/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class loginnow: public Ui_loginnow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINNOW_H
