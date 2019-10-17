#include <iostream>	//lib flux d'output/input
#include <cmath>	//lib cMath
#include <cstdlib>	//lib qui contient la fonction system

//#define MACCRO Nom	//est ex�cut� avant la phase de compilation, tout ce qui est not� avec les # sera remplac� par un code en C, 
						//remplace le mot par la valeur pendant la phase de pr�processeur

using namespace std; //d�fini les espaces de donn�es (std = standard), on peut utiliser cin et cout que si on sp�cifie l'espace de donn�e std
					 //cr�e ses propres espaces de donn�es peuvent �tre utilis� pour exploit� ses propres fonctions qui sont d�velopp�es diff�rement de l'espace standard

//Exemple de programme en C ++


int main()	//fonction ou proc�dure qui d�fini le programme principal
{
	//printf("Hello world!\n");

	/*
	Variables typ�s et locales,
	ajout : string
	ajout : boolean
	
	les variabales, sont par d�faut volatile, static, const, register... => ce sont les classes de stockage
	*/
	int i = 0;
	float x = 0.0;
	float racx = 0.0;

	/*Les constantes = variable locale qui ne devra pas �tre modifi�.*/
	const int NFOIS = 5;

	//printf("Bonjour\n");


	//std::cout << "Test en pr�cisant std.\n";
	cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";	//primitive qui permet d'envoyer une information typer dans la console
	//par rapport au printf, on n'a pas besoin de pr�ciser le format des variables que l'on veut afficher


	for (i = 0; i < NFOIS; i++) {

		cout << "Donnez un nombre : ";
		cin >> x;	//primitive qui permet de r�cup�rer un flux dans un �l�ment de stockage (pas besoin de pr�cis� le format ni la r�f�rence de la varibale � modifier)
		//les chevrons permettent de pr�ciser la cible

		if (x < 0.0)

			cout << "Le nombre " << x << " ne possede pas de racine carr�e\n";
		else {
			racx = sqrtf(x);
			cout << "Le nombre " << x << " a pour racine carr�e " << racx << endl;	//endl permet de remplacer "\n" mais fait partie du std
		}
	}

	cout << "Travail Termine" << endl;

	system("pause");	//met en pause le programme apr�s ex�cution

	return 0;
}