#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"


using namespace std; //permet de ne pas avoir à préciser le std


int main()
{
	//Déclaration et instanciation d'un point de test
	CPoint ptPoint(1.2, 5.4);
	//Affichage des coordonnées du point
	ptPoint.affiche();

	//Décalage des coordonnées du point
	ptPoint.deplace(1.0, -5.6);

	//Affichage des nouvelles coordonnées
	ptPoint.affiche();

	//creation d'un nouveau point
	CPoint ptPoint2(1.4, 5.6);

	//affichage du nouveau point
	ptPoint2.affiche();

	//Système pause
	system("pause");
}