#pragma once
#include <iostream>

class CPoint
{
	int m_nX;
	int m_nY;

public:
	//constructeur
	inline CPoint(int nAbs = 0, int nOrd = 0) { 
		m_nX = nAbs; 
		m_nY = nOrd; 
	}

//*************************************************************************************************************
//Description		: Méthode qui affiche dans le std::cout les valeurs du point
//
//Entrée			:
//					
//Sortie			: std::cout : les valeurs du point.
//
//*************************************************************************************************************
	inline void affiche() {
		std::cout << "Coordonnees :" << m_nX << " " << m_nY << std::endl;
	}
};

