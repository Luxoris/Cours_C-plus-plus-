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
//Description		: Méthode qui effectue vérifie si deux points coincides.
//
//Entrée			: Le point en passage par valeurs.
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
//Description		: Méthode qui effectue vérifie si deux points coincides.
//
//Entrée			: Le point en passage par adresse.
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
//Description		: Méthode qui effectue vérifie si deux points coincides.
//
//Entrée			: Le point en passage par référence.
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
//Description		: Méthode qui renvoie la norme d'un vecteur.
//
//Entrée			: 
//
//
//Sortie			: float correspondant à la norme.
//
//Note				: La norme d'un vecteur tridimensionnel se calcul avec la formule sqrt(x² + y² + z²). 
//
//*************************************************************************************************************
float CVecteur3d::norme() const
{
	return sqrtf(m_fltX * m_fltX + m_fltY * m_fltY + m_fltZ * m_fltZ);
}


//*************************************************************************************************************
//Description		: Méthode qui renvoie les valeurs du vecteur qui a la plus grande norme.
//
//Entrée			: CVecteur3d Vecteur 2 : Le deuxième vecteur à comparer.
//
//
//Sortie			: CVecteur3d correspondant aux valeurs du Vecteur qui a la plus grande norme.
//
//Note				: Passage par Valeur //Si la norme est la même, renvoie un vecteur dont les membres valent 0.
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
//Description		: Méthode qui renvoie la référence du vecteur qui a la plus grande norme.
//
//Entrée			: CVecteur3d& Vecteur 2 : La référence du deuxième vecteur à comparer.
//
//
//Sortie			: CVecteur3d correspondant à la référence du vecteur qui a la plus grande norme.
//
//Note				: Passage par référence //Si la norme est la même, en cas d'égalité, renvoie la référence du vecteur appelant la méthode.
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
			//return *(new CVecteur3d(0, 0, 0));	//pas possible car l'objet n'existe que dans la procédure, (les valeurs retournés par l'affichage seront aléatoires)
													//possibilité de créer un membre de classe static ayant pour valeur un vecteur avec des valeurs nulles et de renvoyé sa référence.
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
//Description		: Méthode qui renvoie l'adresse du vecteur qui a la plus grande norme.
//
//Entrée			: CVecteur3d* Vecteur 2 : L'adresse du deuxième vecteur à comparer.
//
//
//Sortie			: CVecteur3d correspondant à l'adresse du vecteur qui a la plus grande norme.
//
//Note				: Passage par référence //Si la norme est la même, en cas d'égalité, renvoie l'adresse du vecteur appelant la méthode.
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
			//return (new CVecteur3d(0, 0, 0)); //pas possible car l'objet n'existe que dans la procédure, (les valeurs retournés par l'affichage seront aléatoires)
												//possibilité de créer un membre de classe static ayant pour valeur un vecteur avec des valeurs nulles et de renvoyé sa référence.
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
//Description		: Méthode qui renvoie la chaine correspondant aux valeurs du vecteur CVecteur3D
//
//Entrée			:
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
//Description		: Méthode qui affiche les valeurs d'un vecteur CVecteur3D
//
//Entrée			:
//
//
//Sortie			: Les valeurs affichées dans le std::cout;
//
//Note				: 
//
//*************************************************************************************************************
void CVecteur3d::affiche() const
{
	std::cout << this->toString() <<std::endl;
}