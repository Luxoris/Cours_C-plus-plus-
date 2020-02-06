//***************************************************************************************************
//Fichier*				: CListe.h
//
//Classe				: CListe
//Description			: Modélisation d'une liste d'un type d'éléments indéfini
//Attributs				:	int m_nNelem = le nombre d'éléments du vecteur
//						:	int * adr = l'adresse de la zone dynamique contenant les éléments
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
	element * suivant; //pointeur sur l'élément suivant
	void* contenu; //pointeur sur un object quelconque
};

class CListe
{
	element* debut;
	element* courant; //pointeur sur l'élément courant

public:
	//constructeur
	CListe();
	//destructeur
	~CListe();
	//méthode de gestion de la liste
	void ajoute(void*);
	void* premier();
	void* prochain();
	int fini();
};
#endif

