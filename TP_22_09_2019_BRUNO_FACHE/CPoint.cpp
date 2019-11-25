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

//spécification des valeurs des embres static
int CPoint::nCptPoint = 0;

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
//Description		: Méthode qui renvoie la valeur de nCptPoint càd le nombre de point existant à un instant t;
//
//Entrée			: 
//					
//Sortie			: int : Le nombre de point existant à un instant t;
//
//Note				:
//
//*************************************************************************************************************
int CPoint::nombre()
{
	return nCptPoint;
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
