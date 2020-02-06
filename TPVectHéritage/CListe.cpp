//******************************************************************************************************
//Fichier			: CListe.cpp
//
//Classe			: CVect
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CListe.h"

//*************************************************************************************************************
//Description		: Constructeur qui alloue initialise les valeurs des pointeurs à null
//
//Entrée			: 
//					
//Sortie			: debut est initialisé à null;
//					: courant est initialisé à null;
//
//*************************************************************************************************************
CListe::CListe()
{
	this->debut = nullptr;
	this->courant = nullptr;
}

//*************************************************************************************************************
//Description		: Destructeur qui parcours tous les éléments de la liste et libère la mémoire.
//
//Entrée			: 
//					
//Sortie			: Les refs mémoires libérés
//
//*************************************************************************************************************
CListe::~CListe()
{
	if (this->debut != nullptr) {	//si la liste n'est pas vide
		this->courant = this->debut;	//fait pointer la liste sur le premier élément
		element* tmp;
		while (this->courant != nullptr) {	//tant que l'élément courant n'est pas null
			tmp = this->courant; //retient la ref de l'élément courant
			this -> courant = this->courant->suivant;	//courant recupere la ref de l'élément suivant
			delete tmp; //détruit la mémoire de la ref sauvegardée
		}
	}
}

//*************************************************************************************************************
//Description		: Méthode qui ajoute la référence passée en argument dans la liste.
//
//Entrée			: void* contenu : la référence de l'élément
//					
//Sortie			: La référence passée en argument ajouté à la liste.
//
//*************************************************************************************************************
void CListe::ajoute(void* contenu)
{
	element* elt = new element;
	elt->suivant = this->debut; //l'élément ajoutée pointe sur le premier élément de la liste
	elt->contenu = contenu;
	this->debut = elt; //le premier element de la lsite devient le nouvel élément
}

//*************************************************************************************************************
//Description		: Méthode qui fait pointer l'élément courant sur le début de la liste et renvoi la référence du contenu du premier élément de la liste
//
//Entrée			:
//					
//Sortie			: void* : La référence du contenu du premier élément de la liste
//					  L'élément courant reçoit la référence du premier élément de la liste
//
//*************************************************************************************************************
void* CListe::premier()
{
	this->courant = this->debut;
	if (!(this->debut==nullptr)) { //si la liste n'est pas vide, renvoie le contenu du premier élément
		return this->courant->contenu;
	}
	else {
		return nullptr;
	}
}

//*************************************************************************************************************
//Description		: Méthode qui fait pointer l'élément courant sur le prochain élément de la liste et renvoi la référence du contenu associé
//
//Entrée			:
//					
//Sortie			: void* : La référence du contenu du associé au prochain élément courant
//					  L'élément courant reçoit la référence du prochaint élément de la liste
//
//*************************************************************************************************************
void* CListe::prochain()
{
	if (!(this->debut==nullptr||this->fini())) { //si la liste n'est pas vide ou que ce n'est pas le dernier élément de la liste, renvoie le contenu du prochain élément
		this->courant = this->courant->suivant;
		return this->courant->contenu;
	}
	else {
		return nullptr;
	}
}

//*************************************************************************************************************
//Description		: Méthode qui vérifie si l'élément courant est le dernier de la liste
//
//Entrée			:
//					
//Sortie			: int : méthode qui 1 si l'élément courant pointe sur un élément suivant dont la valeur est égalle à nullptr
//
//*************************************************************************************************************
int CListe::fini()
{
	return this->courant->suivant==nullptr;
}

