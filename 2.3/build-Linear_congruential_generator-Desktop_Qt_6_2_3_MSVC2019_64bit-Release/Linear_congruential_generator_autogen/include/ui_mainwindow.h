/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *numbersLabel;
    QSpinBox *oneNumberSpinBox;
    QSpinBox *twoNumberSpinBox;
    QSpinBox *threeNumberSpinBox;
    QSpinBox *fourNumberSpinBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nextNumberLabel;
    QLabel *nextNumberValueLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *generatedNumbersButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *nextNumberButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 450);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(350, 550));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 331, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        numbersLabel = new QLabel(verticalLayoutWidget);
        numbersLabel->setObjectName(QString::fromUtf8("numbersLabel"));
        numbersLabel->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: black;"));
        numbersLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(numbersLabel);

        oneNumberSpinBox = new QSpinBox(verticalLayoutWidget);
        oneNumberSpinBox->setObjectName(QString::fromUtf8("oneNumberSpinBox"));
        oneNumberSpinBox->setMaximum(65554);
        oneNumberSpinBox->setValue(157);

        verticalLayout->addWidget(oneNumberSpinBox);

        twoNumberSpinBox = new QSpinBox(verticalLayoutWidget);
        twoNumberSpinBox->setObjectName(QString::fromUtf8("twoNumberSpinBox"));
        twoNumberSpinBox->setMaximum(65554);
        twoNumberSpinBox->setValue(5054);

        verticalLayout->addWidget(twoNumberSpinBox);

        threeNumberSpinBox = new QSpinBox(verticalLayoutWidget);
        threeNumberSpinBox->setObjectName(QString::fromUtf8("threeNumberSpinBox"));
        threeNumberSpinBox->setMaximum(65554);
        threeNumberSpinBox->setValue(25789);

        verticalLayout->addWidget(threeNumberSpinBox);

        fourNumberSpinBox = new QSpinBox(verticalLayoutWidget);
        fourNumberSpinBox->setObjectName(QString::fromUtf8("fourNumberSpinBox"));
        fourNumberSpinBox->setMaximum(65554);
        fourNumberSpinBox->setValue(13214);

        verticalLayout->addWidget(fourNumberSpinBox);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 259, 331, 63));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nextNumberLabel = new QLabel(verticalLayoutWidget_2);
        nextNumberLabel->setObjectName(QString::fromUtf8("nextNumberLabel"));
        nextNumberLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(nextNumberLabel);

        nextNumberValueLabel = new QLabel(verticalLayoutWidget_2);
        nextNumberValueLabel->setObjectName(QString::fromUtf8("nextNumberValueLabel"));
        nextNumberValueLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"Segoe UI\";\n"
"color: black;"));
        nextNumberValueLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(nextNumberValueLabel);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(12, 199, 331, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        generatedNumbersButton = new QPushButton(horizontalLayoutWidget);
        generatedNumbersButton->setObjectName(QString::fromUtf8("generatedNumbersButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(generatedNumbersButton->sizePolicy().hasHeightForWidth());
        generatedNumbersButton->setSizePolicy(sizePolicy1);
        generatedNumbersButton->setMaximumSize(QSize(200, 16777215));
        generatedNumbersButton->setToolTipDuration(-5);
        generatedNumbersButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(generatedNumbersButton);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 330, 331, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nextNumberButton = new QPushButton(horizontalLayoutWidget_2);
        nextNumberButton->setObjectName(QString::fromUtf8("nextNumberButton"));
        sizePolicy1.setHeightForWidth(nextNumberButton->sizePolicy().hasHeightForWidth());
        nextNumberButton->setSizePolicy(sizePolicy1);
        nextNumberButton->setMaximumSize(QSize(200, 16777215));
        nextNumberButton->setToolTipDuration(-5);
        nextNumberButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(nextNumberButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276 \321\207\320\270\321\201\320\273\320\260 \320\277\320\276 \321\207\320\265\321\202\321\213\321\200\320\265\320\274 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\274", nullptr));
        numbersLabel->setText(QCoreApplication::translate("MainWindow", "4 \321\207\320\270\321\201\320\273\320\260 \320\264\320\273\321\217 \320\277\321\200\320\265\320\264\321\201\320\272\320\260\320\267\320\260\320\275\320\270\321\217", nullptr));
        nextNumberLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \321\207\320\270\321\201\320\273\320\276:", nullptr));
        nextNumberValueLabel->setText(QCoreApplication::translate("MainWindow", "------", nullptr));
        generatedNumbersButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        nextNumberButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\201\320\272\320\260\320\267\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
