#pragma once
//Point dans un plan
class CPoint
{
	

private:	//que dans la classe elle-m�me
			//quand on ne sp�cifie rien, elle est en priv� par d�faut
	
		 //donn�es membres ou attributs membres de la classe
	int nX;
	int nY;
	int nZ;

	int* pnX; //exemple pour un cas d'allocation dynamique

protected: //dans la classe et chez les enfants de la classe

public://accessible partout, dans et � l'ext�rieur de la classe
	
	//CONSTRUCTEUR
	CPoint();

	//DESTRUCTEUR
	~CPoint();

	CPoint(int nX, int nY, int nZ);


	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	int getX();
	int getY();
	int getZ();

	//mutateurs
	void setX(int nX);
	void setY(int nY);
	void setZ(int nZ);


};

