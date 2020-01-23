#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"
#include "PointCouleur.h"
#include "CCercle.h"


using namespace std; //permet de ne pas avoir à préciser le std
/*
	Il existe plusieurs fonction amis :
		- fonction indépendante de la classe mais amis d'une classe.
		- fonction membre d'une classe mais amis d'une autre classe.
		- fonction amis de plusieurs classes.

	Pour dire que toutes les fonctions d'une classe sont amis d'une autre classe, on peut mettre toute la classe en ami. 
*/

int main()
{
	/*CPoint pt;


	char cColor[10] = { "Rouge" };
	CPoint ptMonPoint2(5, 9, cColor);
	strcpy_s(cColor, 10, "gizjebha");

	ptMonPoint2.setColor(cColor);
	CPoint ptMonPoint3(ptMonPoint2);

	CCercle cMoncercle(5, 6, 23);*/

	//////FONCTION AMIS////////////
	CPoint ptA(5, 9);
	CPoint ptB(5, 9);

	std::cout << coincide(ptA, ptB) <<endl; //fonction indépendante amis d'une classe

	//FOCNCTION AMIS MEMBRE D'UNE CLASSE MAIS AMIS D'UNE AUTRE CLASSE.
	CCercle c(5, 9, 25);
	ptA.affichePointCercle(c);

	//FONCTION INDEPENDANTE AMIS DE PLUSIEURS CLASSES
	affichePointCercle(ptA, c);


	PointCouleur pt(1.2f, 1.3f, rouge);
	pt.affiche();
	//Système pause
	system("pause");
}