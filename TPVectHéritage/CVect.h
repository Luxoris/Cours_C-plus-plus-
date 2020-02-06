//***************************************************************************************************
//Fichier*				: CVect.h
//
//Classe				: CVect
//Description			: Mod�lisation d'un vector (vecteur dynamique d'entiers)
//Attributs				:	int m_nNelem = le nombre d'�l�ments du vecteur
//						:	int * adr = l'adresse de la zone dynamique contenant les �l�ments
//
//Notes					:
//
//***************************************************************************************************
//06-02-2020 B. FACHE Version Initiale.
//***************************************************************************************************

#ifndef CVECT_H
#define CVECT_H
#pragma once
class CVect
{
private:
	int m_nNelem;
	int * m_pnAdr;

public:
	CVect(int nNelem = 1);
	~CVect();
	int & operator [] (int nIndice);

};

#endif