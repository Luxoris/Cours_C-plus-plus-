//******************************************************************************************************
//Fichier			: CVectok.cpp
//
//Classe			: CVectok extends CVect
//******************************************************************************************************
// 06-02-2020 B. FACHE : Version Initiale
//******************************************************************************************************

#include "CVectok.h"

//*************************************************************************************************************
//Description		: Constructeur qui intialise le vecteur puis copie les valeurs.
//
//Entree			: &CVectok vecACopier : le vecteur à copier
//					
//Sortie			: m_pnAdr est initialisee.
//					: m_nNelem est initialisee.
//					: m_nBorneInf est initilisee 0;
//					: m_nBorneSup est initialisee nNelem -1;
//
//*************************************************************************************************************
CVectok::CVectok(CVectok& vecACopier):CVect(vecACopier.m_nNelem) {
	for (int i = 0; i < vecACopier.m_nNelem; i++) {
		this->operator[](i) = vecACopier[i];
	}
}

//*************************************************************************************************************
//Description		: Opérateur qui appel le constructeur par recopie et retourne le vecteur crée.
//
//Entree			: &CVectok vecACopier : le vecteur à copier
//					
//Sortie			: m_pnAdr est initialisee.
//					: m_nNelem est initialisee.
//					: m_nBorneInf est initilisee 0;
//					: m_nBorneSup est initialisee nNelem -1;
//
//*************************************************************************************************************
CVectok& CVectok::operator=(CVectok& vecACopier)
{

	if (this != &vecACopier) {
		delete this->m_pnAdr;
		this->m_pnAdr = new int[vecACopier.m_nNelem];
		for (int i = 0; i < vecACopier.m_nNelem; i++) {
			this->operator[](i) = vecACopier[i];
		}

	}
	return *this;
}
