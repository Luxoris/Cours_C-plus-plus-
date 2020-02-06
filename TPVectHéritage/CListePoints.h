#include"CListe.h"
#include "CPoint.h"
#pragma once
class CListePoints :
	public CListe, CPoint
{
public:
	//constructeur par défaut
	inline CListePoints() :CListe(), CPoint() {};

	//méthodes
	void affiche();
};

