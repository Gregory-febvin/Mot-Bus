#include "TestAplicationMotBus.h"
#include "qmodbustcpclient.h"

TestAplicationMotBus::TestAplicationMotBus(QWidget *parent)
{
    ui.setupUi(this);



}

void TestAplicationMotBus::lectureTout()
{
	//void readMultipleInputsStatusFC2(quint16 startAddress, quint16 nbInput);

	//utilise fonction 02 de MODBus pour lire les valenr en entr�e
	//startAdress = adresse carte -> besoin du r�seau
	this->HumidTerre1;
	this->HumidTerre2;
	this->HumidTerre3;
	
	this->TempInter;
	this->HumidInter;

	this->TempExter;

	//utiliser FC5 pour ecrir dans MQTT
	
	if (this->TempInter < 1) //SI la temp�rature int�rieur est inf�rieur � 1�C
	{
		//Chauffage
		ForceSingleCoilsFC5Request::ForceSingleCoilsFC5Request(QModbusTcpClient * client, quint16 transactionId, quint16 coilAddress, bool values);
	}
	if (this->TempInter >= 10 && this->HumidInter >= 85)	//SI Temp�rature Interieur est sup�rieur ou �gal � 10�C ET Humidit� int�rieur sup�rieur ou �gal a 85%
	{
		//Vasistas

	}
	if (this->TempInter > 25)	//SI la temp�rature Interieur est sup�rieur a 25�C
	{
		//Allume Brumisation

	}
	if (this->TempInter > 25)	//SI la temp�rature Interieur est sup�rieur a 25�C
	{
		//Allume Vasistas

	}
	if (this->TempInter > 5 && this->HumidInter < 50)	//SI la temp�rature Interieur est sup�rieur a 5�C ET l'humidit� Interieur est inf�rieur � 50%
	{
		// Brumisation

	}
	if (this->TempExter > this->TempInter && TempInter >= 10) //SI la temp�rature exterieur est plus grande que la temp�rature interieur et que la temp�rature interieur est sup�rieur ou egal a 10�C
	{
		//Vasistas

	}


}
