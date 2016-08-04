/********************************************************************************
** Form generated from reading UI file 'nat123install.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAT123INSTALL_H
#define UI_NAT123INSTALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nat123Install
{
public:
    QAction *action;
    QAction *about;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QTabWidget *tabWidget;
    QWidget *tab;
    QRadioButton *setupConf1;
    QRadioButton *setupConf2;
    QRadioButton *setupConf3;
    QPushButton *installButton;
    QCheckBox *createLink;
    QWidget *tab_2;
    QLabel *label;
    QPushButton *removeButton;
    QCheckBox *deletLink;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Nat123Install)
    {
        if (Nat123Install->objectName().isEmpty())
            Nat123Install->setObjectName(QStringLiteral("Nat123Install"));
        Nat123Install->resize(601, 305);
        Nat123Install->setMinimumSize(QSize(601, 305));
        Nat123Install->setMaximumSize(QSize(601, 305));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/source/install.png"), QSize(), QIcon::Normal, QIcon::Off);
        Nat123Install->setWindowIcon(icon);
        action = new QAction(Nat123Install);
        action->setObjectName(QStringLiteral("action"));
        about = new QAction(Nat123Install);
        about->setObjectName(QStringLiteral("about"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("source/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon1);
        centralWidget = new QWidget(Nat123Install);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 281, 281));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textBrowser->setSource(QUrl(QString::fromUtf8("file:///home/xtlsoft/\346\226\207\346\241\243/nat123_install/source/txt.md")));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(280, 0, 321, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        setupConf1 = new QRadioButton(tab);
        setupConf1->setObjectName(QStringLiteral("setupConf1"));
        setupConf1->setGeometry(QRect(30, 30, 117, 22));
        setupConf1->setCursor(QCursor(Qt::PointingHandCursor));
        setupConf1->setChecked(true);
        setupConf2 = new QRadioButton(tab);
        setupConf2->setObjectName(QStringLiteral("setupConf2"));
        setupConf2->setGeometry(QRect(30, 70, 117, 22));
        setupConf2->setCursor(QCursor(Qt::PointingHandCursor));
        setupConf2->setChecked(false);
        setupConf3 = new QRadioButton(tab);
        setupConf3->setObjectName(QStringLiteral("setupConf3"));
        setupConf3->setGeometry(QRect(30, 110, 117, 22));
        setupConf3->setCursor(QCursor(Qt::PointingHandCursor));
        installButton = new QPushButton(tab);
        installButton->setObjectName(QStringLiteral("installButton"));
        installButton->setGeometry(QRect(100, 190, 99, 27));
        installButton->setCursor(QCursor(Qt::PointingHandCursor));
        createLink = new QCheckBox(tab);
        createLink->setObjectName(QStringLiteral("createLink"));
        createLink->setGeometry(QRect(60, 150, 191, 22));
        createLink->setCursor(QCursor(Qt::PointingHandCursor));
        createLink->setChecked(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 60, 171, 20));
        removeButton = new QPushButton(tab_2);
        removeButton->setObjectName(QStringLiteral("removeButton"));
        removeButton->setGeometry(QRect(110, 150, 99, 27));
        removeButton->setCursor(QCursor(Qt::PointingHandCursor));
        deletLink = new QCheckBox(tab_2);
        deletLink->setObjectName(QStringLiteral("deletLink"));
        deletLink->setGeometry(QRect(68, 106, 201, 22));
        deletLink->setCursor(QCursor(Qt::PointingHandCursor));
        deletLink->setAutoFillBackground(false);
        deletLink->setChecked(true);
        tabWidget->addTab(tab_2, QString());
        Nat123Install->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Nat123Install);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 31));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        Nat123Install->setMenuBar(menuBar);
        statusBar = new QStatusBar(Nat123Install);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Nat123Install->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(about);

        retranslateUi(Nat123Install);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Nat123Install);
    } // setupUi

    void retranslateUi(QMainWindow *Nat123Install)
    {
        Nat123Install->setWindowTitle(QApplication::translate("Nat123Install", "Nat123\344\270\200\351\224\256\345\256\211\350\243\205\345\231\250(by xtlsoft)", 0));
        action->setText(QApplication::translate("Nat123Install", "\345\205\263\344\272\216", 0));
        about->setText(QApplication::translate("Nat123Install", "\345\205\263\344\272\216", 0));
        about->setShortcut(QApplication::translate("Nat123Install", "H", 0));
        textBrowser->setHtml(QApplication::translate("Nat123Install", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0004;\">nat123\350\207\252\345\212\250\345\256\211\350\243\205\345\231\250\350\257\264\346\230\216</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-------------------------------------------------------</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\245\347\250\213\345\272\217\347\224\261xtlsoft\345\210\266\344\275"
                        "\234</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">mail:xtl@xtlsoft.top</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-------------------------------------------------------</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\256\211\350\243\205\346\226\271\345\274\217\344\270\200\357\274\232</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\344\272\216debain\345\222\214\345\205\266\345\256\203\344\275\277\347\224\250apt-get\347\232\204\347\263\273\347\273\237\343\200\202</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\256\211\350\243\205\346\226\271\345\274\217\344\272\214\357\274\232</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\344\272\216redhat\345\222\214\345\205\266\345\256\203\344\275\277\347\224\250yum\347\232\204\347\263\273\347\273\237\343\200\202</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\256\211\350\243\205\346\226\271\345\274\217\344\270\211\357\274\232</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\344\272\216suse\347\255\211\344\275\277\347\224\250zypper\347\232\204\347\263\273\347\273\237\343\200\202</p></body></html>", 0));
        setupConf1->setText(QApplication::translate("Nat123Install", "\345\256\211\350\243\205\346\226\271\345\274\217\344\270\200", 0));
        setupConf2->setText(QApplication::translate("Nat123Install", "\345\256\211\350\243\205\346\226\271\345\274\217\344\272\214", 0));
        setupConf3->setText(QApplication::translate("Nat123Install", "\345\256\211\350\243\205\346\226\271\345\274\217\344\270\211", 0));
        installButton->setText(QApplication::translate("Nat123Install", "\345\256\211\350\243\205", 0));
        createLink->setText(QApplication::translate("Nat123Install", "\345\234\250\344\270\273\347\233\256\345\275\225\345\210\233\345\273\272\345\277\253\346\215\267\346\226\271\345\274\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Nat123Install", "\345\256\211\350\243\205", 0));
        label->setText(QApplication::translate("Nat123Install", "\346\202\250\347\241\256\345\256\232\350\246\201\346\213\206\345\215\270nat123\345\220\227\357\274\237", 0));
        removeButton->setText(QApplication::translate("Nat123Install", "\346\213\206\345\215\270", 0));
        deletLink->setText(QApplication::translate("Nat123Install", "\345\210\240\351\231\244\344\270\273\347\233\256\345\275\225\344\270\213\347\232\204\345\277\253\346\215\267\346\226\271\345\274\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Nat123Install", "\346\213\206\345\215\270", 0));
        menu->setTitle(QApplication::translate("Nat123Install", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class Nat123Install: public Ui_Nat123Install {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAT123INSTALL_H
