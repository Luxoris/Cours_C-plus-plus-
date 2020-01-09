
//***************************************************************************************************
//Fichier*				: CVecteur.h
//
//Classe				: CVecteur
//Description			: Mod�lisation d'un vecteur 3d
//Attributs				: m_fltX : coordonn�e X d'un vecteur dans un rep�re cart�sien
//						: m_fltY : coordonn�e Y d'un vecteur dans un rep�re cart�sien
//						: m_fltZ : coordonn�e Z d'un vecteur dans un rep�re cart�sien
//
//Notes					:
//
//***************************************************************************************************
//09-01-2020 B. FACHE Version Initiale.
//***************************************************************************************************

#pragma once
#ifndef CVECTEUR_H
#define CVECTEUR_H
#include "CMatrice.h"

class CVecteur
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	//CONSTRUCTEUR
	CVecteur();

	CVecteur(float fltX, float fltY, float fltZ);

	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	float getX();
	float getY();
	float getZ();

	//mutateurs
	void setX(float fltX);
	void setY(float fltY);
	void setZ(float fltZ);

	//methodes
	void affiche();

	//fonction Amis
	friend CVecteur prod(CVecteur & vctVecteur, CMatrice & matMatrice); //fonction amie de plusieurs classes
	friend CVecteur CMatrice::prod(CVecteur& vctVecteur); //fonction membre de CMatrice et amie de la classe
};

#endif