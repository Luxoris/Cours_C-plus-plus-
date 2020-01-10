#include "CCercle.h"

CCercle::CCercle(float fltX, float fltY, float fltR):pt(fltX,fltY)	//fait appel au constructeur du point et lui fait passer nX et nY
{
	this->nR = fltR;
}

CCercle::~CCercle()
{
}
