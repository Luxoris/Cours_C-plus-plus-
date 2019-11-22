//***************************************************************************************************
//Fichier*				: CVecteur3d.h
//
//Classe				: CVecteur3d
//Description			: Gestion d'un vecteur 3d dans l'espace.
//Attributs				: m_fltX : coordonn�e X du vecteur
//						: m_fltY : coordonn�e Y du vecteur
//						: m_fltZ : coordonn�e Z du vecteur
//
//Notes					:
//
//***************************************************************************************************
//22-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************
#pragma once
#ifndef CVECTEUR3D_H
#define CVECTEUR3D_H
class CVecteur3d
{
private:

	//ATTRIBUTS
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	//CONSTRUCTEURS
	CVecteur3d();
	//constructeurs surd�finies
	CVecteur3d(float, float, float);
};
#endif // !CVECTEUR3D



