/********************************************************************************
** Form generated from reading UI file 'HOME.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HOME
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *time;
    QLabel *date;
    QLabel *image_connixon;
    QLabel *text_connixson;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *humidit;
    QLCDNumber *lcd_hum;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *temperature;
    QLCDNumber *lcd_temp;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_plus_clim;
    QPushButton *button_mois_clim;
    QLabel *label_4;
    QLabel *image_led;
    QLCDNumber *lcd_fan;
    QPushButton *button_on_led;
    QPushButton *button_off_led;
    QPushButton *button_sortie;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HOME)
    {
        if (HOME->objectName().isEmpty())
            HOME->setObjectName("HOME");
        HOME->resize(738, 480);
        HOME->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(HOME);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 10, 121, 51));
        label->setStyleSheet(QString::fromUtf8("font: 700 italic 18pt \"Segoe UI\";"));
        time = new QLabel(centralwidget);
        time->setObjectName("time");
        time->setGeometry(QRect(530, 20, 171, 20));
        time->setStyleSheet(QString::fromUtf8("border-radius : 20px;\n"
"font: 700 11pt \"Segoe UI\";"));
        date = new QLabel(centralwidget);
        date->setObjectName("date");
        date->setGeometry(QRect(530, 70, 191, 20));
        date->setStyleSheet(QString::fromUtf8("border-radius : 20px;\n"
"font: 700 11pt \"Segoe UI\";"));
        image_connixon = new QLabel(centralwidget);
        image_connixon->setObjectName("image_connixon");
        image_connixon->setGeometry(QRect(30, 360, 71, 61));
        text_connixson = new QLabel(centralwidget);
        text_connixson->setObjectName("text_connixson");
        text_connixson->setGeometry(QRect(150, 380, 191, 31));
        text_connixson->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 140, 171, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        humidit = new QLabel(horizontalLayoutWidget);
        humidit->setObjectName("humidit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        humidit->setFont(font);
        humidit->setStyleSheet(QString::fromUtf8("\n"
"font: 700 italic 11pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(humidit);

        lcd_hum = new QLCDNumber(horizontalLayoutWidget);
        lcd_hum->setObjectName("lcd_hum");

        horizontalLayout_2->addWidget(lcd_hum);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(150, 250, 181, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        temperature = new QLabel(horizontalLayoutWidget_2);
        temperature->setObjectName("temperature");
        temperature->setFont(font);
        temperature->setStyleSheet(QString::fromUtf8("\n"
"font: 700 italic 11pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(temperature);

        lcd_temp = new QLCDNumber(horizontalLayoutWidget_2);
        lcd_temp->setObjectName("lcd_temp");

        horizontalLayout_3->addWidget(lcd_temp);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 230, 121, 71));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/logo_temp.jpg);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 130, 91, 51));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/photo/hum.png);"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(480, 130, 41, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_plus_clim = new QPushButton(verticalLayoutWidget);
        button_plus_clim->setObjectName("button_plus_clim");
        button_plus_clim->setStyleSheet(QString::fromUtf8("border-radius : 8px;\n"
"font: 700 15pt \"Segoe UI\";\n"
"background-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(button_plus_clim);

        button_mois_clim = new QPushButton(verticalLayoutWidget);
        button_mois_clim->setObjectName("button_mois_clim");
        button_mois_clim->setStyleSheet(QString::fromUtf8("border-radius : 8px;\n"
"font: 700 15pt \"Segoe UI\";\n"
"background-color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(button_mois_clim);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 130, 81, 71));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/photo/logo_clim.png);"));
        image_led = new QLabel(centralwidget);
        image_led->setObjectName("image_led");
        image_led->setGeometry(QRect(360, 240, 101, 81));
        image_led->setStyleSheet(QString::fromUtf8(""));
        lcd_fan = new QLCDNumber(centralwidget);
        lcd_fan->setObjectName("lcd_fan");
        lcd_fan->setGeometry(QRect(550, 150, 91, 41));
        button_on_led = new QPushButton(centralwidget);
        button_on_led->setObjectName("button_on_led");
        button_on_led->setGeometry(QRect(480, 260, 61, 31));
        button_on_led->setStyleSheet(QString::fromUtf8("border-radius : 2px;\n"
"font: 700 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 255, 0);"));
        button_off_led = new QPushButton(centralwidget);
        button_off_led->setObjectName("button_off_led");
        button_off_led->setGeometry(QRect(570, 260, 61, 31));
        button_off_led->setStyleSheet(QString::fromUtf8("border-radius : 2px;\n"
"font: 700 13pt \"Segoe UI\";\n"
"background-color: rgb(255, 0, 0);"));
        button_sortie = new QPushButton(centralwidget);
        button_sortie->setObjectName("button_sortie");
        button_sortie->setGeometry(QRect(620, 380, 81, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        button_sortie->setFont(font1);
        button_sortie->setStyleSheet(QString::fromUtf8("   border-radius:8px;\n"
"background-color:rgb(170, 170, 255);"));
        HOME->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HOME);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 738, 22));
        HOME->setMenuBar(menubar);
        statusbar = new QStatusBar(HOME);
        statusbar->setObjectName("statusbar");
        HOME->setStatusBar(statusbar);

        retranslateUi(HOME);

        QMetaObject::connectSlotsByName(HOME);
    } // setupUi

    void retranslateUi(QMainWindow *HOME)
    {
        HOME->setWindowTitle(QCoreApplication::translate("HOME", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("HOME", "WELCOME", nullptr));
        time->setText(QString());
        date->setText(QString());
        image_connixon->setText(QString());
        text_connixson->setText(QString());
        humidit->setText(QCoreApplication::translate("HOME", "Humidit\303\251", nullptr));
        temperature->setText(QCoreApplication::translate("HOME", "Temperature", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        button_plus_clim->setText(QCoreApplication::translate("HOME", "+", nullptr));
        button_mois_clim->setText(QCoreApplication::translate("HOME", "-", nullptr));
        label_4->setText(QString());
        image_led->setText(QString());
        button_on_led->setText(QCoreApplication::translate("HOME", "ON", nullptr));
        button_off_led->setText(QCoreApplication::translate("HOME", "OFF", nullptr));
        button_sortie->setText(QCoreApplication::translate("HOME", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HOME: public Ui_HOME {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
