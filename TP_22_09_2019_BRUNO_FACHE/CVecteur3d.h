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
	inline CVecteur3d(float fltX=0, float fltY=0, float fltZ=0) {
		this->m_fltX = fltX;
		this->m_fltY = fltY;
		this->m_fltZ = fltZ;
	}

	//getters
	inline float getX() {
		return this->m_fltX;
	}

	inline float getY() {
		return this->m_fltZ;
	}

	inline float getZ() {
		return this->m_fltZ;
	}

	//setters
	inline void setX(const float fltX) {
		this->m_fltX = fltX;
	}

	inline void setY(const float fltY) {
		this->m_fltY = fltY;
	}

	inline void setZ(const float fltZ) {
		this->m_fltZ = fltZ;
	}

	//METHODES

	//bool coincide(const CVecteur3d Vecteur) const; //passage par valeur
	bool coincide(const CVecteur3d *pVecteur) const; //passage par adresse
	bool coincide(const CVecteur3d &Vecteur) const; //passage par référence
};
#endif // !CVECTEUR3D



