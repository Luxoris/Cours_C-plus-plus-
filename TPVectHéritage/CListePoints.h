#include"CListe.h"
#include "CPoint.h"
#pragma once
class CListePoints :
	public CListe, CPoint
{
public:
	//constructeur par d�faut
	inline CListePoints() :CListe(), CPoint() {};

	//m�thodes
	void affiche();
};

