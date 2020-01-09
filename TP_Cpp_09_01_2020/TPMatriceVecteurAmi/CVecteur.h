
//***************************************************************************************************
//Fichier*				: CVecteur.h
//
//Classe				: CVecteur
//Description			: Modélisation d'un vecteur 3d
//Attributs				: m_fltX : coordonnée X d'un vecteur dans un repère cartésien
//						: m_fltY : coordonnée Y d'un vecteur dans un repère cartésien
//						: m_fltZ : coordonnée Z d'un vecteur dans un repère cartésien
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