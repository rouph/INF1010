/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	Produit** listeProduit;
	listeProduit = new Produit*[15];
	for (int i = 0; i < 15; i++)
	{
		listeProduit[i] = new Produit();
	}
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
	listeProduit[2]->modifierNom("Tomate");
	listeProduit[2]->modifierPrix(6.99);
	listeProduit[2]->modifierReference(123456789);
	listeProduit[2]->afficher();

	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon legume;
	//4-  Modifiez la catégorie  du rayon
	legume.modifierCategorie("legumes");
    // 5- Ajouter 6 produits de  votre choix dans le rayon créé
	legume.ajouterProduit(listeProduit[1]);
	legume.ajouterProduit(listeProduit[2]);
	legume.ajouterProduit(listeProduit[3]);
	legume.ajouterProduit(listeProduit[4]);
	legume.ajouterProduit(listeProduit[5]);
	legume.ajouterProduit(listeProduit[6]);

    // 6- afficher le contenu du rayon
	legume.afficher();

  
	//7-  Creez un objet de classe client à l'aide du constructeur
   
	Client client1("Rouphael", "Elie", 10, "H4L1Y5", 199806);
	//8-  afficher l'etat des attributs du client
	client1.afficherPanier();

	//9-   Le client achete 9 produits
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[2]);
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[2]);
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[2]);

	//10- Afficher le contenu du panier du client
	client1.afficherPanier();
     //11- livrer le panier du client
   
	client1.livrerPanier();
	//12- afficher le contenu du panier du client
	client1.afficherPanier();
	//13-  terminer le programme correctement
	wcout << " test";
    return 0;
}
