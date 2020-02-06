//***************************************************************************************************
//Fichier*				: CListe.h
//
//Classe				: CListe
//Description			: Mod�lisation d'une liste d'un type d'�l�ments ind�fini
//Attributs				:	int m_nNelem = le nombre d'�l�ments du vecteur
//						:	int * adr = l'adresse de la zone dynamique contenant les �l�ments
//
//Notes					:
//
//***************************************************************************************************
//06-02-2020 B. FACHE Version Initiale.
//***************************************************************************************************
#ifndef CLISTE_H
#define CLISTE_H
#pragma once
struct element	//structure d'un element de la liste
{
	element * suivant; //pointeur sur l'�l�ment suivant
	void* contenu; //pointeur sur un object quelconque
};

class CListe
{
	element* debut;
	element* courant; //pointeur sur l'�l�ment courant

public:
	//constructeur
	CListe();
	//destructeur
	~CListe();
	//m�thode de gestion de la liste
	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};
#endif

