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
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'�l�ment du vecteur.
//
//Entr�e			: int nElem : Le nombre d'entiers contenu dans le vecteur.
//					
//Sortie			: m_pnAdr est initialis�.
//					: m_nNelem est initialis�.
//
//*************************************************************************************************************
CVect::CVect(int nNelem)
{
	m_pnAdr = new int[nNelem];
	m_nNelem = nNelem;
}

//*************************************************************************************************************
//Description		: Destructeur qui lib�re la m�moire du membre m_pnAdre
//
//Entr�e			:
//					
//Sortie			: m_pnAdr est d�truit.
//					
//
//*************************************************************************************************************
CVect::~CVect()
{
	delete m_pnAdr;
}


//*************************************************************************************************************
//Description		: Surcharge de l'op�rateur [] qui renvoie l'�lement � l'indice pass� en param�tre.
//
//Entr�e			: int nIndice : le num�ro de l'indice de l'�l�ment que l'on veut r�cup�rer
//					
//Sortie			: int : la valeur de l'entier � l'indice donn� en param�tre.
//					
//
//*************************************************************************************************************
int& CVect::operator[](int nIndice)
{
	if (!(nIndice >= 0 && nIndice < m_nNelem)) {
		throw "Erreur, l'indice d�passe la taille du vecteur.";
	}
	return m_pnAdr[nIndice];
}
