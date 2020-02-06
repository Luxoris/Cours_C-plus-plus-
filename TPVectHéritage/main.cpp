//******************************************************************************************************
//Fichier			: main.cpp
//Programme de test des classes CVect et CVectb
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CVectb.h"
#include <cstdlib>
#include <iostream>
int main(){

	std::cout << "Exercice 1 :" << std::endl;

	std::cout << "Test du vecteur Cvect :" << std::endl;
	CVect vec = CVect(10);
	vec[0] = 1;
	vec.operator[](1) = 25;
	std::cout << "vec[0] = " << vec[0] << " | vec[1] = " << vec.operator[](1) << std::endl << std::endl;


	std::cout << "Test du vecteur Cvectb avec passage du nombre d'éléments :" << std::endl;
	CVectb vec1 = CVectb(10);
	vec1[0] = 1;
	vec1.operator[](9) = 25;
	std::cout << "vec1[0] = " << vec1[0] << " | vec[9] = " << vec1.operator[](9) << std::endl << std::endl;


	std::cout << "Test du vecteur Cvectb avec définition des bornes :" << std::endl;
	CVectb vec2 = CVectb(10,20);
	vec2[10] = 1;
	vec2.operator[](20) = 25;
	std::cout << "vec2[10] = " << vec2[10] << " | vec2[20] = " << vec2.operator[](20) << std::endl << std::endl;


	//Système pause
	system("pause");
	return 0;
}