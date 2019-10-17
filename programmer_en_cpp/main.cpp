#include <iostream>	//lib flux d'output/input
#include <cmath>	//lib cMath
#include <cstdlib>	//lib qui contient la fonction system

//#define MACCRO Nom	//est exécuté avant la phase de compilation, tout ce qui est noté avec les # sera remplacé par un code en C, 
						//remplace le mot par la valeur pendant la phase de préprocesseur

using namespace std; //défini les espaces de données (std = standard), on peut utiliser cin et cout que si on spécifie l'espace de donnée std
					 //crée ses propres espaces de données peuvent être utilisé pour exploité ses propres fonctions qui sont développées différement de l'espace standard

//Exemple de programme en C ++


int main()	//fonction ou procédure qui défini le programme principal
{
	//printf("Hello world!\n");

	/*
	Variables typés et locales,
	ajout : string
	ajout : boolean
	
	les variabales, sont par défaut volatile, static, const, register... => ce sont les classes de stockage
	*/
	int i = 0;
	float x = 0.0;
	float racx = 0.0;

	/*Les constantes = variable locale qui ne devra pas être modifié.*/
	const int NFOIS = 5;

	//printf("Bonjour\n");


	//std::cout << "Test en précisant std.\n";
	cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";	//primitive qui permet d'envoyer une information typer dans la console
	//par rapport au printf, on n'a pas besoin de préciser le format des variables que l'on veut afficher


	for (i = 0; i < NFOIS; i++) {

		cout << "Donnez un nombre : ";
		cin >> x;	//primitive qui permet de récupérer un flux dans un élément de stockage (pas besoin de précisé le format ni la référence de la varibale à modifier)
		//les chevrons permettent de préciser la cible

		if (x < 0.0)

			cout << "Le nombre " << x << " ne possede pas de racine carrée\n";
		else {
			racx = sqrtf(x);
			cout << "Le nombre " << x << " a pour racine carrée " << racx << endl;	//endl permet de remplacer "\n" mais fait partie du std
		}
	}

	cout << "Travail Termine" << endl;

	system("pause");	//met en pause le programme après exécution

	return 0;
}