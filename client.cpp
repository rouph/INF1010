#include "client.h"

const int  NOUVEAU_PANIER = 4;

Client::Client(string  nom, string prenom, int identifiant, string codePostal, long date)
{
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = date;
	monPanier_ = nullptr;
}



// methodes d'acces

string Client::obtenirNom() const
{
	return nom_;
}



string Client::obtenirPrenom() const
{

	return prenom_;
}
int Client::obtenirIdentifiant() const
{
	return identifiant_;

}
string Client::obtenirCodePostal() const
{

	return codePostal_;
}
long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

// methodes de modification
void Client::modifierNom(string nom){

	nom_ = nom;
}
void Client::modifierPrenom(string prenom){
	prenom_ = prenom;
}
void Client::modifierIdentifiant(int identifiant){
	identifiant_ = identifiant;
}
void Client::modifierCodePostal(string codePostal){
	codePostal_ = codePostal;
}
void Client::modifierDateNaissance(long date){
	dateNaissance_ = date;
}


// autres m�thodes
void Client::acheter(Produit * prod){
	if (monPanier_ == nullptr) {
		monPanier_ = new Panier(NOUVEAU_PANIER);
	}
	monPanier_->ajouter(prod);
}

void Client::afficherPanier(){
	cout << nom_ << endl;
	cout << prenom_ << endl;
	cout << identifiant_ << endl;
	cout << codePostal_ << endl;
	cout << dateNaissance_ << endl << endl;
	
	if (!(monPanier_ == nullptr))
		monPanier_->afficher();
	else
		cout << "votre panier est vide" << endl;
	
}

void Client::livrerPanier(){

	monPanier_->livrer();
	monPanier_ = nullptr;
}