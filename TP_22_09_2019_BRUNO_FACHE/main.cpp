//***************************************************************************************************
//Fichier*				: main.cpp
//
//Description		: Programme qui test les fonctions de la classe CVecteur3d
//
//Note				:
//
//***************************************************************************************************
//22-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#include <iostream>
#include "CVecteur3d.h"


using namespace std; //permet de ne pas avoir à préciser le std

int main()
{
	CVecteur3d vecteur1;
	CVecteur3d vecteur2(1, 2, 3);

	std::cout<<"Le vecteur coincide ?"<< vecteur1.coincide(vecteur2);
	
	//Système pause
	system("pause");
}