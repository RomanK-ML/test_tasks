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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QLabel *speedSoundLabel;
    QDoubleSpinBox *speedSoundSpinBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *distanceEarsLabel;
    QDoubleSpinBox *distanceEarsSpinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *createSoundButton;
    QPushButton *listenSoundButton;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *angleSourceLabel;
    QDoubleSpinBox *angleSourceSpinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(330, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 311, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        speedSoundLabel = new QLabel(horizontalLayoutWidget);
        speedSoundLabel->setObjectName(QStringLiteral("speedSoundLabel"));

        horizontalLayout->addWidget(speedSoundLabel);

        speedSoundSpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        speedSoundSpinBox->setObjectName(QStringLiteral("speedSoundSpinBox"));
        speedSoundSpinBox->setMaximumSize(QSize(80, 16777215));
        speedSoundSpinBox->setMinimum(100);
        speedSoundSpinBox->setMaximum(5000);
        speedSoundSpinBox->setValue(340.29);

        horizontalLayout->addWidget(speedSoundSpinBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 311, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        distanceEarsLabel = new QLabel(horizontalLayoutWidget_2);
        distanceEarsLabel->setObjectName(QStringLiteral("distanceEarsLabel"));

        horizontalLayout_2->addWidget(distanceEarsLabel);

        distanceEarsSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_2);
        distanceEarsSpinBox->setObjectName(QStringLiteral("distanceEarsSpinBox"));
        distanceEarsSpinBox->setMaximumSize(QSize(80, 16777215));
        distanceEarsSpinBox->setMinimum(5);
        distanceEarsSpinBox->setMaximum(200);
        distanceEarsSpinBox->setValue(20.4);

        horizontalLayout_2->addWidget(distanceEarsSpinBox);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 130, 311, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        createSoundButton = new QPushButton(verticalLayoutWidget);
        createSoundButton->setObjectName(QStringLiteral("createSoundButton"));

        verticalLayout->addWidget(createSoundButton);

        listenSoundButton = new QPushButton(verticalLayoutWidget);
        listenSoundButton->setObjectName(QStringLiteral("listenSoundButton"));
        listenSoundButton->setEnabled(false);

        verticalLayout->addWidget(listenSoundButton);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 90, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        angleSourceLabel = new QLabel(horizontalLayoutWidget_3);
        angleSourceLabel->setObjectName(QStringLiteral("angleSourceLabel"));

        horizontalLayout_3->addWidget(angleSourceLabel);

        angleSourceSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_3);
        angleSourceSpinBox->setObjectName(QStringLiteral("angleSourceSpinBox"));
        angleSourceSpinBox->setMaximumSize(QSize(80, 16777215));
        angleSourceSpinBox->setMaximum(360);
        angleSourceSpinBox->setValue(60);

        horizontalLayout_3->addWidget(angleSourceSpinBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 330, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\227\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \321\201\321\202\320\265\321\200\320\265\320\276\321\201\320\270\320\263\320\275\320\260\320\273", Q_NULLPTR));
        speedSoundLabel->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260:", Q_NULLPTR));
        distanceEarsLabel->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\274\320\265\320\266\320\264\321\203 \321\203\321\210\320\260\320\274\320\270:", Q_NULLPTR));
        createSoundButton->setText(QApplication::translate("MainWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        listenSoundButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\273\321\203\321\210\320\260\321\202\321\214", Q_NULLPTR));
        angleSourceLabel->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\276\321\202 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272\320\260:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
