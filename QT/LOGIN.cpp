#include "LOGIN.h"
#include "ui_LOGIN.h"
#include <QMessageBox>
LOGIN::LOGIN(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LOGIN)
{
    ui->setupUi(this);

}

LOGIN::~LOGIN()
{
    delete ui;

}


void LOGIN::on_pushButton_clicked()
{
    QString username = ui->text_username->text();
    QString password = ui->text_password->text();
    if(username=="wadii" && password=="c++qt" )
    {
        hide();
        H = new HOME(this);
        H->show();
    }
    else
    {
        QMessageBox::warning(this,"Login","UserName or Password is Not  correct");

    }
}

