#pragma once

#include "CPoint.h"
#include <iostream>
typedef enum eCouleur {rouge, vert, bleu} eCouleur;
class PointCouleur:public CPoint
{
private:
	eCouleur m_tcolCouleur;

public:
	inline PointCouleur() : CPoint(), m_tcolCouleur(rouge) {};
	inline PointCouleur(float fltX, float fltY, eCouleur coul) : CPoint(fltX,fltY), m_tcolCouleur(coul) {}
	inline void affiche(){
		__super::affiche();
		std::cout << "La couleur est : " << m_tcolCouleur << std::endl;
	}
};

