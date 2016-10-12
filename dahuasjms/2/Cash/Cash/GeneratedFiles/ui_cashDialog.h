/********************************************************************************
** Form generated from reading UI file 'cashDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHDIALOG_H
#define UI_CASHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashDialogClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *priceLabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *priceLineEdit;
    QPushButton *okPushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *numLineEdit;
    QPushButton *ResetPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *discountLabel;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *discountComboBox;
    QListWidget *goodsListWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *totalLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *totalDoubleLabel;

    void setupUi(QDialog *CashDialogClass)
    {
        if (CashDialogClass->objectName().isEmpty())
            CashDialogClass->setObjectName(QStringLiteral("CashDialogClass"));
        CashDialogClass->resize(378, 366);
        layoutWidget = new QWidget(CashDialogClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(31, 41, 306, 312));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        priceLabel = new QLabel(layoutWidget);
        priceLabel->setObjectName(QStringLiteral("priceLabel"));

        horizontalLayout->addWidget(priceLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        priceLineEdit = new QLineEdit(layoutWidget);
        priceLineEdit->setObjectName(QStringLiteral("priceLineEdit"));

        horizontalLayout->addWidget(priceLineEdit);

        okPushButton = new QPushButton(layoutWidget);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));

        horizontalLayout->addWidget(okPushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        numLabel = new QLabel(layoutWidget);
        numLabel->setObjectName(QStringLiteral("numLabel"));

        horizontalLayout_2->addWidget(numLabel);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        numLineEdit = new QLineEdit(layoutWidget);
        numLineEdit->setObjectName(QStringLiteral("numLineEdit"));

        horizontalLayout_2->addWidget(numLineEdit);

        ResetPushButton = new QPushButton(layoutWidget);
        ResetPushButton->setObjectName(QStringLiteral("ResetPushButton"));

        horizontalLayout_2->addWidget(ResetPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        discountLabel = new QLabel(layoutWidget);
        discountLabel->setObjectName(QStringLiteral("discountLabel"));

        horizontalLayout_3->addWidget(discountLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        discountComboBox = new QComboBox(layoutWidget);
        discountComboBox->setObjectName(QStringLiteral("discountComboBox"));

        horizontalLayout_3->addWidget(discountComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        goodsListWidget = new QListWidget(layoutWidget);
        goodsListWidget->setObjectName(QStringLiteral("goodsListWidget"));

        verticalLayout->addWidget(goodsListWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        totalLabel = new QLabel(layoutWidget);
        totalLabel->setObjectName(QStringLiteral("totalLabel"));

        horizontalLayout_4->addWidget(totalLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        totalDoubleLabel = new QLabel(layoutWidget);
        totalDoubleLabel->setObjectName(QStringLiteral("totalDoubleLabel"));

        horizontalLayout_4->addWidget(totalDoubleLabel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(CashDialogClass);

        okPushButton->setDefault(true);


        QMetaObject::connectSlotsByName(CashDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CashDialogClass)
    {
        CashDialogClass->setWindowTitle(QApplication::translate("CashDialogClass", "Cash", 0));
        priceLabel->setText(QApplication::translate("CashDialogClass", "Price:", 0));
        okPushButton->setText(QApplication::translate("CashDialogClass", "OK", 0));
        numLabel->setText(QApplication::translate("CashDialogClass", "Num:", 0));
        ResetPushButton->setText(QApplication::translate("CashDialogClass", "Reset", 0));
        discountLabel->setText(QApplication::translate("CashDialogClass", "Discount:", 0));
        discountComboBox->clear();
        discountComboBox->insertItems(0, QStringList()
         << QApplication::translate("CashDialogClass", "Normal", 0)
         << QApplication::translate("CashDialogClass", "80% Rebate", 0)
         << QApplication::translate("CashDialogClass", "300 - 100", 0)
        );
        totalLabel->setText(QApplication::translate("CashDialogClass", "Total:", 0));
        totalDoubleLabel->setText(QApplication::translate("CashDialogClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CashDialogClass: public Ui_CashDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHDIALOG_H
