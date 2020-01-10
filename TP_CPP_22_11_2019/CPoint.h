//***************************************************************************************************
//Fichier*				: CPoint.h
//
//Classe				: Cpoint
//Description			: Gestion simple d'un point dans un plan
//Attributs				: m_fltX : coordonnée X d'un point dans un repère cartésien
//						: m_fltY : coordonnée Y d'un point dans un repère cartésien
//
//Notes					:
//
//***************************************************************************************************
//01-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CCercle; //forward déclaration

//surcharge opérateur
bool operator==(CPoint const& pt1, CPoint const& pt2);
bool operator!=(CPoint const& pt1, CPoint const& pt2);
const CPoint operator+(CPoint & pt1, CPoint & pt2);



class CPoint
{
private:
	static int nCptPoint;
	float m_fltX;
	float m_fltY;
	//char* cColor;

public:
	//opérateur de raccourci
	CPoint operator+=(CPoint& pt2);


	//destructeur
	~CPoint();

	//CONSTRUCTEUR
	CPoint();

	//CPoint(float fltX, float fltY) :m_fltX(fltX), m_fltY(fltY){};

	CPoint(float fltX, float fltY/*, char cColor[]*/);

	//Constructeur par copie
	CPoint(const CPoint& p);


	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	float getX();
	float getY();
	static int getCptPoint();
	char* getColor();

	//mutateurs
	void setX(float fltX);
	void setY(float fltY);
	void setColor(char cColor[]);

	//methodes
	void deplace(float fltX, float fltY);
	void affiche();

	//FONCTION AMIS
	friend bool coincide(const CPoint& p, const CPoint& q); //fonction indépendante de la classe mais amis d'une classe.

	void affichePointCercle(CCercle &c); //fonction membre de la classe point amie de la classe cercle

	friend void affichePointCercle(CPoint& pt, CCercle& c); //fonction amie de plusieurs classes
};
#endif