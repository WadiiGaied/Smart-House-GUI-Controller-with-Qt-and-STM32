#include "HOME.h"
#include "ui_HOME.h"
#include <QDateTime>
#include <QTime>
#include <QDate>
#include <QTimer>
#include <string>
#include <QPixmap>
#include <QThread>
#include "LOGIN.h"

LOGIN *L;
HOME::HOME(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HOME)
{
    ui->setupUi(this);
    test_port();
    QTimer *timer = new QTimer(this);

    /*connect(timer, SIGNAL(timeout()), this, SLOT(test_port()));
     timer->start(500);*/
  //QObject::connect(S.getserial(), SIGNAL(readyRead()), this, SLOT(check_connection()));
    QObject::connect(S.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));





    connect(timer, SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start();
    QDateTime date=QDateTime::currentDateTime();
    QString datetimetext=date.toString("dddd dd MMMM yyyy ");
    ui->date->setText(datetimetext);
}

HOME::~HOME()
{
    delete ui;
}
void HOME::test_port()
{    ret = S.connect_carte();
    qDebug() << "ret = " << ret ;
    if (ret == 0 ) {
        QPixmap image("C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_connect.png");
        if (!image.isNull()) {
            int w = ui->image_connixon->width();
            int h = ui->image_connixon->height();
            ui->image_connixon->setPixmap(image.scaled(w, h, Qt::KeepAspectRatio));
            ui->text_connixson->setText("Carte est Connecte");
            ui->text_connixson->setStyleSheet("QLabel { color: green; font: 900 10pt 'Segoe UI'; }");
        } else {
            qDebug() << "Failed to load image:C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_connect.png";
        }
    } else {
        QPixmap image("C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_dconnect .png");
        if (!image.isNull()) {
            int w = ui->image_connixon->width();
            int h = ui->image_connixon->height();
            ui->image_connixon->setPixmap(image.scaled(w, h, Qt::KeepAspectRatio));
            ui->text_connixson->setText("Carte Ne Pas Connecte");
            ui->text_connixson->setStyleSheet("QLabel { color: red; font: 900 10pt 'Segoe UI'; }");
            QPixmap image("C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_led.jpg");
             w = ui->image_led->width();
             h = ui->image_led->height();
            ui->image_led->setPixmap(image.scaled(w, h, Qt::KeepAspectRatio));


        } else {
            qDebug() << "Failed to load image: C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_dconnect.png";
        }
    }
}

void HOME::showtime()
{
    QTime time=QTime::currentTime();
    QString  time_text=time.toString("hh : mm : ss");
    ui->time->setText(time_text);
}
void HOME::update_label()
{

    int* data  = S.read_from_carte();
    qDebug() << "data[0]"<<data[0];
    qDebug() << "data[1]"<<data[1];
    qDebug() << "data[3]"<<data[3];
    ui->lcd_temp->display(data[0]);
    ui->lcd_hum->display(data[1]);
    ui->lcd_fan->display(data[3]);
    if (data[2]==1)
    {
       QPixmap image("C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/led_on.png");
        int w = ui->image_led->width();
        int h = ui->image_led->height();
        ui->image_led->setPixmap(image.scaled(w, h, Qt::KeepAspectRatio));
    }
    else
    {
        QPixmap image("C:/Users/WADII/STM32CubeIDE/workspace_1.13.2/smart/QT/logo_led.jpg");
        int w = ui->image_led->width();
        int h = ui->image_led->height();
        ui->image_led->setPixmap(image.scaled(w, h, Qt::KeepAspectRatio));
    }


}

void HOME::on_button_on_led_clicked()
{
    S.write_to_carte("1");
}


void HOME::on_button_off_led_clicked()
{
   S.write_to_carte("0");
}


void HOME::on_button_sortie_clicked()
{
    hide();
    L = new LOGIN (this);
    L->show();
}



void HOME::on_button_plus_clim_clicked()
{
    S.write_to_carte("P");
   /* intensite += PAS;
    ui->lcd_fan->display(intensite);
    if (intensite > 10){
        intensite = 10;
        ui->lcd_fan->display(intensite);
    }*/
}


void HOME::on_button_mois_clim_clicked()
{
    S.write_to_carte("M");
   /* intensite -= PAS;
    ui->lcd_fan->display(intensite);
    if (intensite < 0){
        intensite = 0;
        ui->lcd_fan->display(intensite);
    }*/
}

