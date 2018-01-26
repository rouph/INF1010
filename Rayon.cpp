#include "Rayon.h"
const int AJOUT_CAPACITE = 5;

Rayon::Rayon()
{
	categorie_ = "inconnue";
	tousProduits_ = nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

Rayon::Rayon(string cat): 
	tousProduits_(nullptr), capaciteProduits_(0), nombreProduits_(0)
{
	categorie_ = cat;
}

string Rayon::obtenirCategorie()
{
	return categorie_;
}
																														
Produit ** Rayon::obtenirTousProduits()
{	
	return tousProduits_;
}																														



// Methodes d'acces


int Rayon::obtenirCapaciteProduits()
{
	return capaciteProduits_;
}
int Rayon::obtenirNombreProduits()
{
	return nombreProduits_;
}


// Methodes de modification
void Rayon::modifierCategorie(string cat)
{
	categorie_ = cat;
}

// autres methodes
void Rayon::ajouterProduit(Produit * produit)
{
	if (tousProduits_ == nullptr){
		tousProduits_ = new Produit*[AJOUT_CAPACITE];
		capaciteProduits_ = AJOUT_CAPACITE;
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;
	}
	else if (nombreProduits_ == capaciteProduits_)
	{
		Produit** listeTemp = tousProduits_;

		capaciteProduits_ += AJOUT_CAPACITE;
		
		tousProduits_ = new Produit*[capaciteProduits_];
	
		for (int i = 0; i < capaciteProduits_; i++)
		 tousProduits_[i] = listeTemp[i];
		
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;
		delete[] listeTemp;
	}
	else
	{
		tousProduits_[nombreProduits_] = produit;
		nombreProduits_++;

	}
}


void Rayon::afficher()
{
	cout << "la categorie est: " << categorie_ << endl;
	cout << "La capacite de produit est: " << capaciteProduits_ << endl;
	cout << "Le nombre de produit est:  " << nombreProduits_ << endl;
	cout << " Les produits de cette categorie sont : " << endl;
	for (int i = 0; i < nombreProduits_; i++)
	{   
		cout << "Produit" <<  (i+1) << endl << endl;
		tousProduits_[i]->afficher();
	}
}