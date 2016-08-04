/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(383, 341);
        about->setMinimumSize(QSize(383, 341));
        about->setMaximumSize(QSize(383, 341));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/source/favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        textBrowser = new QTextBrowser(about);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(15, 14, 351, 311));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QWidget *about)
    {
        about->setWindowTitle(QApplication::translate("about", "\345\205\263\344\272\216", 0));
        textBrowser->setHtml(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/image/source/icon.ico\" /> <span style=\" font-size:22pt; color:#1f60f9;\">\345\205\263\344\272\216\346\234\254\347\250\213\345\272\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\344\270\252\347\250\213\345\272\217\347\224\261xtlsoft\347\232\204\347\256\241\347\220\206\345\221\230xtl\345\210\266\344\275\234\343\200\202\350\257\267\345\213\277\351\235\236\346\263\225\344\275\277\347\224\250\346\234\254\347\250\213\345\272\217\343\200\202\350\257\267"
                        "\345\213\277\344\276\265\347\212\257\345\274\200\345\217\221\350\200\205\347\232\204\346\235\203\347\233\212\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">PS\357\274\232\350\277\231\346\230\257\346\210\221\347\254\254\344\270\200\346\254\241\345\206\231QT\347\232\204\347\250\213\345\272\217\357\274\214\344\270\215\345\244\252\345\245\275\357\274\214\350\257\267\345\216\237\350\260\205\343\200\202</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Email\357\274\232xtl@xtlsoft.top</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">QQ    \357\274\2322317305587</p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Skype\357\274\232wpproqoiqy@live.com</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\275\221\347\253\231\357\274\210\345\273\272\350\256\276ing...\357\274\211\357\274\232http://xtlsoft.top</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\256\272\345\235\233\357\274\210\345\273\272\350\256\276ing...\357\274\211\357\274\232http://dzx.xtlsoft.top</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\260\242\350\260\242\346\202\250\344\275\277\347\224\250\346\210\221\347\232\204\347\250\213\345\272\217\357\274\201</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
