#ifndef CONFIGPORT_H
#define CONFIGPORT_H

#include<QByteArray>
#include<QSerialPort>

class STM32
{
public:     //méthodes de la classe Arduino
    STM32();
    ~STM32();
    int connect_carte(); // permet de connecter le PC à Carte
    int close_carte(); // permet de femer la connexion
    void write_to_carte( QByteArray ); // envoyer des données vers Carte
    void write_to_carte_test(int);
    int* read_from_carte();  //recevoir des données de la carte Carte
    QSerialPort* getserial();   // accesseur
    QString getarduino_port_name();
    int i = 0 ;
    static const quint16 stm32_vendor_id= 1659; //6790 ;
    static const quint16 stm32_producy_id= 8963; //29987;
private:

    QByteArray data  ;  // contenant les données lues à partir stm32
    QByteArray serialdata;
    QString stm32_port_name;
    bool stm32_is_available;


    QSerialPort * serial; //Cet objet rassemble des informations (vitesse, bits de données, etc.)
    //et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour Stm32.
};
#endif // CONFIGPORT_H
