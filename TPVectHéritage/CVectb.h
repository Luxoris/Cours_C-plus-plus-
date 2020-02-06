//***************************************************************************************************
//Fichier*				: CVectb.h
//
//Classe				: CVectb
//Description			: Classe enfant de CVect  qui mod�lise d'un vector (vecteur dynamique d'entiers dont les bornes peuvent �tre fix�es).
//Attributs				:	h�ritage -> int m_nNelem = le nombre d'�l�ments du vecteur
//						:	h�ritage -> int * adr = l'adresse de la zone dynamique contenant les �l�ments
//						:	int m_nBorneInf = la valeur de la borne inf�rieur
//						:	int m_nBorneSup = la valeur de la borne sup�rieur
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