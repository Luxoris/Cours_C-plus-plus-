#pragma once
#ifndef CCERCLE_H
#define CCERCLE_H
#include "CPoint.h"
class CCercle
{
private:
	//composition
	CPoint pt;
	int nR;

public:
	CCercle(float, float, float);
	~CCercle();

	friend void CPoint::affichePointCercle(CCercle &c); //fonction membre de la classe point amie de la classe cercle

	friend void affichePointCercle(CPoint& pt, CCercle& c); //fonction amie de plusieurs classes
};
#endif


