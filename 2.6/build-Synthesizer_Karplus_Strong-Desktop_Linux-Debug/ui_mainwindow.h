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
#include <QtWidgets/QSpinBox>
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
    QLabel *frequencyLabel;
    QDoubleSpinBox *frequencySpinBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sampleRateLabel;
    QSpinBox *sampleRateSpinBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *durationLabel;
    QDoubleSpinBox *durationSpinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *createSoundButton;
    QPushButton *listenSoundButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(350, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 331, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frequencyLabel = new QLabel(horizontalLayoutWidget);
        frequencyLabel->setObjectName(QStringLiteral("frequencyLabel"));

        horizontalLayout->addWidget(frequencyLabel);

        frequencySpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        frequencySpinBox->setObjectName(QStringLiteral("frequencySpinBox"));
        frequencySpinBox->setMaximumSize(QSize(80, 16777215));
        frequencySpinBox->setMaximum(50000);
        frequencySpinBox->setValue(245);

        horizontalLayout->addWidget(frequencySpinBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 59, 331, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sampleRateLabel = new QLabel(horizontalLayoutWidget_2);
        sampleRateLabel->setObjectName(QStringLiteral("sampleRateLabel"));

        horizontalLayout_2->addWidget(sampleRateLabel);

        sampleRateSpinBox = new QSpinBox(horizontalLayoutWidget_2);
        sampleRateSpinBox->setObjectName(QStringLiteral("sampleRateSpinBox"));
        sampleRateSpinBox->setMaximumSize(QSize(80, 16777215));
        sampleRateSpinBox->setMaximum(500000);
        sampleRateSpinBox->setValue(44100);

        horizontalLayout_2->addWidget(sampleRateSpinBox);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(9, 119, 331, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        durationLabel = new QLabel(horizontalLayoutWidget_3);
        durationLabel->setObjectName(QStringLiteral("durationLabel"));

        horizontalLayout_3->addWidget(durationLabel);

        durationSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_3);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));
        durationSpinBox->setMaximumSize(QSize(80, 16777215));
        durationSpinBox->setMinimum(1.5);
        durationSpinBox->setMaximum(600);

        horizontalLayout_3->addWidget(durationSpinBox);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 189, 331, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        createSoundButton = new QPushButton(verticalLayoutWidget);
        createSoundButton->setObjectName(QStringLiteral("createSoundButton"));
        createSoundButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(createSoundButton);

        listenSoundButton = new QPushButton(verticalLayoutWidget);
        listenSoundButton->setObjectName(QStringLiteral("listenSoundButton"));
        listenSoundButton->setEnabled(false);
        listenSoundButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(listenSoundButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\232\320\260\321\200\320\277\320\273\321\203\321\201\320\260-\320\241\321\202\321\200\320\276\320\275\320\263\320\260", Q_NULLPTR));
        frequencyLabel->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\201\320\270\320\263\320\275\320\260\320\273\320\260:", Q_NULLPTR));
        sampleRateLabel->setText(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\224\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270:", Q_NULLPTR));
        durationLabel->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \321\201\320\270\320\263\320\275\320\260\320\273\320\260:", Q_NULLPTR));
        createSoundButton->setText(QApplication::translate("MainWindow", "\320\241\320\270\320\275\321\202\320\265\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", Q_NULLPTR));
        listenSoundButton->setText(QApplication::translate("MainWindow", "\320\222\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
