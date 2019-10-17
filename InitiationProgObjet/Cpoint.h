#pragma once
//Point dans un plan
class CPoint
{
	

private:	//que dans la classe elle-même
			//quand on ne spécifie rien, elle est en privé par défaut
	
		 //données membres ou attributs membres de la classe
	int nX;
	int nY;
	int nZ;

protected: //dans la classe et chez les enfants de la classe

public://accessible partout, dans et à l'extérieur de la classe
	
	//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

	//assesseurs
	int getX();
	int getY();

	//mutateurs
	void setX(int nX);
	void setY(int nY);
};

