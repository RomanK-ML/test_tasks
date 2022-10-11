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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 9, 581, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        generatedNumbersLabel = new QLabel(horizontalLayoutWidget);
        generatedNumbersLabel->setObjectName(QStringLiteral("generatedNumbersLabel"));
        generatedNumbersLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(generatedNumbersLabel);

        generatedNumbersList = new QListWidget(horizontalLayoutWidget);
        generatedNumbersList->setObjectName(QStringLiteral("generatedNumbersList"));

        verticalLayout->addWidget(generatedNumbersList);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        generateButton = new QPushButton(horizontalLayoutWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));

        verticalLayout->addWidget(generateButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nextNumbersLabel = new QLabel(horizontalLayoutWidget);
        nextNumbersLabel->setObjectName(QStringLiteral("nextNumbersLabel"));
        nextNumbersLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(nextNumbersLabel);

        nextList = new QListWidget(horizontalLayoutWidget);
        nextList->setObjectName(QStringLiteral("nextList"));

        verticalLayout_2->addWidget(nextList);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        nextButton = new QPushButton(horizontalLayoutWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setEnabled(false);

        verticalLayout_2->addWidget(nextButton);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 230, 581, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        visualLabel = new QLabel(horizontalLayoutWidget_2);
        visualLabel->setObjectName(QStringLiteral("visualLabel"));
        visualLabel->setStyleSheet(QLatin1String("font: 22pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
""));
        visualLabel->setLineWidth(1);
        visualLabel->setScaledContents(false);
        visualLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(visualLabel);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 310, 581, 91));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchButton = new QPushButton(horizontalLayoutWidget_3);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setEnabled(false);

        horizontalLayout_3->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        clearButton = new QPushButton(horizontalLayoutWidget_3);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout_3->addWidget(clearButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\263\320\276 \321\207\320\270\321\201\320\273\320\260 \320\277\320\276 \321\207\320\265\321\202\321\213\321\200\320\265\320\274 \320\277\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\274", Q_NULLPTR));
        generatedNumbersLabel->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\260 \320\264\320\273\321\217 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", Q_NULLPTR));
        generateButton->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        nextNumbersLabel->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \321\207\320\270\321\201\320\273\320\260", Q_NULLPTR));
        nextButton->setText(QApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \321\207\320\270\321\201\320\273\320\276", Q_NULLPTR));
        visualLabel->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        searchButton->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\276\320\261\321\200\320\260\321\202\321\214", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
