#include "CListePoints.h"

//*************************************************************************************************************
//Description		: Méthode qui affiche les valeurs de tous les points de la liste dans le std::cout
//
//Entrée			:
//					
//Sortie			: std::cout : les valeurs des points de la liste
//
//*************************************************************************************************************
void CListePoints::affiche()
{
	CPoint* pt;
	pt = (CPoint*)this->premier();
	if (pt != nullptr) {	//vérifie que le point pointe bien sur quelquechose. Donc que la liste n'est pas vide.
		pt->affiche();
		while (!this->fini())
		{
			pt = (CPoint*)this->prochain();
			pt->affiche();
		}
	}
}
