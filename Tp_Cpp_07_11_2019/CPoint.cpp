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
	this->m_fltRho = 0;
	this->m_fltTheta = 0;
}


//2ème contructeur
CPoint::CPoint(float fltX, float fltY)
{
	this->m_fltRho = sqrtf(powf(fltX, 2) + powf(fltY, 2));
	this->m_fltTheta = (atan2f(fltY, fltX) * 180) / PI;
}

//getter
float CPoint::getRho()
{
	return this->m_fltRho;
}

float CPoint::getTheta()
{
	return this->m_fltTheta;
}


//setter
void CPoint::setRho(float fltRho)
{
	this->m_fltRho = fltRho;
}

void CPoint::setTheta(float fltTheta)
{
	this->m_fltTheta = fltTheta;
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
//Note				: Passe par les coordonn�es polaires, d�place puis enregistre les points en coordonn�es polaires.
//
//*************************************************************************************************************
void CPoint::deplace(float fltX, float fltY)
{
	float fltXtmp;
	float fltYtmp;

	//calcul des coordonn�es polaires du point d�plac�
	fltXtmp = this->abscisse() + fltX;
	fltYtmp = this->ordonnee() + fltY;
	
	this->setRho(sqrtf(powf(fltXtmp, 2) + powf(fltYtmp, 2)));
	this->setTheta((atan2f(fltYtmp, fltXtmp) * 180) / PI);
}


//*************************************************************************************************************
//Description		: Méthode qui retourne l'ordonnée du point
//
//Entrée			: 
//					
//Sortie			: float : Ordonn�e du point
//
//Note				: y = rho * sin (theta)
//
//*************************************************************************************************************
float CPoint::ordonnee()
{
	return this->getRho() * sinf((this->getTheta()*PI)/180);
}

//*************************************************************************************************************
//Description		: Méthode qui retourne l'abscisse du point.
//
//Entrée			: 
//					
//Sortie			: float : Abscisse du point
//
//Note				: x = rho * cos (theta)
//
//*************************************************************************************************************
float CPoint::abscisse()
{
	return this->getRho() * cosf((this->getTheta()*PI)/180);
}

//*************************************************************************************************************
//Description		: Méthode qui effectue une homothétie dont le rapport est fourni en argument.
//
//Entrée			: float fltK : Le coefficient d'homothétie
//					
//Sortie			: Les valeurs des membres du point modifiés après homothétie.
//
//Note				:
//
//*************************************************************************************************************
void CPoint::homothetie(float fltK)
{
	float fltXtmp;
	float fltYtmp;

	//calcul des coordonn�es polaires du point d�plac�
	fltXtmp = fltK * this->abscisse();
	fltYtmp = fltK * this->ordonnee();

	//enregistrement des valeurs en coordonn�es polaires
	this->setRho(sqrtf(powf(fltXtmp, 2) + powf(fltYtmp, 2)));
	this->setTheta((atan2f(fltYtmp, fltXtmp) * 180) / PI);
}

//*************************************************************************************************************
//Description		: Méthode qui effectue une rotation du point avec un ancrage à l'origine à partir d'un angle donné.
//
//Entrée			: float fltAngle : L'angle de rotation
//					
//Sortie			: Les valeurs des membres du point modifi�s apr�s rotation.
//
//Note				: Le point d'ancrage est l'orgine O(0,0)
//						j'applique la formule x' = x * cos(Angle) - y * sin(Angle) et y' = x * sin(Angle) + y * cos(Angle)
//
//*************************************************************************************************************
void CPoint::rotation(float fltAngle)
{
	float fltAngleRadian = (fltAngle * PI) / 180;	//calcul de la valeur de l'angle en radian
	float fltX = this->abscisse()*cosf(fltAngleRadian)-this->ordonnee()*sinf(fltAngleRadian);
	float fltY = this->abscisse()*sinf(fltAngleRadian) - this->ordonnee() * cosf(fltAngleRadian);
	
	//Enregistrement en coordonn�es polaires
	this->setRho(sqrtf(powf(fltX, 2) + powf(fltY, 2)));
	this->setTheta((atan2f(fltY, fltX) * 180) / PI);
}


//*************************************************************************************************************
//Description		: Méthode qui renvoie rho (la distance à l'origine du point)
//
//Entrée			:
//					
//Sortie			: float : La distance rho.
//
//Note				:
//
//*************************************************************************************************************
float CPoint::rho()
{
	return this->getRho();
}

//*************************************************************************************************************
//Description		: Méthode qui renvoie theta (l'angle par rapport à l'origine du point) en degrée.
//
//Entrée			:
//					
//Sortie			: float : L'angle theta en degrée.
//
//Note				: 
//
//*************************************************************************************************************
float CPoint::theta()
{
	return this->getTheta();
}
