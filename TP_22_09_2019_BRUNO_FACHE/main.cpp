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


using namespace std; //permet de ne pas avoir à preciser le std

int main()
{
	//DECLARATION ET INSTANCIATION.
	CVecteur3d vVecteur1;				//appel du contructeur avec valeurs = 0 par défaut
	CVecteur3d vVecteur2(1, 2, 3);		//appel du contructeur avec valeurs passées en argument.
	CVecteur3d vVecteur3(vVecteur2);	//appel du contructeur par recopie
	
	//Test des fonction d'affichage :
	std::cout << std::endl << "Test des fonctions d'affichage (soit trois vecteurs differents) : " << std::endl;
	vVecteur1.affiche();
	vVecteur2.affiche();
	vVecteur3.affiche();

	//Test du produit Scalaire :
	std::cout << std::endl << "Produit scalaire du vecteur 2 et 3 : " << vVecteur2.produitScalaire(vVecteur3) << std::endl;

	//Test de la somme des deux vecteurs.
	std::cout << std::endl << "Somme du vecteur 2 et 3 : " << vVecteur2 .somme(vVecteur3).toString() << std::endl;
	
	

	//Système pause
	system("pause");
}