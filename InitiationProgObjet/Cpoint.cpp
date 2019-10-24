#include "Cpoint.h"
#include <stdlib.h>

CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->nZ = 0;

	//this->pnX = (int*)malloc(sizeof(int));
	this->pnX = new int;
	*pnX = 0;
}

CPoint::~CPoint()
{
	//on ne met rien car toutes les variables sont statiques (cad dans la pile)


	//cas alloc dynamique
	//free(this->pnX);
	delete pnX;
}

CPoint::CPoint(int nX, int nY, int nZ)
{

	this->nX = nX;
	this->nY = nY;
	this->nZ = nZ;

	this->pnX = (int*)malloc(sizeof(int));
	
}

int CPoint::getX()
{
	return this->nX;
}

int CPoint::getY()
{
	return this->nY;
}

int CPoint::getZ()
{
	return this->nZ;
}

void CPoint::setX(int nX)
{
	this->nX = nX;
}

void CPoint::setY(int nY)
{
	this->nY = nY;
}

void CPoint::setZ(int nZ)
{
	this->nZ = nZ;
}
