#include "CListePoints.h"

//*************************************************************************************************************
//Description		: M�thode qui affiche les valeurs de tous les points de la liste dans le std::cout
//
//Entr�e			:
//					
//Sortie			: std::cout : les valeurs des points de la liste
//
//*************************************************************************************************************
void CListePoints::affiche()
{
	CPoint* pt;
	pt = (CPoint*)this->premier();
	if (pt != nullptr) {	//v�rifie que le point pointe bien sur quelquechose. Donc que la liste n'est pas vide.
		pt->affiche();
		while (!this->fini())
		{
			pt = (CPoint*)this->prochain();
			pt->affiche();
		}
	}
}
