/********************************************************************************
** Form generated from reading UI file 'denglu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGLU_H
#define UI_DENGLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_denglu
{
public:
    QHBoxLayout *horizontalLayout_2;
    QToolBox *toolBox;
    QWidget *page_5;
    QVBoxLayout *valyout;

    void setupUi(QWidget *denglu)
    {
        if (denglu->objectName().isEmpty())
            denglu->setObjectName("denglu");
        denglu->resize(391, 700);
        horizontalLayout_2 = new QHBoxLayout(denglu);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(denglu);
        toolBox->setObjectName("toolBox");
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        page_5->setGeometry(QRect(0, 0, 391, 671));
        valyout = new QVBoxLayout(page_5);
        valyout->setObjectName("valyout");
        valyout->setContentsMargins(0, 0, 0, 0);
        toolBox->addItem(page_5, QString::fromUtf8("\347\276\244\346\210\220\345\221\230"));

        horizontalLayout_2->addWidget(toolBox);


        retranslateUi(denglu);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(denglu);
    } // setupUi

    void retranslateUi(QWidget *denglu)
    {
        denglu->setWindowTitle(QCoreApplication::translate("denglu", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("denglu", "\347\276\244\346\210\220\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class denglu: public Ui_denglu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGLU_H
