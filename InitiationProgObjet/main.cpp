#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Cpoint.h"


using namespace std;

//Exemple de programme en C ++

//d�finition d'un type structur�
/*typedef struct character {
	pawn* root;
	capsule_component* capsule;
	static_mesh* mesh;
}character;*/

/*
	La poo, permet de repr�senter une information sous la forme d'une objet incluant les donn�es, mais aussi les m�thodes.
	Le cpp n'est pas un langage de poo pur car tout n'est pas objet.

	Il n'est pas possible d'agit sur les donn�es d'un objet, il est n�cessaire de passer par ses m�thodes,
	on traduit parfois cela en disant que l'appelel d'une m�thode est un message envoy� � l'objet.

	Le grand m�rite de l'encapsulation est que vu de l'ext�rieur,
	un objet se caract�rise uniquement par les sp�cificaton de ces m�thodes, on fait abstraction des donn�es,
	en poo on va parler de classe, d'h�ritage, de polymorphisme.
*/

int main()
{
	CPoint ptMonPoint;
	CPoint ptMonPoint2(3, 5, 8);
	int nTemp;

	std::cin >> nTemp;
	ptMonPoint.setX(nTemp);
	std::cout<<"X:  "<<ptMonPoint.getX();

	std::cout << "X:  " << ptMonPoint2.getX();
	std::cout << "Y:  " << ptMonPoint2.getY();
	std::cout << "Z:  " << ptMonPoint2.getZ();

	return 0;

	system("pause");
}