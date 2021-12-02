#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestAplicationMotBus.h"
#include "qmodbustcpclient.h"

class TestAplicationMotBus :
	public QMainWindow,
	public qmodbustcpclient
{
    Q_OBJECT

public:
    TestAplicationMotBus(QWidget *parent = Q_NULLPTR);
	Ui::TestAplicationMotBusClass ui;
	void lectureTout();

private:

	//lecteur pour les 3 capteur humidité terrestre
	float HumidTerre1;
	float HumidTerre2;
	float HumidTerre3;

	//Lecteur humidité intérieur
	float HumidInter;
	//Lecteur temperature interieur
	float TempInter;
	//Lecteur température exterieur (non c est pas branché mdr)
	float TempExter;
};
