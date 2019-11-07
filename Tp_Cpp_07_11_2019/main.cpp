#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"


using namespace std; //permet de ne pas avoir à préciser le std


int main()
{
	//Déclaration et instanciation d'un point de test
	CPoint ptPoint(1.2, 5.4);

	//affichage des coordonnées du point
	std::cout << "X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;
	//Décalage des coordonnées du point
	ptPoint.deplace(1.0, -5.6);

	//affichage des coordonnées du point
	std::cout << "X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;

	//Système pause
	system("pause");
}