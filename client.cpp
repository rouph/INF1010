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

string Client::obtenirNom(){
	return nom_;
}



string Client::obtenirPrenom(){

	return prenom_;
}
int Client::obtenirIdentifiant(){
	return identifiant_;

}
string Client::obtenirCodePostal(){

	return codePostal_;
}
long Client::obtenirDateNaissance(){
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


// autres méthodes
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
	cout << dateNaissance_ << endl;
	
	if (!(monPanier_ == nullptr))
		monPanier_->afficher();
	else
		cout << "votre panier est vide";
	
}

void Client::livrerPanier(){

	monPanier_->livrer();
}