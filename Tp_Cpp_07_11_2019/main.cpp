#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"


using namespace std; //permet de ne pas avoir � pr�ciser le std


int main()
{
	//D�claration et instanciation d'un point de test
	CPoint ptPoint(1.2, 5.4);
	//Affichage des coordonn�es du point
	ptPoint.affiche();

	//D�calage des coordonn�es du point
	ptPoint.deplace(1.0, -5.6);
	//Affichage des nouvelles coordonn�es
	ptPoint.affiche();

	//Syst�me pause
	system("pause");
}