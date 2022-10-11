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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *generatedNumbersLabel;
    QListWidget *generatedNumbersList;
    QSpacerItem *verticalSpacer;
    QPushButton *generateButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *nextNumbersLabel;
    QListWidget *nextList;
    QSpacerItem *verticalSpacer_2;
    QPushButton *nextButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *visualLabel;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 9, 581, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generatedNumbersLabel = new QLabel(horizontalLayoutWidget);
        generatedNumbersLabel->setObjectName(QString::fromUtf8("generatedNumbersLabel"));
        generatedNumbersLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(generatedNumbersLabel);

        generatedNumbersList = new QListWidget(horizontalLayoutWidget);
        generatedNumbersList->setObjectName(QString::fromUtf8("generatedNumbersList"));

        verticalLayout->addWidget(generatedNumbersList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        generateButton = new QPushButton(horizontalLayoutWidget);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));

        verticalLayout->addWidget(generateButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nextNumbersLabel = new QLabel(horizontalLayoutWidget);
        nextNumbersLabel->setObjectName(QString::fromUtf8("nextNumbersLabel"));
        nextNumbersLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(nextNumbersLabel);

        nextList = new QListWidget(horizontalLayoutWidget);
        nextList->setObjectName(QString::fromUtf8("nextList"));

        verticalLayout_2->addWidget(nextList);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        nextButton = new QPushButton(horizontalLayoutWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setEnabled(false);

        verticalLayout_2->addWidget(nextButton);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 230, 581, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        visualLabel = new QLabel(horizontalLayoutWidget_2);
        visualLabel->setObjectName(QString::fromUtf8("visualLabel"));
        visualLabel->setStyleSheet(QString::fromUtf8("font: 22pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
""));
        visualLabel->setLineWidth(1);
        visualLabel->setScaledContents(false);
        visualLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(visualLabel);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 310, 581, 91));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchButton = new QPushButton(horizontalLayoutWidget_3);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setEnabled(false);

        horizontalLayout_3->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clearButton = new QPushButton(horizontalLayoutWidget_3);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_3->addWidget(clearButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
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
        generatedNumbersLabel->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\260 \320\264\320\273\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        nextNumbersLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \321\207\320\270\321\201\320\273\320\276", nullptr));
        visualLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
