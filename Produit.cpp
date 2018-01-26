#include "Produit.h"

Produit::Produit()
{
	nom_ = "outil";
	reference_ = 0;
	prix_ = 0;
}

Produit::Produit(string nom, int reference, double prix)
{
	nom_ = nom;
	reference_ = reference;
	prix_ = prix;
}

string Produit::obtenirNom()
{
	return nom_;

}
int Produit::obtenirReference()
{
	return reference_;
		
}


double Produit::obtenirPrix()
{
	return prix_;
}

// Methodes de modification

void Produit::modifierNom(string nom)
{
	nom_ = nom;

}
void Produit::modifierReference(int reference)
{
	reference_ = reference;

}
void Produit::modifierPrix(double prix)
{
	prix_ = prix;

}

// autres methodes
void Produit::afficher()
{
	cout << "Le nom est: " << nom_ << endl;
	cout << "La reference est: " << reference_ << endl;
	cout << "le prix est: " << prix_ << endl << endl;
}