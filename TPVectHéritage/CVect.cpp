//******************************************************************************************************
//Fichier			: CVect.cpp
//
//Classe			: CVect
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CVect.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//*************************************************************************************************************
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'élément du vecteur.
//
//Entrée			: int nElem : Le nombre d'entiers contenu dans le vecteur.
//					
//Sortie			: m_pnAdr est initialisé.
//					: m_nNelem est initialisé.
//
//*************************************************************************************************************
CVect::CVect(int nNelem)
{
	m_pnAdr = new int[nNelem];
	m_nNelem = nNelem;
}

//*************************************************************************************************************
//Description		: Destructeur qui libère la mémoire du membre m_pnAdre
//
//Entrée			:
//					
//Sortie			: m_pnAdr est détruit.
//					
//
//*************************************************************************************************************
CVect::~CVect()
{
	delete m_pnAdr;
}


//*************************************************************************************************************
//Description		: Surcharge de l'opérateur [] qui renvoie l'élement à l'indice passé en paramètre.
//
//Entrée			: int nIndice : le numéro de l'indice de l'élément que l'on veut récupérer
//					
//Sortie			: int : la valeur de l'entier à l'indice donné en paramètre.
//					
//
//*************************************************************************************************************
int& CVect::operator[](int nIndice)
{
	if (!(nIndice >= 0 && nIndice < m_nNelem)) {
		throw "Erreur, l'indice dépasse la taille du vecteur.";
	}
	return m_pnAdr[nIndice];
}
