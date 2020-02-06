//***************************************************************************************************
//Fichier*				: CVectb.h
//
//Classe				: CVectb
//Description			: Classe enfant de CVect  qui modélise d'un vector (vecteur dynamique d'entiers dont les bornes peuvent être fixées).
//Attributs				:	héritage -> int m_nNelem = le nombre d'éléments du vecteur
//						:	héritage -> int * adr = l'adresse de la zone dynamique contenant les éléments
//						:	int m_nBorneInf = la valeur de la borne inférieur
//						:	int m_nBorneSup = la valeur de la borne supérieur
//						
//Notes					:
//
//***************************************************************************************************
//06-02-2020 B. FACHE Version Initiale.
//***************************************************************************************************
#ifndef CVECTB_H
#define CVECTB_H
#pragma once
#include "CVect.h"
class CVectb :
	public CVect
{
private:
	int m_nBorneInf;
	int m_nBorneSup;
public:
	CVectb(int nNelem = 1);
	CVectb(int nBorneInf, int nBorneSup);
	int& operator [] (int nIndice);
};

#endif