/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *price_lineEdit;
    QLineEdit *num_lineEdit;
    QListWidget *listWidget;
    QLabel *label_TotalPrice;
    QPushButton *CashButton;
    QPushButton *ZeroButton;
    QLabel *label_3;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 40, 47, 13));
        price_lineEdit = new QLineEdit(centralWidget);
        price_lineEdit->setObjectName(QStringLiteral("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(100, 10, 131, 20));
        num_lineEdit = new QLineEdit(centralWidget);
        num_lineEdit->setObjectName(QStringLiteral("num_lineEdit"));
        num_lineEdit->setGeometry(QRect(100, 40, 131, 20));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 80, 181, 111));
        label_TotalPrice = new QLabel(centralWidget);
        label_TotalPrice->setObjectName(QStringLiteral("label_TotalPrice"));
        label_TotalPrice->setGeometry(QRect(50, 200, 181, 31));
        QFont font;
        font.setPointSize(16);
        label_TotalPrice->setFont(font);
        CashButton = new QPushButton(centralWidget);
        CashButton->setObjectName(QStringLiteral("CashButton"));
        CashButton->setGeometry(QRect(280, 10, 75, 23));
        ZeroButton = new QPushButton(centralWidget);
        ZeroButton->setObjectName(QStringLiteral("ZeroButton"));
        ZeroButton->setGeometry(QRect(280, 40, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 90, 47, 13));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 110, 91, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\345\225\206\345\223\201\344\273\267\346\240\274\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", 0));
        label_TotalPrice->setText(QApplication::translate("MainWindow", "\346\200\273\344\273\267\357\274\232", 0));
        CashButton->setText(QApplication::translate("MainWindow", "\347\273\223\350\264\246", 0));
        ZeroButton->setText(QApplication::translate("MainWindow", "\346\270\205\351\233\266", 0));
        label_3->setText(QApplication::translate("MainWindow", "\344\277\203\351\224\200\346\226\271\345\274\217\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\345\270\270\346\224\266\350\264\271", 0)
         << QApplication::translate("MainWindow", "8.8\346\212\230", 0)
         << QApplication::translate("MainWindow", "\346\273\241300\345\207\217100", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
