/********************************************************************************
** Form generated from reading UI file 'apwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APWIDGET_H
#define UI_APWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_APWidget
{
public:
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_17;
    QComboBox *checkAdcCB_2;
    QComboBox *checkAdcCB_1;
    QLabel *label_16;
    QLabel *label_19;
    QComboBox *checkDacCB_1;
    QLabel *label_18;
    QComboBox *checkDacCB_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *readFlashBT;
    QPushButton *writeFlashBT;
    QPushButton *resetFlashBT;
    QPushButton *cleanFlashBT;
    QGroupBox *groupBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QPushButton *readRangeBT;
    QPushButton *setInputBT;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *realRangeLE_2;
    QLabel *label_3;
    QGroupBox *groupBox_5;
    QRadioButton *acRB_2;
    QRadioButton *dcRB_2;
    QComboBox *inputRangeCB_1;
    QGroupBox *groupBox_4;
    QRadioButton *acRB_1;
    QRadioButton *dcRB_1;
    QLabel *label_7;
    QComboBox *inputRangeCB_2;
    QLabel *label_5;
    QComboBox *inputTypeCB_2;
    QLineEdit *realRangeLE_1;
    QLabel *label_4;
    QLabel *label_6;
    QComboBox *inputTypeCB_1;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *outputTypeCB_1;
    QLabel *label_15;
    QComboBox *outputTypeCB_2;
    QComboBox *outputRangeCB_1;
    QLabel *label_14;
    QComboBox *outputRangeCB_2;
    QPushButton *setOutputBT;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout;
    QPushButton *linkBT;
    QComboBox *devSecCB;
    QLineEdit *devIDLE;
    QPushButton *exitBT;

    void setupUi(QWidget *APWidget)
    {
        if (APWidget->objectName().isEmpty())
            APWidget->setObjectName("APWidget");
        APWidget->resize(690, 665);
        APWidget->setMinimumSize(QSize(690, 665));
        APWidget->setMaximumSize(QSize(690, 665));
        groupBox_3 = new QGroupBox(APWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(11, 462, 661, 191));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 501, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(label_17, 0, 0, 1, 1);

        checkAdcCB_2 = new QComboBox(layoutWidget);
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->addItem(QString());
        checkAdcCB_2->setObjectName("checkAdcCB_2");
        checkAdcCB_2->setMinimumSize(QSize(150, 30));

        gridLayout->addWidget(checkAdcCB_2, 2, 2, 1, 1);

        checkAdcCB_1 = new QComboBox(layoutWidget);
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->addItem(QString());
        checkAdcCB_1->setObjectName("checkAdcCB_1");
        checkAdcCB_1->setMinimumSize(QSize(150, 30));

        gridLayout->addWidget(checkAdcCB_1, 2, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(0, 30));
        label_16->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(label_16, 1, 1, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(label_19, 0, 2, 1, 1);

        checkDacCB_1 = new QComboBox(layoutWidget);
        checkDacCB_1->addItem(QString());
        checkDacCB_1->addItem(QString());
        checkDacCB_1->setObjectName("checkDacCB_1");
        checkDacCB_1->setMinimumSize(QSize(150, 30));

        gridLayout->addWidget(checkDacCB_1, 1, 0, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(0, 30));
        label_18->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(label_18, 2, 1, 1, 1);

        checkDacCB_2 = new QComboBox(layoutWidget);
        checkDacCB_2->addItem(QString());
        checkDacCB_2->addItem(QString());
        checkDacCB_2->setObjectName("checkDacCB_2");
        checkDacCB_2->setMinimumSize(QSize(150, 30));

        gridLayout->addWidget(checkDacCB_2, 1, 2, 1, 1);

        layoutWidget1 = new QWidget(groupBox_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(540, 30, 102, 140));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        readFlashBT = new QPushButton(layoutWidget1);
        readFlashBT->setObjectName("readFlashBT");
        readFlashBT->setMinimumSize(QSize(100, 30));

        verticalLayout_3->addWidget(readFlashBT);

        writeFlashBT = new QPushButton(layoutWidget1);
        writeFlashBT->setObjectName("writeFlashBT");
        writeFlashBT->setMinimumSize(QSize(100, 30));

        verticalLayout_3->addWidget(writeFlashBT);

        resetFlashBT = new QPushButton(layoutWidget1);
        resetFlashBT->setObjectName("resetFlashBT");
        resetFlashBT->setMinimumSize(QSize(100, 30));

        verticalLayout_3->addWidget(resetFlashBT);

        cleanFlashBT = new QPushButton(layoutWidget1);
        cleanFlashBT->setObjectName("cleanFlashBT");
        cleanFlashBT->setMinimumSize(QSize(100, 30));

        verticalLayout_3->addWidget(cleanFlashBT);

        groupBox = new QGroupBox(APWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(11, 58, 661, 240));
        groupBox->setMinimumSize(QSize(0, 240));
        groupBox->setMaximumSize(QSize(16777215, 220));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(540, 130, 102, 69));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        readRangeBT = new QPushButton(layoutWidget2);
        readRangeBT->setObjectName("readRangeBT");
        readRangeBT->setMinimumSize(QSize(100, 30));

        verticalLayout->addWidget(readRangeBT);

        setInputBT = new QPushButton(layoutWidget2);
        setInputBT->setObjectName("setInputBT");
        setInputBT->setMinimumSize(QSize(100, 30));

        verticalLayout->addWidget(setInputBT);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 34, 501, 167));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        realRangeLE_2 = new QLineEdit(layoutWidget3);
        realRangeLE_2->setObjectName("realRangeLE_2");
        realRangeLE_2->setMinimumSize(QSize(100, 30));
        realRangeLE_2->setMaximumSize(QSize(80, 16777215));
        realRangeLE_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 255, 0);\n"
"background-color: rgb(100, 100, 100);"));
        realRangeLE_2->setAlignment(Qt::AlignCenter);
        realRangeLE_2->setReadOnly(true);

        gridLayout_2->addWidget(realRangeLE_2, 2, 2, 1, 1);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(layoutWidget3);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(100, 30));
        groupBox_5->setMaximumSize(QSize(100, 30));
        acRB_2 = new QRadioButton(groupBox_5);
        acRB_2->setObjectName("acRB_2");
        acRB_2->setGeometry(QRect(10, 10, 35, 16));
        acRB_2->setChecked(true);
        dcRB_2 = new QRadioButton(groupBox_5);
        dcRB_2->setObjectName("dcRB_2");
        dcRB_2->setGeometry(QRect(50, 10, 35, 16));

        gridLayout_2->addWidget(groupBox_5, 4, 2, 1, 1);

        inputRangeCB_1 = new QComboBox(layoutWidget3);
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->addItem(QString());
        inputRangeCB_1->setObjectName("inputRangeCB_1");
        inputRangeCB_1->setMinimumSize(QSize(0, 30));
        inputRangeCB_1->setMaximumSize(QSize(100, 30));
        inputRangeCB_1->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        inputRangeCB_1->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(inputRangeCB_1, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(layoutWidget3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMinimumSize(QSize(100, 30));
        groupBox_4->setMaximumSize(QSize(100, 30));
        acRB_1 = new QRadioButton(groupBox_4);
        acRB_1->setObjectName("acRB_1");
        acRB_1->setGeometry(QRect(10, 10, 35, 16));
        acRB_1->setChecked(true);
        dcRB_1 = new QRadioButton(groupBox_4);
        dcRB_1->setObjectName("dcRB_1");
        dcRB_1->setGeometry(QRect(50, 10, 35, 16));

        gridLayout_2->addWidget(groupBox_4, 4, 0, 1, 1);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_7, 4, 1, 1, 1);

        inputRangeCB_2 = new QComboBox(layoutWidget3);
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->addItem(QString());
        inputRangeCB_2->setObjectName("inputRangeCB_2");
        inputRangeCB_2->setMinimumSize(QSize(0, 30));
        inputRangeCB_2->setMaximumSize(QSize(100, 16777215));
        inputRangeCB_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        inputRangeCB_2->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout_2->addWidget(inputRangeCB_2, 3, 2, 1, 1);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_5, 2, 1, 1, 1);

        inputTypeCB_2 = new QComboBox(layoutWidget3);
        inputTypeCB_2->addItem(QString());
        inputTypeCB_2->addItem(QString());
        inputTypeCB_2->addItem(QString());
        inputTypeCB_2->setObjectName("inputTypeCB_2");
        inputTypeCB_2->setMinimumSize(QSize(0, 30));
        inputTypeCB_2->setMaximumSize(QSize(100, 30));
        inputTypeCB_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(inputTypeCB_2, 1, 2, 1, 1);

        realRangeLE_1 = new QLineEdit(layoutWidget3);
        realRangeLE_1->setObjectName("realRangeLE_1");
        realRangeLE_1->setMinimumSize(QSize(80, 30));
        realRangeLE_1->setMaximumSize(QSize(100, 30));
        realRangeLE_1->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 255, 0);\n"
"background-color: rgb(100, 100, 100);"));
        realRangeLE_1->setAlignment(Qt::AlignCenter);
        realRangeLE_1->setReadOnly(true);

        gridLayout_2->addWidget(realRangeLE_1, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_4, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(label_6, 3, 1, 1, 1);

        inputTypeCB_1 = new QComboBox(layoutWidget3);
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->addItem(QString());
        inputTypeCB_1->setObjectName("inputTypeCB_1");
        inputTypeCB_1->setMinimumSize(QSize(0, 30));
        inputTypeCB_1->setMaximumSize(QSize(100, 30));
        inputTypeCB_1->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout_2->addWidget(inputTypeCB_1, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(APWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(11, 295, 661, 160));
        groupBox_2->setMinimumSize(QSize(0, 160));
        layoutWidget4 = new QWidget(groupBox_2);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(11, 31, 501, 95));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        label_13 = new QLabel(layoutWidget4);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(label_13, 0, 2, 1, 1);

        outputTypeCB_1 = new QComboBox(layoutWidget4);
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->addItem(QString());
        outputTypeCB_1->setObjectName("outputTypeCB_1");
        outputTypeCB_1->setMinimumSize(QSize(0, 30));
        outputTypeCB_1->setMaximumSize(QSize(100, 16777215));
        outputTypeCB_1->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(outputTypeCB_1, 1, 0, 1, 1);

        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(label_15, 1, 1, 1, 1);

        outputTypeCB_2 = new QComboBox(layoutWidget4);
        outputTypeCB_2->addItem(QString());
        outputTypeCB_2->addItem(QString());
        outputTypeCB_2->addItem(QString());
        outputTypeCB_2->setObjectName("outputTypeCB_2");
        outputTypeCB_2->setMinimumSize(QSize(0, 30));
        outputTypeCB_2->setMaximumSize(QSize(100, 16777215));
        outputTypeCB_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(outputTypeCB_2, 1, 2, 1, 1);

        outputRangeCB_1 = new QComboBox(layoutWidget4);
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->addItem(QString());
        outputRangeCB_1->setObjectName("outputRangeCB_1");
        outputRangeCB_1->setEnabled(false);
        outputRangeCB_1->setMinimumSize(QSize(0, 30));
        outputRangeCB_1->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));
        outputRangeCB_1->setEditable(false);

        gridLayout_3->addWidget(outputRangeCB_1, 2, 0, 1, 1);

        label_14 = new QLabel(layoutWidget4);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(label_14, 2, 1, 1, 1);

        outputRangeCB_2 = new QComboBox(layoutWidget4);
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->addItem(QString());
        outputRangeCB_2->setObjectName("outputRangeCB_2");
        outputRangeCB_2->setEnabled(false);
        outputRangeCB_2->setMinimumSize(QSize(0, 30));
        outputRangeCB_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout_3->addWidget(outputRangeCB_2, 2, 2, 1, 1);

        setOutputBT = new QPushButton(groupBox_2);
        setOutputBT->setObjectName("setOutputBT");
        setOutputBT->setGeometry(QRect(540, 100, 100, 30));
        setOutputBT->setMinimumSize(QSize(100, 30));
        layoutWidget5 = new QWidget(APWidget);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(18, 11, 651, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        linkBT = new QPushButton(layoutWidget5);
        linkBT->setObjectName("linkBT");
        linkBT->setMinimumSize(QSize(90, 30));
        linkBT->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 0, 0);"));
        linkBT->setCheckable(true);

        horizontalLayout->addWidget(linkBT);

        devSecCB = new QComboBox(layoutWidget5);
        devSecCB->addItem(QString());
        devSecCB->addItem(QString());
        devSecCB->setObjectName("devSecCB");
        devSecCB->setMinimumSize(QSize(60, 30));
        devSecCB->setStyleSheet(QString::fromUtf8("font: 10pt \"Microsoft YaHei UI\";\n"
""));

        horizontalLayout->addWidget(devSecCB);

        devIDLE = new QLineEdit(layoutWidget5);
        devIDLE->setObjectName("devIDLE");
        devIDLE->setMinimumSize(QSize(250, 30));
        devIDLE->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(79, 79, 79);"));
        devIDLE->setReadOnly(true);

        horizontalLayout->addWidget(devIDLE);

        exitBT = new QPushButton(layoutWidget5);
        exitBT->setObjectName("exitBT");
        exitBT->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(exitBT);


        retranslateUi(APWidget);

        devSecCB->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(APWidget);
    } // setupUi

    void retranslateUi(QWidget *APWidget)
    {
        APWidget->setWindowTitle(QCoreApplication::translate("APWidget", "APControl", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("APWidget", "\346\240\241\345\207\206\350\256\276\347\275\256", nullptr));
        label_17->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\270\200</p></body></html>", nullptr));
        checkAdcCB_2->setItemText(0, QCoreApplication::translate("APWidget", "\346\227\240\345\242\236\347\233\212", nullptr));
        checkAdcCB_2->setItemText(1, QCoreApplication::translate("APWidget", "\345\242\236\347\233\212\357\274\23210039\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256512", nullptr));
        checkAdcCB_2->setItemText(2, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2320\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2320", nullptr));
        checkAdcCB_2->setItemText(3, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2321\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2321", nullptr));
        checkAdcCB_2->setItemText(4, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2322\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2322", nullptr));
        checkAdcCB_2->setItemText(5, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2324\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2324", nullptr));
        checkAdcCB_2->setItemText(6, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2328\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2328", nullptr));
        checkAdcCB_2->setItemText(7, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232255\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232255", nullptr));
        checkAdcCB_2->setItemText(8, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232254\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232254", nullptr));
        checkAdcCB_2->setItemText(9, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232252\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232252", nullptr));
        checkAdcCB_2->setItemText(10, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232240\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232240", nullptr));

        checkAdcCB_1->setItemText(0, QCoreApplication::translate("APWidget", "\346\227\240\346\240\241\345\207\206", nullptr));
        checkAdcCB_1->setItemText(1, QCoreApplication::translate("APWidget", "\345\242\236\347\233\212\357\274\23210039\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256512", nullptr));
        checkAdcCB_1->setItemText(2, QCoreApplication::translate("APWidget", "THD\357\274\233\345\242\236\347\233\212\357\274\2320\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2320", nullptr));
        checkAdcCB_1->setItemText(3, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2321\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2321", nullptr));
        checkAdcCB_1->setItemText(4, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2322\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2322", nullptr));
        checkAdcCB_1->setItemText(5, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2324\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2324", nullptr));
        checkAdcCB_1->setItemText(6, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\2328\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2328", nullptr));
        checkAdcCB_1->setItemText(7, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232255\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232255", nullptr));
        checkAdcCB_1->setItemText(8, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232254\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232254", nullptr));
        checkAdcCB_1->setItemText(9, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232252\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232252", nullptr));
        checkAdcCB_1->setItemText(10, QCoreApplication::translate("APWidget", "THD\346\240\241\345\207\206\357\274\233\345\242\236\347\233\212\357\274\232240\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\232240", nullptr));

        label_16->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">ADC</p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\272\214</p></body></html>", nullptr));
        checkDacCB_1->setItemText(0, QCoreApplication::translate("APWidget", "\346\227\240\346\240\241\345\207\206", nullptr));
        checkDacCB_1->setItemText(1, QCoreApplication::translate("APWidget", "\345\242\236\347\233\212\357\274\2323000\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2320", nullptr));

        label_18->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">DAC</p></body></html>", nullptr));
        checkDacCB_2->setItemText(0, QCoreApplication::translate("APWidget", "\346\227\240\346\240\241\345\207\206", nullptr));
        checkDacCB_2->setItemText(1, QCoreApplication::translate("APWidget", "\345\242\236\347\233\212\357\274\2322000\357\274\233\347\233\264\346\265\201\345\201\217\347\275\256\357\274\2320", nullptr));

        readFlashBT->setText(QCoreApplication::translate("APWidget", "\350\257\273\345\217\226", nullptr));
        writeFlashBT->setText(QCoreApplication::translate("APWidget", "\345\206\231\345\205\245", nullptr));
        resetFlashBT->setText(QCoreApplication::translate("APWidget", "\345\244\215\344\275\215", nullptr));
        cleanFlashBT->setText(QCoreApplication::translate("APWidget", "\346\223\246\351\231\244", nullptr));
        groupBox->setTitle(QCoreApplication::translate("APWidget", "\350\276\223\345\205\245ADC\350\256\276\347\275\256", nullptr));
        readRangeBT->setText(QCoreApplication::translate("APWidget", "\350\257\273\345\217\226\351\207\217\347\250\213", nullptr));
        setInputBT->setText(QCoreApplication::translate("APWidget", "\346\233\264\346\224\271\351\205\215\347\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\272\214</p></body></html>", nullptr));
        realRangeLE_2->setText(QCoreApplication::translate("APWidget", "0  V  ", nullptr));
        label_3->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\270\200</p></body></html>", nullptr));
        groupBox_5->setTitle(QString());
        acRB_2->setText(QCoreApplication::translate("APWidget", "AC", nullptr));
        dcRB_2->setText(QCoreApplication::translate("APWidget", "DC", nullptr));
        inputRangeCB_1->setItemText(0, QCoreApplication::translate("APWidget", "AUTO", nullptr));
        inputRangeCB_1->setItemText(1, QCoreApplication::translate("APWidget", "89.6  V", nullptr));
        inputRangeCB_1->setItemText(2, QCoreApplication::translate("APWidget", "44.8  V", nullptr));
        inputRangeCB_1->setItemText(3, QCoreApplication::translate("APWidget", "22.4  V", nullptr));
        inputRangeCB_1->setItemText(4, QCoreApplication::translate("APWidget", "11.2  V", nullptr));
        inputRangeCB_1->setItemText(5, QCoreApplication::translate("APWidget", "5.6    V", nullptr));
        inputRangeCB_1->setItemText(6, QCoreApplication::translate("APWidget", "2.8    V", nullptr));
        inputRangeCB_1->setItemText(7, QCoreApplication::translate("APWidget", "1.4    V", nullptr));
        inputRangeCB_1->setItemText(8, QCoreApplication::translate("APWidget", "0.7    V", nullptr));
        inputRangeCB_1->setItemText(9, QCoreApplication::translate("APWidget", "0.35  V", nullptr));

        groupBox_4->setTitle(QString());
        acRB_1->setText(QCoreApplication::translate("APWidget", "AC", nullptr));
        dcRB_1->setText(QCoreApplication::translate("APWidget", "DC", nullptr));
        label_7->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \350\200\246\345\220\210\350\256\276\347\275\256 --</p></body></html>", nullptr));
        inputRangeCB_2->setItemText(0, QCoreApplication::translate("APWidget", "AUTO", nullptr));
        inputRangeCB_2->setItemText(1, QCoreApplication::translate("APWidget", "89.6  V", nullptr));
        inputRangeCB_2->setItemText(2, QCoreApplication::translate("APWidget", "44.8  V", nullptr));
        inputRangeCB_2->setItemText(3, QCoreApplication::translate("APWidget", "22.4  V", nullptr));
        inputRangeCB_2->setItemText(4, QCoreApplication::translate("APWidget", "11.2  V", nullptr));
        inputRangeCB_2->setItemText(5, QCoreApplication::translate("APWidget", "5.6    V", nullptr));
        inputRangeCB_2->setItemText(6, QCoreApplication::translate("APWidget", "2.8    V", nullptr));
        inputRangeCB_2->setItemText(7, QCoreApplication::translate("APWidget", "1.4    V", nullptr));
        inputRangeCB_2->setItemText(8, QCoreApplication::translate("APWidget", "0.7    V", nullptr));
        inputRangeCB_2->setItemText(9, QCoreApplication::translate("APWidget", "0.35  V", nullptr));

        label_5->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \345\256\236\351\231\205\351\207\217\347\250\213 --</p></body></html>", nullptr));
        inputTypeCB_2->setItemText(0, QCoreApplication::translate("APWidget", "bnc no iepe", nullptr));
        inputTypeCB_2->setItemText(1, QCoreApplication::translate("APWidget", "bnc iepe", nullptr));
        inputTypeCB_2->setItemText(2, QCoreApplication::translate("APWidget", "xlr", nullptr));

        realRangeLE_1->setText(QCoreApplication::translate("APWidget", "0  V  ", nullptr));
        label_4->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \346\216\245\345\217\243\347\261\273\345\236\213 --</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \351\207\217\347\250\213\350\256\276\347\275\256 --</p></body></html>", nullptr));
        inputTypeCB_1->setItemText(0, QCoreApplication::translate("APWidget", "bnc no iepe", nullptr));
        inputTypeCB_1->setItemText(1, QCoreApplication::translate("APWidget", "bnc iepe", nullptr));
        inputTypeCB_1->setItemText(2, QCoreApplication::translate("APWidget", "xlr", nullptr));
        inputTypeCB_1->setItemText(3, QCoreApplication::translate("APWidget", "digital-BNC", nullptr));
        inputTypeCB_1->setItemText(4, QCoreApplication::translate("APWidget", "digital-XLR", nullptr));
        inputTypeCB_1->setItemText(5, QCoreApplication::translate("APWidget", "OPT", nullptr));
        inputTypeCB_1->setItemText(6, QCoreApplication::translate("APWidget", "IIS", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("APWidget", "\350\276\223\345\207\272DAC\350\256\276\347\275\256", nullptr));
        label_12->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\270\200</p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">\351\200\232\351\201\223\344\272\214</p></body></html>", nullptr));
        outputTypeCB_1->setItemText(0, QCoreApplication::translate("APWidget", "No output", nullptr));
        outputTypeCB_1->setItemText(1, QCoreApplication::translate("APWidget", "ubal  (BNC)", nullptr));
        outputTypeCB_1->setItemText(2, QCoreApplication::translate("APWidget", "bal    (XLR)", nullptr));
        outputTypeCB_1->setItemText(3, QCoreApplication::translate("APWidget", "digital-BNC", nullptr));
        outputTypeCB_1->setItemText(4, QCoreApplication::translate("APWidget", "digital-XLR", nullptr));
        outputTypeCB_1->setItemText(5, QCoreApplication::translate("APWidget", "OPT", nullptr));
        outputTypeCB_1->setItemText(6, QCoreApplication::translate("APWidget", "IIS", nullptr));

        label_15->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \345\256\236\351\231\205\351\207\217\347\250\213 --</p></body></html>", nullptr));
        outputTypeCB_2->setItemText(0, QCoreApplication::translate("APWidget", "No output", nullptr));
        outputTypeCB_2->setItemText(1, QCoreApplication::translate("APWidget", "ubal  (BNC)", nullptr));
        outputTypeCB_2->setItemText(2, QCoreApplication::translate("APWidget", "bal    (XLR)", nullptr));

        outputRangeCB_1->setItemText(0, QCoreApplication::translate("APWidget", "AUTO", nullptr));
        outputRangeCB_1->setItemText(1, QCoreApplication::translate("APWidget", "0.16    V", nullptr));
        outputRangeCB_1->setItemText(2, QCoreApplication::translate("APWidget", "0.32    V", nullptr));
        outputRangeCB_1->setItemText(3, QCoreApplication::translate("APWidget", "0.64    V", nullptr));
        outputRangeCB_1->setItemText(4, QCoreApplication::translate("APWidget", "1.28    V", nullptr));
        outputRangeCB_1->setItemText(5, QCoreApplication::translate("APWidget", "2.56    V", nullptr));
        outputRangeCB_1->setItemText(6, QCoreApplication::translate("APWidget", "5.12    V", nullptr));
        outputRangeCB_1->setItemText(7, QCoreApplication::translate("APWidget", "10.24  V", nullptr));
        outputRangeCB_1->setItemText(8, QCoreApplication::translate("APWidget", "20.48  V", nullptr));

        label_14->setText(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\">-- \351\207\217\347\250\213\350\256\276\347\275\256 --</p></body></html>", nullptr));
        outputRangeCB_2->setItemText(0, QCoreApplication::translate("APWidget", "AUTO", nullptr));
        outputRangeCB_2->setItemText(1, QCoreApplication::translate("APWidget", "0.16    V", nullptr));
        outputRangeCB_2->setItemText(2, QCoreApplication::translate("APWidget", "0.32    V", nullptr));
        outputRangeCB_2->setItemText(3, QCoreApplication::translate("APWidget", "0.64    V", nullptr));
        outputRangeCB_2->setItemText(4, QCoreApplication::translate("APWidget", "1.28    V", nullptr));
        outputRangeCB_2->setItemText(5, QCoreApplication::translate("APWidget", "2.56    V", nullptr));
        outputRangeCB_2->setItemText(6, QCoreApplication::translate("APWidget", "5.12    V", nullptr));
        outputRangeCB_2->setItemText(7, QCoreApplication::translate("APWidget", "10.24  V", nullptr));
        outputRangeCB_2->setItemText(8, QCoreApplication::translate("APWidget", "20.48  V", nullptr));

        setOutputBT->setText(QCoreApplication::translate("APWidget", "\346\233\264\346\224\271\351\205\215\347\275\256", nullptr));
        linkBT->setText(QCoreApplication::translate("APWidget", "\350\277\236\346\216\245\345\205\263\351\227\255", nullptr));
        devSecCB->setItemText(0, QCoreApplication::translate("APWidget", "\345\243\260\345\215\2411", nullptr));
        devSecCB->setItemText(1, QCoreApplication::translate("APWidget", "\345\243\260\345\215\2412", nullptr));

#if QT_CONFIG(whatsthis)
        devSecCB->setWhatsThis(QCoreApplication::translate("APWidget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        devIDLE->setText(QCoreApplication::translate("APWidget", "\346\234\252\350\277\236\346\216\245", nullptr));
        exitBT->setText(QCoreApplication::translate("APWidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class APWidget: public Ui_APWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APWIDGET_H
