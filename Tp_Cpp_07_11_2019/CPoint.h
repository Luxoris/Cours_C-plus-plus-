//***************************************************************************************************
//Fichier*				: CPoint.h
//
//Classe				: Cpoint
//Description			: Gestion simple d'un point dans un plan
//Attributs				: m_fltX : coordonnée X d'un point dans un repère cartésien
//						: m_flt_y : coordonnée Y d'un point dans un repère cartésien
//
//Notes					:
//
//***************************************************************************************************
//01-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint
{
private:
	float m_fltX;
	float m_fltY;

public:
	//Declaration des constantes de classe.
	const float PI = 3.14159;

	//CONSTRUCTEUR
	CPoint();

	CPoint(float fltX, float fltY);


	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	float getX();
	float getY();

	//mutateurs
	void setX(float fltX);
	void setY(float fltY);

	//methodes
	void deplace(float fltX, float fltY);
	float ordonnee();
	float abscisse();
	void homothetie(float fltK);
	void rotation(float fltAngle);
	float rho();
	float theta();
};
#endif
