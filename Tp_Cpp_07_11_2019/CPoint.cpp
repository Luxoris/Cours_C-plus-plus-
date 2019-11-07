//******************************************************************************************************
//Fichier			: CPoint.cpp
//
//Classe			: CPoint
//******************************************************************************************************
// 01-11-2019 B. FACHE : Version Initiale
//******************************************************************************************************



#include "Cpoint.h"
#include <stdlib.h>

//consructeur
CPoint::CPoint()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
}


//2ème contructeur
CPoint::CPoint(float fltX, float fltY)
{

	this->m_fltX = fltX;
	this->m_fltY = fltY;
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


//setter
void CPoint::setX(float fltX)
{
	this->m_fltX = fltX;
}

void CPoint::setY(float fltY)
{
	this->m_fltY = fltY;
}

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
//Description		: Méthode qui retourne l'ordonnée du point
//
//Entrée			: 
//					
//Sortie			: float : Ordonnée du point (m_fltY)
//
//Note				:
//
//*************************************************************************************************************
float CPoint::ordonnee()
{
	return this->getY();
}

//*************************************************************************************************************
//Description		: Méthode qui retourne l'abscisse du point.
//
//Entrée			: 
//					
//Sortie			: float : Abscisse du point (m_fltX)
//
//Note				:
//
//*************************************************************************************************************
float CPoint::abscisse()
{
	return this->getX();
}


