//******************************************************************************************************
//Fichier			: CListe.cpp
//
//Classe			: CVect
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CListe.h"

//*************************************************************************************************************
//Description		: Constructeur qui alloue initialise les valeurs des pointeurs � null
//
//Entr�e			: 
//					
//Sortie			: debut est initialis� � null;
//					: courant est initialis� � null;
//
//*************************************************************************************************************
CListe::CListe()
{
	this->debut = nullptr;
	this->courant = nullptr;
}

//*************************************************************************************************************
//Description		: Destructeur qui parcours tous les �l�ments de la liste et lib�re la m�moire.
//
//Entr�e			: 
//					
//Sortie			: Les refs m�moires lib�r�s
//
//*************************************************************************************************************
CListe::~CListe()
{
	if (this->debut != nullptr) {	//si la liste n'est pas vide
		this->courant = this->debut;	//fait pointer la liste sur le premier �l�ment
		element* tmp;
		while (this->courant != nullptr) {	//tant que l'�l�ment courant n'est pas null
			tmp = this->courant; //retient la ref de l'�l�ment courant
			this -> courant = this->courant->suivant;	//courant recupere la ref de l'�l�ment suivant
			delete tmp; //d�truit la m�moire de la ref sauvegard�e
		}
	}
}

//*************************************************************************************************************
//Description		: M�thode qui ajoute la r�f�rence pass�e en argument dans la liste.
//
//Entr�e			: void* contenu : la r�f�rence de l'�l�ment
//					
//Sortie			: La r�f�rence pass�e en argument ajout� � la liste.
//
//*************************************************************************************************************
void CListe::ajoute(void* contenu)
{
	element* elt = new element;
	elt->suivant = this->debut; //l'�l�ment ajout�e pointe sur le premier �l�ment de la liste
	elt->contenu = contenu;
	this->debut = elt; //le premier element de la lsite devient le nouvel �l�ment
}

//*************************************************************************************************************
//Description		: M�thode qui fait pointer l'�l�ment courant sur le d�but de la liste et renvoi la r�f�rence du contenu du premier �l�ment de la liste
//
//Entr�e			:
//					
//Sortie			: void* : La r�f�rence du contenu du premier �l�ment de la liste
//					  L'�l�ment courant re�oit la r�f�rence du premier �l�ment de la liste
//
//*************************************************************************************************************
void* CListe::premier()
{
	this->courant = this->debut;
	if (!(this->debut==nullptr)) { //si la liste n'est pas vide, renvoie le contenu du premier �l�ment
		return this->courant->contenu;
	}
	else {
		return nullptr;
	}
}

//*************************************************************************************************************
//Description		: M�thode qui fait pointer l'�l�ment courant sur le prochain �l�ment de la liste et renvoi la r�f�rence du contenu associ�
//
//Entr�e			:
//					
//Sortie			: void* : La r�f�rence du contenu du associ� au prochain �l�ment courant
//					  L'�l�ment courant re�oit la r�f�rence du prochaint �l�ment de la liste
//
//*************************************************************************************************************
void* CListe::prochain()
{
	if (!(this->debut==nullptr||this->fini())) { //si la liste n'est pas vide ou que ce n'est pas le dernier �l�ment de la liste, renvoie le contenu du prochain �l�ment
		this->courant = this->courant->suivant;
		return this->courant->contenu;
	}
	else {
		return nullptr;
	}
}

//*************************************************************************************************************
//Description		: M�thode qui v�rifie si l'�l�ment courant est le dernier de la liste
//
//Entr�e			:
//					
//Sortie			: int : m�thode qui 1 si l'�l�ment courant pointe sur un �l�ment suivant dont la valeur est �galle � nullptr
//
//*************************************************************************************************************
int CListe::fini()
{
	return this->courant->suivant==nullptr;
}

