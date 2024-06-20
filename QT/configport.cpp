#include "configport.h"
#include<QDebug>
#include<QSerialPortInfo>


STM32::STM32():data(""), stm32_port_name(""),
    stm32_is_available(false),serial(new QSerialPort)
{}

QString STM32::getarduino_port_name()
{
    return stm32_port_name;
}

QSerialPort *STM32::getserial()
{
   return serial;
}

STM32::~STM32()
{
   close_carte();
   delete serial;
}

int STM32::close_carte()
{
    if(serial->isOpen())
    {
        serial->close();
        return 0;
    }
    return 1;
}

int* STM32::read_from_carte()
{
    serialdata = "";
    data = "";
    QList<int> values;
    int* array = new int[4];

    if (serial->isReadable())
    {
        data = serial->readAll(); // Lire toutes les données disponibles depuis le port série
        qDebug() << "data0:" << data;

        for (const QChar &ch : data) {
            values.append(ch.unicode()); // Ajoute la valeur Unicode de chaque caractère à la liste
        }

        for (int i = 0; i < 4; ++i) {
            if (i < values.size())
                array[i] = values[i];
            else
                array[i] = 0; // Remplit le tableau avec des zéros si les données sont insuffisantes
        }

        // Affiche chaque valeur dans le tableau
        for (int i = 0; i < 4; ++i) {
            qDebug() << "Value[" << i << "]:" << array[i];
        }
    }


    return array ;
 }
void STM32::write_to_carte( QByteArray d)
{
    if(serial->isWritable())
    {
        serial->write(d);  // envoyer des donnés vers stm32
    }
    else
    {
        qDebug() << "Couldn't write to serial!";
    }
}
void STM32::write_to_carte_test(int value1)
{
    if (serial->isWritable())
    {
        QByteArray byteArray;
        byteArray.append(static_cast<unsigned char>(value1));

        serial->write(byteArray);  // envoyer la valeur convertie en QByteArray
    }
    else
    {
        qDebug() << "Couldn't write to serial!";
    }
}

int STM32::connect_carte()
{   // recherche du port sur lequel la carte stm32 identifée par  stm32_vendor_id
    // est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts())
    {
        if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier())
        {
            qDebug() << "serial_port_info.vendorIdentifier() = " << serial_port_info.vendorIdentifier();
            qDebug() << "serial_port_info.productIdentifier() = " << serial_port_info.productIdentifier();

            if(serial_port_info.vendorIdentifier() == stm32_vendor_id &&
                serial_port_info.productIdentifier()== stm32_producy_id)
            {
                stm32_is_available = true;
                stm32_port_name=serial_port_info.portName();
            }
        }
    }
    qDebug() << "stm32_port_name is :" << stm32_port_name;
    if(stm32_is_available)
    { // configuration de la communication ( débit...)
        serial->setPortName(stm32_port_name);
        if(serial->open(QSerialPort::ReadWrite))
        {
            serial->setBaudRate(QSerialPort::Baud115200); // débit : 115200 bits/s
            serial->setDataBits(QSerialPort::Data8); //Longueur des données : 8 bits,
            serial->setParity(QSerialPort::NoParity); //1 bit de parité optionnel
            serial->setStopBits(QSerialPort::OneStop); //Nombre de bits de stop : 1
            serial->setFlowControl(QSerialPort::NoFlowControl);
            return 0;
        }
        return 1;
    }
    return -1;
}
