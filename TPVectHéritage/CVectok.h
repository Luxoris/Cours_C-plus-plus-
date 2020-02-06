//***************************************************************************************************
//Fichier*				: CVectok.h
//
//Classe				: CVectb
//Description			: Classe enfant de CVectok  qui modelise d'un vector (vecteur dynamique d'entiers) et qui peut utliser les opérateurs =.
//Attributs				:	heritage -> int m_nNelem = le nombre d'elements du vecteur
//						:	heritage -> int * adr = l'adresse de la zone dynamique contenant les elements
//						
//Notes					:
//
//***************************************************************************************************
//06-02-2020 B. FACHE Version Initiale.
//***************************************************************************************************
#ifndef CVECTOK_H
#define CVECTOK_H
#pragma once
#include "CVect.h"
class CVectok :
	public CVect
{
public:
	//constructeur
	inline CVectok(int nNelem = 1) :CVect(nNelem){};
	
	//constructeur par recopie
	CVectok(CVectok& vecACopier);
	
	//redéfinition de l'opérateur =
	CVectok& operator = (CVectok& vecACopier);

	//getter qui retourne le nombre déléments
	inline int taille() {
		return m_nNelem;
	}

};
#endif
