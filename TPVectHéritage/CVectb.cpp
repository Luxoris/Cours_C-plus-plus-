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
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'�l�ment du vecteur et intialise la position des bornes;
//
//Entr�e			: int nNelem : Le nombre d'entiers contenu dans le vecteur.
//					
//Sortie			: m_pnAdr est initialis�.
//					: m_nNelem est initialis�.
//					: m_nBorneInf est initilis� � 0;
//					: m_nBorneSup est initialis� � nNelem -1;
//
//*************************************************************************************************************
CVectb::CVectb(int nNelem ) : CVect(nNelem)
{
	m_nBorneInf = 0;
	m_nBorneSup = nNelem - 1;
}

//*************************************************************************************************************
//Description		: Constructeur qui alloue un emplacement correspondant au nombre d'�l�ment du vecteur en fonction de la position des bornes.
//
//Entr�e			: int nBorneInf : le num�ro de la borne inf�rieur
//					: int nBorneSup : le num�ro de la borne sup�rieur
//					
//Sortie			: m_pnAdr est initialis�.
//					: m_nNelem est initialis� � nBorneSup - nBorneInf +1.
//					: m_nBorneInf est initilis� � nBorneInf;
//					: m_nBorneSup est initialis� � nBorneSup;
//
//*************************************************************************************************************

CVectb::CVectb(int nBorneInf, int nBorneSup): CVect(nBorneSup - nBorneInf + 1)
{
	m_nBorneInf = nBorneInf;
	m_nBorneSup = nBorneSup;

}


//*************************************************************************************************************
//Description		: Surcharge de l'op�rateur [] qui renvoie l'�lement � l'indice pass� en param�tre en prenant en compte l'indice des bornes.
//
//Entr�e			: int nIndice : le num�ro de l'indice de l'�l�ment que l'on veut r�cup�rer
//					
//Sortie			: int : la valeur de l'entier � l'indice donn� en param�tre.
//					
//
//*************************************************************************************************************
int& CVectb::operator[](int nIndice)
{
	return __super::operator[](nIndice - m_nBorneInf);
}