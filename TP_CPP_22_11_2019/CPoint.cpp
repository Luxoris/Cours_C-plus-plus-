//******************************************************************************************************
//Fichier			: CPoint.cpp
//
//Classe			: CPoint
//******************************************************************************************************
// 01-11-2019 B. FACHE : Version Initiale
//******************************************************************************************************



#include "CPoint.h"
#include <stdlib.h>
#include <iostream>
#include "CCercle.h"


//spécification des valeurs d'initialisation des membres static
int CPoint::nCptPoint = 0;

//SURCHARGE OPERATEUR
bool operator==(CPoint const& pt1, CPoint const& pt2)
{
	return coincide(pt1, pt2);
}

bool operator!=(CPoint const& pt1, CPoint const& pt2)
{
	return !(pt1==pt2);
}

const CPoint operator+(CPoint & pt1, CPoint & pt2)
{
	return CPoint(pt1.getX() + pt2.getX(), pt1.getY() + pt2.getY());
}



CPoint CPoint::operator+=(CPoint& pt2)
{
	return *this + pt2;
}

//destructeur
CPoint::~CPoint()
{
	//delete this->cColor;
}

//consructeur
CPoint::CPoint()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	/*this->cColor = new char[6];
	strcpy_s(this->cColor, 6, "black");*/
	nCptPoint++;
}

/*CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->cColor = new char[6];
	strcpy_s(this->cColor, 6, "black");
	nCptPoint++;
}*/

//2ème constructeur

CPoint::CPoint(float fltX, float fltY /* , char cColor[]*/){
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	nCptPoint++;
	/*this->cColor = new char[strlen(cColor) + 1];
	strcpy_s(this->cColor, strlen(cColor) + 1, cColor);*/
}

//Constructeur par copie
CPoint::CPoint(const CPoint& p)
{
	this->m_fltX = p.m_fltX;
	this->m_fltY = p.m_fltY;
	nCptPoint++;
	/*this->cColor = new char[strlen(p.cColor) + 1];
	strcpy_s(this->cColor, strlen(p.cColor) + 1, p.cColor);*/
}

//getter
float CPoint::getX()
{
	return this->m_fltX;
}

float CPoint::getY()
{
	return this->m_fltY;
}

int CPoint::getCptPoint()
{
	return nCptPoint;
}

/*char* CPoint::getColor() {
	return this->cColor;
}*/

//setter
void CPoint::setX(float fltX)
{
	this->m_fltX = fltX;
}

void CPoint::setY(float fltY)
{
	this->m_fltY = fltY;
}

/*void CPoint::setColor(char cColor[])
{
	strcpy_s(this->cColor, strlen(this->cColor) + 1, cColor);
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//*************************************************************************************************************
//Description		: Méthode qui effectue la translation d'un point en fonction de ses deux arguments
//
//Entrée			: float fltX : translation en X
//					: float fltY : translation en Y
//
//Sortie			:
//
//Note				:
//
//*************************************************************************************************************
void CPoint::deplace(float fltX, float fltY)
{
	this->setX(this->getX() + fltX);
	this->setY(this->getY() + fltY);
}


//*************************************************************************************************************
//Description		: Méthode qui affiche dans le std::cout les coordonnées du point.
//
//Entrée			: 
//					
//Sortie			: Les coordonnées du point dans le std::cout
//
//Note				:
//
//*************************************************************************************************************
void CPoint::affiche()
{
	std::cout << "X: " << std::fixed << this->getX() << " Y: " << std::fixed << this->getY() << std::endl;
	std::cout << "Le nombre de point cree est : " << this->getCptPoint() << std::endl;
}

//fonction membre de la classe point amie de la classe cercle
void CPoint::affichePointCercle(CCercle &c)
{
	std::cout << "x : " << this->m_fltX;
	std::cout << " y : " << this->m_fltY;
	std::cout << " Rayon : " << c.nR <<std::endl;
}


//fonction indépendante de la classe mais amis d'une classe.
bool coincide(const CPoint& p, const CPoint& q)
{
	return ((p.m_fltX == q.m_fltX) && (p.m_fltY == q.m_fltY));
}

void affichePointCercle(CPoint& pt, CCercle& c)
{
	std::cout << "x : " << pt.m_fltX;
	std::cout << " y : " << pt.m_fltY;
	std::cout << " Rayon : " << c.nR <<std::endl;
}
