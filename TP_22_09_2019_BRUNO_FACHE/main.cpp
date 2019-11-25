//***************************************************************************************************
//Fichier*				: main.cpp
//
//Description		: Programme qui test les fonctions de la classe CPoint
//
//Note				:
//
//***************************************************************************************************
//25-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#include <iostream>
#include "CPoint.h"


using namespace std; //permet de ne pas avoir à preciser le std

int main()
{
	std::cout << "Nombre de points crées : " << CPoint::nombre() << std::endl;
	CPoint ptPoint1; //constructeur avec valeurs par défaut nulle
	ptPoint1.affiche();
	std::cout << "Nombre de points crées : " << CPoint::nombre() << std::endl;
	CPoint ptPoint2(1,5);
	ptPoint2.affiche();
	std::cout << "Nombre de points crées : " << CPoint::nombre() << std::endl;
	CPoint *ptPoint3 = new CPoint(1,6);	
	ptPoint3->affiche();
	std::cout << "Nombre de points crées : " << CPoint::nombre() << std::endl;
	delete ptPoint3;
	std::cout << "Destruction du point 3 :" << std::endl;
	std::cout << "Nombre de points crées : " << CPoint::nombre() << std::endl;

	//Système pause
	system("pause");
}