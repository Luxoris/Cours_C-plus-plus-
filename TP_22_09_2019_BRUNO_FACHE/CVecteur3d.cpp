//***************************************************************************************************
//Fichier*				: CVecteur3d.cpp
//
//Classe				: CVecteur3d
//***************************************************************************************************
//22-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#include "CVecteur3d.h"

//CONSTRUCTEURS
CVecteur3d::CVecteur3d()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->m_fltZ = 0;
}

CVecteur3d::CVecteur3d(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}
