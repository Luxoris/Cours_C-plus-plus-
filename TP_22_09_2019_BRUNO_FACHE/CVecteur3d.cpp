//***************************************************************************************************
//Fichier*				: CVecteur3d.cpp
//
//Classe				: CVecteur3d
//***************************************************************************************************
//22-11-2019 B. FACHE Version Initiale.
//***************************************************************************************************

#include "CVecteur3d.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par valeurs.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
/*bool CVecteur3d::coincide(const CVecteur3d Vecteur) const
{
	return (this->m_fltX == Vecteur.m_fltX && this->m_fltY == Vecteur.m_fltY && this->m_fltZ == Vecteur.m_fltZ);
}*/

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par adresse.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
bool CVecteur3d::coincide(const CVecteur3d * pVecteur) const
{
	return (this->m_fltX == pVecteur->m_fltX && this->m_fltY == pVecteur->m_fltY && this->m_fltZ == pVecteur->m_fltZ);
}

//*************************************************************************************************************
//Description		: M�thode qui effectue v�rifie si deux points coincides.
//
//Entr�e			: Le point en passage par r�f�rence.
//
//
//Sortie			: Un bool true si coincide, false sinon.
//
//Note				:
//
//*************************************************************************************************************
bool CVecteur3d::coincide(const CVecteur3d &Vecteur) const
{
	return (this->m_fltX == Vecteur.m_fltX && this->m_fltY == Vecteur.m_fltY && this->m_fltZ == Vecteur.m_fltZ);
}


//*************************************************************************************************************
//Description		: M�thode qui renvoie la norme d'un vecteur.
//
//Entr�e			: 
//
//
//Sortie			: float correspondant � la norme.
//
//Note				: La norme d'un vecteur tridimensionnel se calcul avec la formule sqrt(x� + y� + z�). 
//
//*************************************************************************************************************
float CVecteur3d::norme() const
{
	return sqrtf(m_fltX * m_fltX + m_fltY * m_fltY + m_fltZ * m_fltZ);
}


//*************************************************************************************************************
//Description		: M�thode qui renvoie les valeurs du vecteur qui a la plus grande norme.
//
//Entr�e			: CVecteur3d Vecteur 2 : Le deuxi�me vecteur � comparer.
//
//
//Sortie			: CVecteur3d correspondant aux valeurs du Vecteur qui a la plus grande norme.
//
//Note				: Passage par Valeur //Si la norme est la m�me, renvoie un vecteur dont les membres valent 0.
//
//*************************************************************************************************************
/*CVecteur3d CVecteur3d::normax(CVecteur3d Vecteur2) const
{
	if (this->norme() > Vecteur2.norme()) {
		return *this;
	}
	else
	{
		if (this->norme() == Vecteur2.norme())
		{
			return CVecteur3d(0, 0, 0);
		}
		else
		{
			return Vecteur2;
		}
	}
}*/

//*************************************************************************************************************
//Description		: M�thode qui renvoie la r�f�rence du vecteur qui a la plus grande norme.
//
//Entr�e			: CVecteur3d& Vecteur 2 : La r�f�rence du deuxi�me vecteur � comparer.
//
//
//Sortie			: CVecteur3d correspondant � la r�f�rence du vecteur qui a la plus grande norme.
//
//Note				: Passage par r�f�rence //Si la norme est la m�me, en cas d'�galit�, renvoie la r�f�rence du vecteur appelant la m�thode.
//
//*************************************************************************************************************
const CVecteur3d& CVecteur3d::normax(CVecteur3d& Vecteur2) const
{
	if (this->norme() > Vecteur2.norme()) {
		return *this;
	}
	else
	{
		if (this->norme() == Vecteur2.norme())
		{
			//return *(new CVecteur3d(0, 0, 0));	//pas possible car l'objet n'existe que dans la proc�dure, (les valeurs retourn�s par l'affichage seront al�atoires)
													//possibilit� de cr�er un membre de classe static ayant pour valeur un vecteur avec des valeurs nulles et de renvoy� sa r�f�rence.
													//ou d'utiliser un gestion des exceptions
			return *this;
		}
		else
		{
			return Vecteur2;
		}
	}
}

//*************************************************************************************************************
//Description		: M�thode qui renvoie l'adresse du vecteur qui a la plus grande norme.
//
//Entr�e			: CVecteur3d* Vecteur 2 : L'adresse du deuxi�me vecteur � comparer.
//
//
//Sortie			: CVecteur3d correspondant � l'adresse du vecteur qui a la plus grande norme.
//
//Note				: Passage par r�f�rence //Si la norme est la m�me, en cas d'�galit�, renvoie l'adresse du vecteur appelant la m�thode.
//
//*************************************************************************************************************
const CVecteur3d* CVecteur3d::normax(CVecteur3d* Vecteur2) const
{
	if (this->norme() > Vecteur2->norme()) {
		return this;
	}
	else
	{
		if (this->norme() == Vecteur2->norme())
		{
			//return (new CVecteur3d(0, 0, 0)); //pas possible car l'objet n'existe que dans la proc�dure, (les valeurs retourn�s par l'affichage seront al�atoires)
												//possibilit� de cr�er un membre de classe static ayant pour valeur un vecteur avec des valeurs nulles et de renvoy� sa r�f�rence.
												//ou d'utiliser un gestion des exceptions
			return this;
		}
		else
		{
			return Vecteur2;
		}
	}
}


//*************************************************************************************************************
//Description		: M�thode qui renvoie la chaine correspondant aux valeurs du vecteur CVecteur3D
//
//Entr�e			:
//
//
//Sortie			: std::string : La chaine avec les valeurs de l'objet.
//
//Note				: 
//
//*************************************************************************************************************
std::string CVecteur3d::toString() const
{
	return "CVecteur3d < "
		+ std::to_string(this->m_fltX) + " , "
		+ std::to_string(this->m_fltY) + " , "
		+ std::to_string(this->m_fltZ) + " >";
}


//*************************************************************************************************************
//Description		: M�thode qui affiche les valeurs d'un vecteur CVecteur3D
//
//Entr�e			:
//
//
//Sortie			: Les valeurs affich�es dans le std::cout;
//
//Note				: 
//
//*************************************************************************************************************
void CVecteur3d::affiche() const
{
	std::cout << this->toString() <<std::endl;
}