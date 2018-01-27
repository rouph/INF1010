#include "panier.h"

const int DOUBLER_CAPACITE = 2;
Panier::Panier(int capacite)
{
	contenuPanier_ = new Produit*[capacite];
	capaciteContenu_ = capacite;
	totalAPayer_ = nombreContenu_ = 0;
}

Produit **  Panier::obtenirContenuPanier() const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::ajouter(Produit * prod)
{
	
	 if (nombreContenu_ == capaciteContenu_) {
		capaciteContenu_ *= DOUBLER_CAPACITE;
		Produit** listTemp = contenuPanier_;
		contenuPanier_ = new Produit*[capaciteContenu_];
		for (int i = 0; i < nombreContenu_; i++) {
			contenuPanier_[i] = listTemp[i];
		}
	}
	contenuPanier_[nombreContenu_] = prod;
	nombreContenu_++;
}

void Panier::livrer() {
	
	delete[] contenuPanier_;
	contenuPanier_ = nullptr;
	nombreContenu_ = 0;
	capaciteContenu_ = 0;
	totalAPayer_ = 0;
}



void Panier::afficher() {
		cout << "La capacite de votre panier est: " << capaciteContenu_ << endl;
		cout << "Le nombre de produits dans votre panier est: " << nombreContenu_ << endl;
		cout << " Les produits de votre panier sont : " << endl;
		for (int i = 0; i < nombreContenu_ ; i++)
		{
			cout << "Produit" << (i+1) << endl << endl;
			 contenuPanier_[i]->afficher();
		}
		cout << "Votre total est: " << totalAPayer_ << endl;

}
