/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QCheckBox *checkBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_8;
    QCheckBox *checkBox_2;
    QCustomPlot *widget;
    QCustomPlot *widget_2;
    QCustomPlot *widget_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(841, 826);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(20, 570, 61, 31));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 570, 61, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 570, 89, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 620, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 620, 67, 17));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(390, 280, 311, 81));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 240, 151, 25));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 400, 151, 25));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(390, 60, 51, 31));
        spinBox_3 = new QSpinBox(centralWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(390, 100, 51, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 70, 67, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(460, 110, 67, 17));
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(740, 310, 51, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(720, 280, 111, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(390, 200, 151, 17));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(480, 70, 151, 21));
        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(390, 440, 51, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 450, 67, 17));
        doubleSpinBox_4 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setEnabled(false);
        doubleSpinBox_4->setGeometry(QRect(390, 480, 51, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(false);
        label_8->setGeometry(QRect(450, 490, 67, 17));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(480, 450, 151, 23));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 271, 141));
        widget_2 = new QCustomPlot(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(20, 190, 271, 141));
        widget_3 = new QCustomPlot(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 370, 271, 131));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 510, 141, 17));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 330, 141, 17));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 150, 171, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 841, 22));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\236\320\264\320\275\320\276\320\274\320\265\321\200\320\275\320\260\321\217 \320\274\320\270\320\275\320\270\320\274\320\270\320\267\320\260\321\206\320\270\321\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "eps", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "N", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\267\320\276\320\273\320\276\321\202\320\276\320\265 \321\201\320\265\321\207\320\265\320\275\320\270\320\265", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\274\320\265\321\202\320\276\320\264 \320\277\320\260\321\200\320\260\320\261\320\276\320\273", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\320\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\321\202\320\276\321\207\320\275\320\276\321\201\321\202\321\214 \321\201\320\270\320\263\320\274\320\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "f(x)=e^x+x^2", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "a \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "x0", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "h", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "x0 \320\276\321\202\321\200\320\270\321\206\320\260\321\202\320\265\320\273\321\214\320\275\320\276\320\265", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\320\267\320\276\320\273\320\276\321\202\320\276\320\265 \321\201\320\265\321\207\320\265\320\275\320\270\320\265", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\320\274\320\265\321\202\320\276\320\264 \320\244\320\270\320\261\320\261\320\276\320\275\320\260\321\207\320\270", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\320\274\320\265\321\202\320\276\320\264 \320\264\320\270\321\205\320\276\321\202\320\276\320\274\320\270\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
