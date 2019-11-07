//******************************************************************************************************
//Fichier			: CPoint.cpp
//
//Classe			: CPoint
//******************************************************************************************************
// 01-11-2019 B. FACHE : Version Initiale
//******************************************************************************************************



#include "Cpoint.h"
#include <stdlib.h>
#include <cmath>

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

//*************************************************************************************************************
//Description		: M�thode qui effectue une homoth�tie dont le rapport est fourni en argument.
//
//Entr�e			: float fltK : Le coefficient d'homoth�tie
//					
//Sortie			: Les valeurs des membres du point modifi�s apr�s homoth�tie.
//
//Note				:
//
//*************************************************************************************************************
void CPoint::homothetie(float fltK)
{
	this->setX(fltK * this->getX());
	this->setY(fltK * this->getY());
}

//*************************************************************************************************************
//Description		: M�thode qui effectue une rotation du point avec un ancrage � l'origine � partir d'un angle donn�.
//
//Entr�e			: float fltAngle : L'angle de rotation
//					
//Sortie			: Les valeurs des membres du point modifi�s apr�s rotation
//
//Note				: Le point d'ancrage est l'orgine O(0,0)
//						j'applique la formule x' = x * cos(Angle) - y * sin(Angle) et y' = x * sin(Angle) + y * cos(Angle)
//
//*************************************************************************************************************
void CPoint::rotation(float fltAngle)
{
	float fltAngleRadian = (fltAngle * PI) / 180;	//calcul de la valeur de l'angle en radian
	float fltX = this->getX()*cosf(fltAngleRadian)-this->getY()*sinf(fltAngleRadian);
	float fltY = this->getX()*sinf(fltAngleRadian) - this->getY() * cosf(fltAngleRadian);

	this->setX(fltX);
	this->setY(fltY);
}


//*************************************************************************************************************
//Description		: M�thode qui renvoie rho (la distance � l'origine du point)
//
//Entr�e			:
//					
//Sortie			: float : La distance rho.
//
//Note				: J'applique le th�or�me de Pythagore : tho = sqrt(x^2 + y^2)
//
//*************************************************************************************************************
float CPoint::rho()
{
	return sqrtf(powf(this->getX(),2) + powf(this->getY(),2));
}

//*************************************************************************************************************
//Description		: M�thode qui renvoie theta (l'angle par rapport � l'origine du point) en degr�e.
//
//Entr�e			:
//					
//Sortie			: float : L'angle theta en degr�e.
//
//Note				: J'applique la formule theta = atan2(y,x). Src : wikipedia.
//
//*************************************************************************************************************
float CPoint::theta()
{
	return (atan2f(this->getX(), this->getY())*180) / PI;
}