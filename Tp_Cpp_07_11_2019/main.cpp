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

	//Homothétie
	ptPoint.homothetie(5.1);
	std::cout << "Homothétie : X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;
	
	//Rotation
	ptPoint.rotation(12.5);
	std::cout << "Rotation : X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;

	//Traduction en coordonnées polaires :
	std::cout << "Rotation : rho: " << ptPoint.rho() << " theta: " << ptPoint.theta() << "degree" <<std::endl;

	//Système pause
	system("pause");
}