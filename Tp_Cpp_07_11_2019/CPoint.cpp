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


//2�me contructeur
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
//Description		: M�thode qui effectue la translation d'un point en fonction de ses deux arguments
//
//Entr�e			: float fltX : translation en X
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
//Description		: M�thode qui retourne l'ordonn�e du point
//
//Entr�e			: 
//					
//Sortie			: float : Ordonn�e du point (m_fltY)
//
//Note				:
//
//*************************************************************************************************************
float CPoint::ordonnee()
{
	return this->getY();
}

//*************************************************************************************************************
//Description		: M�thode qui retourne l'abscisse du point.
//
//Entr�e			: 
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


