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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *startAngleSourceLabel;
    QDoubleSpinBox *startAngleSourceSpinBox;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *distanceSourceLabel;
    QDoubleSpinBox *dustanceSourceSpinBox;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *speedRotationSourceLabel;
    QDoubleSpinBox *speedRotationSourceSpinBox;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *soundTimeDurationLabel;
    QDoubleSpinBox *soundTimeDurationSpinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(330, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 311, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        speedSoundLabel = new QLabel(horizontalLayoutWidget);
        speedSoundLabel->setObjectName(QString::fromUtf8("speedSoundLabel"));

        horizontalLayout->addWidget(speedSoundLabel);

        speedSoundSpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        speedSoundSpinBox->setObjectName(QString::fromUtf8("speedSoundSpinBox"));
        speedSoundSpinBox->setMaximumSize(QSize(80, 16777215));
        speedSoundSpinBox->setMinimum(100.000000000000000);
        speedSoundSpinBox->setMaximum(5000.000000000000000);
        speedSoundSpinBox->setValue(340.290000000000020);

        horizontalLayout->addWidget(speedSoundSpinBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 311, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        distanceEarsLabel = new QLabel(horizontalLayoutWidget_2);
        distanceEarsLabel->setObjectName(QString::fromUtf8("distanceEarsLabel"));

        horizontalLayout_2->addWidget(distanceEarsLabel);

        distanceEarsSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_2);
        distanceEarsSpinBox->setObjectName(QString::fromUtf8("distanceEarsSpinBox"));
        distanceEarsSpinBox->setMaximumSize(QSize(80, 16777215));
        distanceEarsSpinBox->setMinimum(5.000000000000000);
        distanceEarsSpinBox->setMaximum(200.000000000000000);
        distanceEarsSpinBox->setValue(20.399999999999999);

        horizontalLayout_2->addWidget(distanceEarsSpinBox);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 260, 311, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        createSoundButton = new QPushButton(verticalLayoutWidget);
        createSoundButton->setObjectName(QString::fromUtf8("createSoundButton"));

        verticalLayout->addWidget(createSoundButton);

        listenSoundButton = new QPushButton(verticalLayoutWidget);
        listenSoundButton->setObjectName(QString::fromUtf8("listenSoundButton"));
        listenSoundButton->setEnabled(false);

        verticalLayout->addWidget(listenSoundButton);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 90, 311, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        startAngleSourceLabel = new QLabel(horizontalLayoutWidget_3);
        startAngleSourceLabel->setObjectName(QString::fromUtf8("startAngleSourceLabel"));

        horizontalLayout_3->addWidget(startAngleSourceLabel);

        startAngleSourceSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_3);
        startAngleSourceSpinBox->setObjectName(QString::fromUtf8("startAngleSourceSpinBox"));
        startAngleSourceSpinBox->setMaximumSize(QSize(80, 16777215));
        startAngleSourceSpinBox->setMaximum(360.000000000000000);
        startAngleSourceSpinBox->setValue(5.000000000000000);

        horizontalLayout_3->addWidget(startAngleSourceSpinBox);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 130, 311, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        distanceSourceLabel = new QLabel(horizontalLayoutWidget_4);
        distanceSourceLabel->setObjectName(QString::fromUtf8("distanceSourceLabel"));

        horizontalLayout_4->addWidget(distanceSourceLabel);

        dustanceSourceSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_4);
        dustanceSourceSpinBox->setObjectName(QString::fromUtf8("dustanceSourceSpinBox"));
        dustanceSourceSpinBox->setMaximumSize(QSize(80, 16777215));
        dustanceSourceSpinBox->setMaximum(5000.000000000000000);
        dustanceSourceSpinBox->setValue(2.500000000000000);

        horizontalLayout_4->addWidget(dustanceSourceSpinBox);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 170, 311, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        speedRotationSourceLabel = new QLabel(horizontalLayoutWidget_5);
        speedRotationSourceLabel->setObjectName(QString::fromUtf8("speedRotationSourceLabel"));

        horizontalLayout_5->addWidget(speedRotationSourceLabel);

        speedRotationSourceSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_5);
        speedRotationSourceSpinBox->setObjectName(QString::fromUtf8("speedRotationSourceSpinBox"));
        speedRotationSourceSpinBox->setMaximumSize(QSize(80, 16777215));
        speedRotationSourceSpinBox->setMinimum(1.000000000000000);
        speedRotationSourceSpinBox->setMaximum(1000.000000000000000);
        speedRotationSourceSpinBox->setValue(180.000000000000000);

        horizontalLayout_5->addWidget(speedRotationSourceSpinBox);

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 210, 311, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        soundTimeDurationLabel = new QLabel(horizontalLayoutWidget_6);
        soundTimeDurationLabel->setObjectName(QString::fromUtf8("soundTimeDurationLabel"));

        horizontalLayout_6->addWidget(soundTimeDurationLabel);

        soundTimeDurationSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_6);
        soundTimeDurationSpinBox->setObjectName(QString::fromUtf8("soundTimeDurationSpinBox"));
        soundTimeDurationSpinBox->setMaximumSize(QSize(80, 16777215));
        soundTimeDurationSpinBox->setMinimum(0.100000000000000);
        soundTimeDurationSpinBox->setMaximum(300.000000000000000);
        soundTimeDurationSpinBox->setValue(2.000000000000000);

        horizontalLayout_6->addWidget(soundTimeDurationSpinBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 330, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\262\321\203\320\272\320\276\320\262\320\276\320\271 \321\201\321\202\320\265\321\200\320\265\320\276\321\201\320\270\320\263\320\275\320\260\320\273", nullptr));
        speedSoundLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260, \320\274/\321\201:", nullptr));
        distanceEarsLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\274\320\265\320\266\320\264\321\203 \321\203\321\210\320\260\320\274\320\270, \321\201\320\274:", nullptr));
        createSoundButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\204\320\276\321\200\320\274\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        listenSoundButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\273\321\203\321\210\320\260\321\202\321\214", nullptr));
        startAngleSourceLabel->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 \321\203\320\263\320\276\320\273, \302\260:", nullptr));
        distanceSourceLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\276 \320\270\321\201\321\202\320\276\321\207\320\275\320\270\320\272\320\260, \320\274:", nullptr));
        dustanceSourceSpinBox->setPrefix(QString());
        dustanceSourceSpinBox->setSuffix(QString());
        speedRotationSourceLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260, \302\260/\321\201:", nullptr));
        speedRotationSourceSpinBox->setPrefix(QString());
        speedRotationSourceSpinBox->setSuffix(QString());
        soundTimeDurationLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260, \321\201:", nullptr));
        soundTimeDurationSpinBox->setPrefix(QString());
        soundTimeDurationSpinBox->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
