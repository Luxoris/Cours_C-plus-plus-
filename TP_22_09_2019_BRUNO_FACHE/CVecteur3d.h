//***************************************************************************************************
//Fichier*				: CVecteur3d.h
//
//Classe				: CVecteur3d
//Description			: Gestion d'un vecteur 3d dans l'espace.
//Attributs				: m_fltX : coordonnée X du vecteur
//						: m_fltY : coordonnée Y du vecteur
//						: m_fltZ : coordonnée Z du vecteur
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
	//constructeurs surdéfinies
	CVecteur3d(float, float, float);
};
#endif // !CVECTEUR3D



