//******************************************************************************************************
//Fichier			: CVectb.cpp
//
//Classe			: CVectb extends CVect
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************
#include "CVectb.h"



///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//*************************************************************************************************************
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'élément du vecteur et intialise la position des bornes;
//
//Entrée			: int nNelem : Le nombre d'entiers contenu dans le vecteur.
//					
//Sortie			: m_pnAdr est initialisé.
//					: m_nNelem est initialisé.
//					: m_nBorneInf est initilisé à 0;
//					: m_nBorneSup est initialisé à nNelem -1;
//
//*************************************************************************************************************
CVectb::CVectb(int nNelem ) : CVect(nNelem)
{
	m_nBorneInf = 0;
	m_nBorneSup = nNelem - 1;
}

//*************************************************************************************************************
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'élément du vecteur en fonction de la position des bornes.
//
//Entrée			: int nBorneInf : le numéro de la borne inférieur
//					: int nBorneSup : le numéro de la borne supérieur
//					
//Sortie			: m_pnAdr est initialisé.
//					: m_nNelem est initialisé à nBorneSup - nBorneInf +1.
//					: m_nBorneInf est initilisé à nBorneInf;
//					: m_nBorneSup est initialisé à nBorneSup;
//
//*************************************************************************************************************

CVectb::CVectb(int nBorneInf, int nBorneSup): CVect(nBorneSup - nBorneInf + 1)
{
	m_nBorneInf = nBorneInf;
	m_nBorneSup = nBorneSup;

}


//*************************************************************************************************************
//Description		: Surcharge de l'opérateur [] qui renvoie l'élement à l'indice passé en paramètre en prenant en compte l'indice des bornes.
//
//Entrée			: int nIndice : le numéro de l'indice de l'élément que l'on veut récupérer
//					
//Sortie			: int : la valeur de l'entier à l'indice donné en paramètre.
//					
//
//*************************************************************************************************************
int& CVectb::operator[](int nIndice)
{
	return __super::operator[](nIndice - m_nBorneInf);
}