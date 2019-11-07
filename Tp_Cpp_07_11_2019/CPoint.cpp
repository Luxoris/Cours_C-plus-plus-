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


//2�me contructeur
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
//Description		: M�thode qui effectue la translation d'un point en fonction de ses deux arguments
//
//Entr�e			: float fltX : translation en X
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
//Description		: M�thode qui retourne l'ordonn�e du point
//
//Entr�e			: 
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
//Description		: M�thode qui retourne l'abscisse du point.
//
//Entr�e			: 
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
//Description		: M�thode qui effectue une rotation du point avec un ancrage � l'origine � partir d'un angle donn�.
//
//Entr�e			: float fltAngle : L'angle de rotation
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
//Description		: M�thode qui renvoie rho (la distance � l'origine du point)
//
//Entr�e			:
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
//Description		: M�thode qui renvoie theta (l'angle par rapport � l'origine du point) en degr�e.
//
//Entr�e			:
//					
//Sortie			: float : L'angle theta en degr�e.
//
//Note				: 
//
//*************************************************************************************************************
float CPoint::theta()
{
	return this->getTheta();
}