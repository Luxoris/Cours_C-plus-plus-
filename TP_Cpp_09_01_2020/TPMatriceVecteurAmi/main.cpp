#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CMatrice.h"
#include "CVecteur.h"
#include <vector>


int main()
{
	//initialisation d'une matrice de dimension 9
	std::vector <std::vector<float>> vtrMatrice(3); //dimensionne le vector de vector au nombre de lignes.
	for (int i = 0; i < 3; i++) { //dimensionne les lignes contenue dans le vector de vectors afin d'avoir des colonnes.
		vtrMatrice[i].resize(3);
	}

	//affectation des valeurs à la matrice
	vtrMatrice[0][0] = 1;
	vtrMatrice[0][1] = -1;
	vtrMatrice[0][2] = 0;
	vtrMatrice[1][0] = -2;
	vtrMatrice[1][1] = 2;
	vtrMatrice[1][2] = 0;
	vtrMatrice[2][0] = 3;
	vtrMatrice[2][1] = 4;
	vtrMatrice[2][2] = 1;

	//Création d'un objet de classe matrice
	std::cout << "Création d'un objet de classe matrice :" << std::endl;

	CMatrice matMatrice9(vtrMatrice);
	matMatrice9.affiche();

	//Création d'un objet de type vecteur
	std::cout << "Création d'un objet de type vecteur :" << std::endl;
	CVecteur vctVecteur(1,2,3);
	vctVecteur.affiche();
	
	
	try{ 
		
		//Affichage du résultat du produit d'un vecteur par une matrice avec fonction indépendante ami de plusieurs classes
		std::cout << "Affichage du résultat du produit d'un vecteur par une matrice avec fonction indépendante ami de plusieurs classes :" << std::endl;
		prod(vctVecteur, matMatrice9).affiche();

		
		//Affichage du résultat du produit d'un vecteur par une matrice avec fonction embre ami de la classe vecteur
		std::cout << "Affichage du résultat du produit d'un vecteur par une matrice avec fonction embre ami de la classe vecteur :" << std::endl;
		matMatrice9.prod(vctVecteur).affiche();
	}
	catch (const char* errorMsg) { //gestion des exceptions si la matrice n'est pas de dimensions 3, 3.
		std::cerr << errorMsg << std::endl;
	}

	//Système pause
	system("pause");
}