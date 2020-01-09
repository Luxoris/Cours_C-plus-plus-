//******************************************************************************************************
//Fichier			: CVecteur.cpp
//
//Classe			: CVecteur
//******************************************************************************************************
// 09-01-2020 B. FACHE : Version Initiale
//******************************************************************************************************



#include "CVecteur.h"
#include <stdlib.h>
#include <iostream>
#include "CMatrice.h"

//consructeur
CVecteur::CVecteur()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->m_fltZ = 0;

}

CVecteur::CVecteur(float fltX, float fltY, float fltZ) {
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}
//getter
float CVecteur::getX()
{
	return this->m_fltX;
}

float CVecteur::getY()
{
	return this->m_fltY;
}

float CVecteur::getZ()
{
	return this->m_fltZ;
}


//setter
void CVecteur::setX(float fltX)
{
	this->m_fltX = fltX;
}

void CVecteur::setY(float fltY)
{
	this->m_fltY = fltY;
}

void CVecteur::setZ(float fltZ)
{
	this->m_fltZ = fltZ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//*************************************************************************************************************
//Description		: Méthode qui affiche dans le std::cout les coordonnées du vecteur.
//
//Entrée			: 
//					
//Sortie			: Les coordonnées du vecteur dans le std::cout
//
//Note				:
//
//*************************************************************************************************************
void CVecteur::affiche()
{
	std::cout << "X: " << std::fixed << this->getX() << " Y: " << std::fixed << this->getY() << " Z: " << std::fixed << this->getZ() << std::endl;
}


//*************************************************************************************************************
//Description		: Méthode qui retourne le vecteur correspondant au résultat du produit d'un vecteur par une matrice.
//
//Entrée			: CVecteur& vctVecteur : vecteur surlequel est appliqué l'opération
//					: CMatrice& matMatrice : matrice de transformation
//					
//Sortie			: CVecteur Vecteur correspondant au résultat.
//
//Note				: Lève une exception si la matrice n'est pas de dimension 3
//
//*************************************************************************************************************
CVecteur prod(CVecteur& vctVecteur, CMatrice& matMatrice)
{
	CVecteur vctResultat(0,0,0);

	//vérifie que la matrice est de dimensions 3 , 3;
	if (matMatrice.m_nbColonnes == 3 && matMatrice.m_nbLignes == 3) {

		vctResultat.m_fltX += matMatrice.m_vtrValeurs[0][0]* vctVecteur.m_fltX + matMatrice.m_vtrValeurs[0][1]* vctVecteur.m_fltY + matMatrice.m_vtrValeurs[0][2]*vctVecteur.m_fltZ;
		vctResultat.m_fltY += matMatrice.m_vtrValeurs[1][0]* vctVecteur.m_fltX + matMatrice.m_vtrValeurs[1][1]* vctVecteur.m_fltY + matMatrice.m_vtrValeurs[1][2]*vctVecteur.m_fltZ;
		vctResultat.m_fltZ += matMatrice.m_vtrValeurs[2][0]* vctVecteur.m_fltX + matMatrice.m_vtrValeurs[2][1]* vctVecteur.m_fltY + matMatrice.m_vtrValeurs[2][2]*vctVecteur.m_fltZ;
	}
	else {
		throw "Erreur, la matrice n'est pas de dimensions 3,3.";
	}

	return vctResultat;
}
