/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QFontComboBox *set_font;
    QComboBox *font_size;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colourTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *msgTextEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendBtn;
    QSpacerItem *horizontalSpacer_4;
    QLabel *username;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitBtn;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(782, 672);
        horizontalLayout_7 = new QHBoxLayout(Widget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        widget_7 = new QWidget(Widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_7);
        widget_6->setObjectName("widget_6");
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget_6);
        widget_2->setObjectName("widget_2");
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout_2->addWidget(textBrowser);


        verticalLayout->addWidget(widget);

        frame_2 = new QFrame(widget_2);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        set_font = new QFontComboBox(frame_2);
        set_font->setObjectName("set_font");
        set_font->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(set_font);

        font_size = new QComboBox(frame_2);
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->addItem(QString());
        font_size->setObjectName("font_size");
        font_size->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(font_size);

        boldTBtn = new QToolButton(frame_2);
        boldTBtn->setObjectName("boldTBtn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        boldTBtn->setIcon(icon);

        horizontalLayout->addWidget(boldTBtn);

        italicTBtn = new QToolButton(frame_2);
        italicTBtn->setObjectName("italicTBtn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        italicTBtn->setIcon(icon1);
        italicTBtn->setCheckable(true);

        horizontalLayout->addWidget(italicTBtn);

        underlineTBtn = new QToolButton(frame_2);
        underlineTBtn->setObjectName("underlineTBtn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/under.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        underlineTBtn->setIcon(icon2);
        underlineTBtn->setCheckable(true);

        horizontalLayout->addWidget(underlineTBtn);

        colourTBtn = new QToolButton(frame_2);
        colourTBtn->setObjectName("colourTBtn");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/color.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        colourTBtn->setIcon(icon3);

        horizontalLayout->addWidget(colourTBtn);

        saveTBtn = new QToolButton(frame_2);
        saveTBtn->setObjectName("saveTBtn");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        saveTBtn->setIcon(icon4);

        horizontalLayout->addWidget(saveTBtn);

        clearTBtn = new QToolButton(frame_2);
        clearTBtn->setObjectName("clearTBtn");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearTBtn->setIcon(icon5);

        horizontalLayout->addWidget(clearTBtn);


        verticalLayout->addWidget(frame_2);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        msgTextEdit = new QTextEdit(widget_4);
        msgTextEdit->setObjectName("msgTextEdit");
        msgTextEdit->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_3->addWidget(msgTextEdit);


        verticalLayout->addWidget(widget_4);


        verticalLayout_3->addWidget(widget_2);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        sendBtn = new QPushButton(widget_5);
        sendBtn->setObjectName("sendBtn");

        horizontalLayout_4->addWidget(sendBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        username = new QLabel(widget_5);
        username->setObjectName("username");

        horizontalLayout_4->addWidget(username);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        exitBtn = new QPushButton(widget_5);
        exitBtn->setObjectName("exitBtn");

        horizontalLayout_4->addWidget(exitBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(widget_5);


        horizontalLayout_6->addWidget(widget_6);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName("widget_3");
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(widget_3);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_5->addWidget(tableWidget);


        horizontalLayout_6->addWidget(widget_3);


        horizontalLayout_7->addWidget(widget_7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        set_font->setCurrentText(QCoreApplication::translate("Widget", "\345\256\213\344\275\223", nullptr));
        font_size->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        font_size->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        font_size->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        font_size->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));
        font_size->setItemText(4, QCoreApplication::translate("Widget", "9", nullptr));
        font_size->setItemText(5, QCoreApplication::translate("Widget", "10", nullptr));
        font_size->setItemText(6, QCoreApplication::translate("Widget", "11", nullptr));
        font_size->setItemText(7, QCoreApplication::translate("Widget", "12", nullptr));
        font_size->setItemText(8, QString());

#if QT_CONFIG(tooltip)
        boldTBtn->setToolTip(QCoreApplication::translate("Widget", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        boldTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        italicTBtn->setToolTip(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        italicTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        underlineTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        colourTBtn->setToolTip(QCoreApplication::translate("Widget", "\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        colourTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        saveTBtn->setToolTip(QCoreApplication::translate("Widget", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        saveTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
#if QT_CONFIG(tooltip)
        clearTBtn->setToolTip(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        clearTBtn->setText(QCoreApplication::translate("Widget", "...", nullptr));
        sendBtn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        username->setText(QCoreApplication::translate("Widget", "\345\234\250\347\272\277\344\272\272\346\225\260\357\274\2320\344\272\272", nullptr));
        exitBtn->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
