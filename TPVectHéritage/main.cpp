//******************************************************************************************************
//Fichier			: main.cpp
//Programme de test des classes CVect et CVectb
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CVectok.h"
#include <cstdlib>
#include <iostream>
int main(){

	std::cout << "Exercice 1 :" << std::endl;

	std::cout << "Test du vecteur Cvect :" << std::endl;
	CVect vec = CVect(2);
	vec[0] = 1;
	vec.operator[](1) = 25;
	std::cout << "vec[0] = " << vec[0] << " | vec[1] = " << vec.operator[](1) << std::endl << std::endl;

	std::cout << "Test du vecteur Cvectok :" << std::endl;
	std::cout << "Création d'un vecteur CVectok :" << std::endl;
	CVectok vectok(2);
	vectok[0] = 1;
	vectok[1] = 2;
	std::cout << "vectok[0] = " << vectok[0] << " | vectok[1] = " << vectok[1] << std::endl << std::endl;

	std::cout << "Recopie du vecteur par constructeur par copie :" << std::endl;
	CVectok vectok2(vectok);
	std::cout << "vectok2[0] = " << vectok2[0] << " | vectok2[1] = " << vectok2[1] << std::endl << std::endl;

	std::cout << "Recopie du vecteur par affectation :" << std::endl;
	CVectok vectok3 = vectok;
	std::cout << "vectok3[0] = " << vectok3[0] << " | vectok3[1] = " << vectok3[1] << std::endl << std::endl;


	//Système pause
	system("pause");
	return 0;
}