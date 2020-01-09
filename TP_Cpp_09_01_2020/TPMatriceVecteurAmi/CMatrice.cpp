//******************************************************************************************************
//Fichier			: CMatrice.cpp
//
//Classe			: CMatrice
//******************************************************************************************************
// 09-01-2020 B. FACHE : Version Initiale
//******************************************************************************************************


#include "CMatrice.h"
#include <stdlib.h>
#include <iostream>
#include "CVecteur.h"

//CONSTRUCTEURS

//*************************************************************************************************************
//Description		: Constructeur par d�faut qui instancie une matrice de dimensions 1, 1 � la valeur 0;
//
//Entr�e			: //
//					
//Sortie			: La Matrice intialis�e.
//
//Note				:
//
//*************************************************************************************************************
CMatrice::CMatrice()
{
	this->m_nbColonnes = 1; //une matrice a une dimension minimum de 1
	this->m_nbLignes = 1; //une matrice a une dimension minimum de 1
	
	//dimensionne la matrice � la taille voulue
	this->m_vtrValeurs.resize(this->m_nbLignes); //dimensionne le vector de vector au nombre de lignes.
	for (int i = 0; i < this->m_nbLignes; i++) { //dimensionne les lignes contenue dans le vector de vectors afin d'avoir des colonnes.
		m_vtrValeurs[i].resize(m_nbColonnes);
	}

	m_vtrValeurs[this->m_nbLignes - 1][this->m_nbColonnes - 1] = 0; //initialise � 0 la matrice de dimension 1
}

//*************************************************************************************************************
//Description		: Constructeur qui instancie une matrice de dimensions donn�es avec des valeurs �gales � 0;
//
//Entr�e			: int nbLignes : le nombre de lignes de la matrice.
//					: int nbColonnes : le nombre de colonnes de la matrice.
//					
//Sortie			: La Matrice intialis�e.
//
//Note				:	
//
//*************************************************************************************************************
CMatrice::CMatrice(int nbLignes, int nbColonnes)
{
	//Cr�e une matrice de dimension nbLignes, nbColonnes dont les valeurs sont toutes �gales � 0;

	this->m_nbLignes = nbLignes;
	this->m_nbColonnes = nbColonnes;
	this->m_vtrValeurs.resize(nbLignes);
	for (int i = 0; i < m_nbLignes; i++) {
		m_vtrValeurs[i].resize(m_nbColonnes);
		for (int j = 0; j < m_nbColonnes; j++) {
			m_vtrValeurs[i][j] = 0;
		}
	}
}

//*************************************************************************************************************
//Description		: Constructeur qui instancie une matrice � partir des valeurs vector * vector pass�es en param�tres.
//
//Entr�e			: int nbLignes : le nombre de lignes de la matrice.
//					: int nbColonnes : le nombre de colonnes de la matrice.
//					
//Sortie			: La Matrice intialis�e.
//
//Note				:	Des exceptions sont lev�es si les valeurs ne correspondent pas aux valeurs attendues.
//
//*************************************************************************************************************
CMatrice::CMatrice(std::vector<std::vector<float>> valeurs)
{
	if (valeurs.size() > 0 && valeurs[0].size() > 0) {
		
		//v�rifie que la matrice est homog�ne, que toutes les lignes contiennent le m�me nombre de colonnes.
		int i = 1;
		for (int i = 1; i < valeurs.size(); i++) {
			if (valeurs[0].size() != valeurs[i].size()) {
				throw "Erreur, les valeurs � mettre dans la matrice ne sont pas homog�nes.";
			}
		}

		//Si les valeurs sont homog�nes, instancie l'objet de la classe.
		this->m_nbLignes = valeurs.size();
		this->m_nbColonnes = valeurs[0].size();
		this->m_vtrValeurs = valeurs;
	}
	else {	//l�ve une exception si il n'y a aucune valeur permettant de cr�er la matrice.
		throw "Erreur, il n'y a aucunes valeurs, une matrice ne peut pas �tre cr��.";
	}

	

}


//GETTER
int CMatrice::getNbColonnes()
{
	return this->m_nbColonnes;
}

int CMatrice::getNbLignes()
{
	return this->m_nbLignes;
}

std::vector<std::vector<float>> CMatrice::getValeurs()
{
	return this->m_vtrValeurs;
}

float CMatrice::getValeur(int nNumLigne, int nNumColonne)
{
	// v�rifie que les coordonn�es existent sinon l�ve une exception
	if (this->m_nbColonnes >= nNumColonne || this->m_nbLignes >= nNumLigne) { 
		throw "Erreur, les coordonn�es sont hors limite de la matrice.";
	}

	//retourne la valeur � la position demand�e
	return this->m_vtrValeurs[nNumLigne][nNumColonne];
}

//SETTER

void CMatrice::setNbColonnes(const int nNbColonnes)
{
	this->m_nbColonnes = nNbColonnes;
}

void CMatrice::setNbLignes(const int nNbLignes)
{
	this->m_nbLignes = nNbLignes;
}

void CMatrice::setValeurs(std::vector<std::vector<float>> vtrValeurs)
{
	if (vtrValeurs.size() == this->m_nbLignes && vtrValeurs[0].size() == this->m_nbColonnes) {

		//v�rifie que la matrice est homog�ne, que toutes les lignes contiennent le m�me nombre de colonnes.
		int i = 1;
		for (int i = 1; i < vtrValeurs.size(); i++) {
			if (vtrValeurs[0].size() != vtrValeurs[i].size()) {
				throw "Erreur, les valeurs � mettre dans la matrice ne sont pas homog�nes.";
			}
		}

		//Si les valeurs sont homog�nes, change les valeurs de la classe.
		this->m_vtrValeurs = vtrValeurs;
	}
	else {	//l�ve une exception si les bornes de la matrice ne correspondent pas .
		throw "Erreur, les valeurs � mettre dans la matrice ne sont pas aux bonnes dimensions.";
	}
	this->m_vtrValeurs = vtrValeurs;
}

void CMatrice::setValeur(int nNumLigne, int nNumColonne, float fltValeur)
{
	if (this->m_nbColonnes >= nNumColonne || this->m_nbLignes >= nNumLigne) { // v�rifie que les coordonn�es existent sinon l�ve une exception
		throw "Erreur, les coordonn�es sont hors limite de la matrice.";
	}
	this->m_vtrValeurs[nNumLigne][nNumColonne] = fltValeur;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//METHODES
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//*************************************************************************************************************
//Description		: M�thode qui affiche dans le std::cout le nb de colonnes et de lignes ainsi que les valeurs de la matrice.
//
//Entr�e			: 
//					
//Sortie			: Le nb de colonnes, de lignes et les valeurs de la matrice dans le std::cout
//
//Note				:
//
//*************************************************************************************************************
void CMatrice::affiche()
{
	std::cout << "La matrice de dimensions " << this->m_nbLignes << ", " << this->m_nbColonnes << " a pour valeurs :" << std::endl;
	//Affihage de toutes les valeurs
	for (int i = 0; i < this->m_nbLignes; i++)
	{
		for (int j = 0; j < this->m_nbColonnes; j++)
		{
			std::cout << this-> m_vtrValeurs[i][j] << " | ";
		}
		std::cout << std::endl;
	}
}


//*************************************************************************************************************
//Description		: M�thode qui retourne le vecteur correspondant au r�sultat du produit de la matrice avec un vecteur.
//
//Entr�e			: CVecteur& vctVecteur : vecteur surlequel est appliqu� l'op�ration
//					
//Sortie			: CVecteur : Vecteur correspondant au r�sultat.
//
//Note				: L�ve une exception si la matrice n'est pas de dimensions 3, 3.
//
//*************************************************************************************************************
CVecteur CMatrice::prod(CVecteur& vctVecteur)
{
	CVecteur vctResultat(0, 0, 0);

	//v�rifie que la matrice est de dimensions 3 , 3;
	if (this->m_nbColonnes == 3 && this->m_nbLignes == 3) {

		vctResultat.m_fltX += this->m_vtrValeurs[0][0] * vctVecteur.m_fltX + this->m_vtrValeurs[0][1] * vctVecteur.m_fltY + this->m_vtrValeurs[0][2] * vctVecteur.m_fltZ;
		vctResultat.m_fltY += this->m_vtrValeurs[1][0] * vctVecteur.m_fltX + this->m_vtrValeurs[1][1] * vctVecteur.m_fltY + this->m_vtrValeurs[1][2] * vctVecteur.m_fltZ;
		vctResultat.m_fltZ += this->m_vtrValeurs[2][0] * vctVecteur.m_fltX + this->m_vtrValeurs[2][1] * vctVecteur.m_fltY + this->m_vtrValeurs[2][2] * vctVecteur.m_fltZ;
	}
	else {
		throw "Erreur, la matrice n'est pas de dimensions 3,3.";
	}

	return vctResultat;
}
