/********************************************************************************
** Form generated from reading UI file 'LOGIN.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOGIN
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *text_username;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *text_password;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LOGIN)
    {
        if (LOGIN->objectName().isEmpty())
            LOGIN->setObjectName("LOGIN");
        LOGIN->resize(730, 490);
        LOGIN->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(LOGIN);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(350, 70, 321, 301));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background:none;"));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(70, 70, 201, 29));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        horizontalLayout->addWidget(label);

        text_username = new QLineEdit(horizontalLayoutWidget);
        text_username->setObjectName("text_username");

        horizontalLayout->addWidget(text_username);

        horizontalLayoutWidget_2 = new QWidget(groupBox);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(70, 130, 201, 29));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 11pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(label_2);

        text_password = new QLineEdit(horizontalLayoutWidget_2);
        text_password->setObjectName("text_password");
        text_password->setStyleSheet(QString::fromUtf8(""));
        text_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(text_password);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 200, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius : 10px;\n"
"font: 700 11pt \"Segoe UI\";\n"
"background-color:rgb(170, 170, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 100, 241, 231));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/logo_maison_intelligente.jpg);\n"
"background:none;"));
        LOGIN->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LOGIN);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 22));
        LOGIN->setMenuBar(menubar);
        statusbar = new QStatusBar(LOGIN);
        statusbar->setObjectName("statusbar");
        LOGIN->setStatusBar(statusbar);

        retranslateUi(LOGIN);

        QMetaObject::connectSlotsByName(LOGIN);
    } // setupUi

    void retranslateUi(QMainWindow *LOGIN)
    {
        LOGIN->setWindowTitle(QCoreApplication::translate("LOGIN", "LOGIN", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LOGIN", "SingIn", nullptr));
        label->setText(QCoreApplication::translate("LOGIN", "USER NAME", nullptr));
        label_2->setText(QCoreApplication::translate("LOGIN", "PASSWORD", nullptr));
        text_password->setText(QString());
        pushButton->setText(QCoreApplication::translate("LOGIN", "LOGIN", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LOGIN: public Ui_LOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
