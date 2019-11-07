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

	//Syst�me pause
	system("pause");
}