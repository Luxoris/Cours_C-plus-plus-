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
	CVecteur3d vVecteur1;
	CVecteur3d vVecteur2(1, 2, 3);
	CVecteur3d vVecteur3(3, 2, 1); 
	

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << "TEST DE LA FONCTION normax AVEC PASSAGE PAR REFERENCE" << std::endl;
	//TEST INFERIORITE
	std::cout << std::endl << "Test d'inferiorite : le vecteur appelant la methode est plus petit : " << std::endl;
	vVecteur1.affiche();
	vVecteur2.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur1.normax(vVecteur2).toString() << std::endl;


	//TEST SUPERIORITE
	std::cout << std::endl << "Test de superiorite : le vecteur appelant la methode est plus grand : " << std::endl;
	vVecteur2.affiche();
	vVecteur1.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur2.normax(vVecteur1).toString() << std::endl;

	//TEST EGALITE
	std::cout << std::endl << "Test avec deux vecteurs egaux, le resultat doit etre le vecteur appelant :" << std::endl;
	vVecteur2.affiche();
	vVecteur3.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur2.normax(vVecteur3).toString() << std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	std::cout << std::endl << "TEST DE LA FONCTION normax AVEC PASSAGE PAR ADRESSE" << std::endl;
	//TEST INFERIORITE
	std::cout << std::endl << "Test d'inferiorite : le vecteur appelant la methode est plus petit : " << std::endl;
	vVecteur1.affiche();
	vVecteur2.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur1.normax(&vVecteur2)->toString() << std::endl;


	//TEST SUPERIORITE
	std::cout << std::endl << "Test de superiorite : le vecteur appelant la methode est plus grand : " << std::endl;
	vVecteur2.affiche();
	vVecteur1.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur2.normax(&vVecteur1)->toString() << std::endl;

	//TEST EGALITE
	std::cout << std::endl << "Test avec deux vecteurs egaux, le resultat doit etre le vecteur appelant :" << std::endl;
	vVecteur2.affiche();
	vVecteur3.affiche();
	std::cout << "Les valeurs du vecteur le plus grand sont :" << vVecteur2.normax(&vVecteur3)->toString() << std::endl;

	//Système pause
	system("pause");
}