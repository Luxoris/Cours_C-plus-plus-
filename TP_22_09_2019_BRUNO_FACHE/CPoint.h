//***************************************************************************************************
//Fichier*				: CPoint.h
//
//Classe				: Cpoint
//Description			: Gestion simple d'un point dans un plan
//Attributs				: m_fltX : coordonnée X d'un point dans un repère cartésien
//						: m_flt_y : coordonnée Y d'un point dans un repère cartésien
//
//Notes					:
//
//***************************************************************************************************
//01-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint
{
private:
	static int nCptPoint;
	float m_fltX;
	float m_fltY;

public:
	//CONSTRUCTEUR
	inline CPoint(float fltX=0, float fltY=0) {
		this->m_fltX = fltX;
		this->m_fltY = fltY;
		CPoint::nCptPoint++; //incrémentation du nombre de point
	}

	//DESTRUCTEUR
	inline ~CPoint() {
		CPoint::nCptPoint--; //décrémente le nombre de point.
	}


	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	float getX();
	float getY();

	//mutateurs
	void setX(float fltX);
	void setY(float fltY);

	//methodes
	static int nombre();
	void affiche();
};
#endif