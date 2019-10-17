#include <iostream>
#include <cmath>

using namespace std;

//Exemple de programme en C ++

//définition d'un type structuré
typedef struct character {
	pawn* root;
	capsule_component* capsule;
	static_mesh* mesh;
}character;

/*
	La poo, permet de représenter une information sous la forme d'une objet incluant les données, mais aussi les méthodes.
	Le cpp n'est pas un langage de poo pur car tout n'est pas objet.

	Il n'est pas possible d'agit sur les données d'un objet, il est nécessaire de passer par ses méthodes,
	on traduit parfois cela en disant que l'appelel d'une méthode est un message envoyé à l'objet.

	Le grand mérite de l'encapsulation est que vu de l'extérieur,
	un objet se caractérise uniquement par les spécificaton de ces méthodes, on fait abstraction des données,
	en poo on va parler de classe, d'héritage, de polymorphisme.
*/

int main()
{


	return 0;
}