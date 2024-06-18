#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "HOME.h"
QT_BEGIN_NAMESPACE
namespace Ui { class LOGIN; }
QT_END_NAMESPACE

class LOGIN : public QMainWindow
{
    Q_OBJECT

public:
    LOGIN(QWidget *parent = nullptr);
    ~LOGIN();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LOGIN *ui;
    HOME *H;
};
#endif // LOGIN_H
