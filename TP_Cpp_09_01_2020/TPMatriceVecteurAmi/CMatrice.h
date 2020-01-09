//***************************************************************************************************
//Fichier*				: CVecteur.h
//
//Classe				: CVecteur
//Description			: Modélisation d'un vecteur 3d
//Attributs				: int m_nbColonnes								: nb de colonnes de la matrice
//						: int m_nbLignes								: nb de lignes de la matrice
//						: std::vector<std::vector<float>> m_vtrValeurs	: valeurs de la matrice
//
//Notes					:
//
//***************************************************************************************************
//09-01-2020 B. FACHE Version Initiale.
//***************************************************************************************************

#pragma once
#ifndef CMATRICE_H
#define CMATRICE_H
#include <vector>



class CVecteur;
class CMatrice
{
	private:
		int m_nbColonnes;
		int m_nbLignes;
		std::vector<std::vector<float>> m_vtrValeurs;

	public:
		//CONSTRUCTEUR
		CMatrice();

		CMatrice(std::vector<std::vector<float>> valeurs);
		CMatrice(int nbLignes, int nbColonnes);

		//PROTOTYPE OU DECLARATION DES METHODES DE LA CLASSE

		//assesseurs
		int getNbColonnes();
		int getNbLignes();
		std::vector<std::vector<float>> getValeurs();
		float getValeur(int nNumLigne, int nNumColonne);

		//mutateurs
		void setNbColonnes(int nNbColonnes);
		void setNbLignes(int nNbLignes);
		void setValeurs(std::vector<std::vector<float>> vtrValeurs);
		void setValeur(int nNumLigne, int nNumColonne, float fltValeur);

		//methodes
		void affiche();


		//Fonctions amies
		friend CVecteur prod(CVecteur& vctVecteur, CMatrice& matMatrice); //fonction amie de plusieurs classes
		CVecteur prod(CVecteur& vctVecteur); //fonction membre de CMatrice et amie de CVecteur
};
#endif
