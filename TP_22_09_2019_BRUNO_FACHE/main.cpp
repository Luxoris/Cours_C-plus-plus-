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
	CVecteur3d vecteur3(vecteur2); //appel du constructeur par recopie par défaut.

	//std::cout<<"Le vecteur coincide ? (par valeur) :"<< vecteur1.coincide(vecteur2) << std::endl; //en commentaire car a la même définiton que le passage par référence.
	std::cout<<"Le vecteur coincide ? (par adresse) :"<< vecteur1.coincide(&vecteur2) << std::endl;
	std::cout<<"Les vecteurs 2 et 3 coincides ? (par reference) :"<< vecteur2.coincide(vecteur3) << std::endl;
	
	//Système pause
	system("pause");
}