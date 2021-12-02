#include "TestAplicationMotBus.h"
#include "qmodbustcpclient.h"

TestAplicationMotBus::TestAplicationMotBus(QWidget *parent)
{
    ui.setupUi(this);



}

void TestAplicationMotBus::lectureTout()
{
	//void readMultipleInputsStatusFC2(quint16 startAddress, quint16 nbInput);

	//utilise fonction 02 de MODBus pour lire les valenr en entrée
	//startAdress = adresse carte -> besoin du réseau
	this->HumidTerre1;
	this->HumidTerre2;
	this->HumidTerre3;
	
	this->TempInter;
	this->HumidInter;

	this->TempExter;

	//utiliser FC5 pour ecrir dans MQTT
	
	if (this->TempInter < 1) //SI la température intérieur est inférieur à 1°C
	{
		//Chauffage
		ForceSingleCoilsFC5Request::ForceSingleCoilsFC5Request(QModbusTcpClient * client, quint16 transactionId, quint16 coilAddress, bool values);
	}
	if (this->TempInter >= 10 && this->HumidInter >= 85)	//SI Température Interieur est supérieur ou égal à 10°C ET Humidité intérieur supérieur ou égal a 85%
	{
		//Vasistas

	}
	if (this->TempInter > 25)	//SI la température Interieur est supérieur a 25°C
	{
		//Allume Brumisation

	}
	if (this->TempInter > 25)	//SI la température Interieur est supérieur a 25°C
	{
		//Allume Vasistas

	}
	if (this->TempInter > 5 && this->HumidInter < 50)	//SI la température Interieur est supérieur a 5°C ET l'humidité Interieur est inférieur à 50%
	{
		// Brumisation

	}
	if (this->TempExter > this->TempInter && TempInter >= 10) //SI la température exterieur est plus grande que la température interieur et que la température interieur est supérieur ou egal a 10°C
	{
		//Vasistas

	}


}
