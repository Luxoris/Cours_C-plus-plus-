//***************************************************************************************************
//Fichier*				: CVecteur3d.cpp
//
//Classe				: CVecteur3d
//***************************************************************************************************
//22-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#include "CVecteur3d.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par valeurs.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
/*bool CVecteur3d::coincide(const CVecteur3d Vecteur) const
{
	return (this->m_fltX == Vecteur.m_fltX && this->m_fltY == Vecteur.m_fltY && this->m_fltZ == Vecteur.m_fltZ);
}*/

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par adresse.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
bool CVecteur3d::coincide(const CVecteur3d * pVecteur) const
{
	return (this->m_fltX == pVecteur->m_fltX && this->m_fltY == pVecteur->m_fltY && this->m_fltZ == pVecteur->m_fltZ);
}

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par r�f�rence.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
bool CVecteur3d::coincide(const CVecteur3d &Vecteur) const
{
	return (this->m_fltX == Vecteur.m_fltX && this->m_fltY == Vecteur.m_fltY && this->m_fltZ == Vecteur.m_fltZ);
}
