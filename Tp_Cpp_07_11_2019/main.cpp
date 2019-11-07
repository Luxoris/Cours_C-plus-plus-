#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"


using namespace std; //permet de ne pas avoir � pr�ciser le std


int main()
{
	//D�claration et instanciation d'un point de test
	CPoint ptPoint(1.2, 5.4);

	//affichage des coordonn�es du point
	std::cout << "X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;
	//D�calage des coordonn�es du point
	ptPoint.deplace(1.0, -5.6);

	//affichage des coordonn�es du point
	std::cout << "X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;

	//Homoth�tie
	ptPoint.homothetie(5.1);
	std::cout << "Homoth�tie : X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;
	
	//Rotation
	ptPoint.rotation(12.5);
	std::cout << "Rotation : X: " << ptPoint.abscisse() << " Y: " << ptPoint.ordonnee() << std::endl;

	//Traduction en coordonn�es polaires :
	std::cout << "Rotation : rho: " << ptPoint.rho() << " theta: " << ptPoint.theta() << "degree" <<std::endl;

	//Syst�me pause
	system("pause");
}