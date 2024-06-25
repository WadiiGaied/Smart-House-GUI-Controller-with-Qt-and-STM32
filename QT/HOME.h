#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <configport.h>

namespace Ui {
class HOME;
}

class HOME : public QMainWindow
{
    Q_OBJECT

public:
    explicit HOME(QWidget *parent = nullptr);
    ~HOME();
    int ret ;


private slots:
    void update_label();
    void showtime();
    void test_port();


    void on_button_on_led_clicked();

    void on_button_off_led_clicked();

    void on_button_sortie_clicked();

    void on_button_plus_clim_clicked();

    void on_button_mois_clim_clicked();

private:
    Ui::HOME *ui;
    STM32 S;
};

#endif // HOME_H
