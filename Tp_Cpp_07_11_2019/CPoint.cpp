//******************************************************************************************************
//Fichier			: CPoint.cpp
//
//Classe			: CPoint
//******************************************************************************************************
// 01-11-2019 B. FACHE : Version Initiale
//******************************************************************************************************



#include "Cpoint.h"
#include <stdlib.h>
#include <iostream>

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
}


