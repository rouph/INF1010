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
	listeProduit = new Produit* [15];
	/*for (int i = 0; i < 15; i++)
	{
		listeProduit[i] = new Produit();
	}*/
	listeProduit[0] = new Produit("Concombre",0,2.56);
	listeProduit[1] = new Produit("Gingembre", 1, 1.23);
	listeProduit[2] = new Produit("Cornichon", 2, 2.65);
	listeProduit[3] = new Produit("Piment jaune", 3, 4.23);
	listeProduit[4] = new Produit("Piment rouge", 4, 7.23);
	listeProduit[5] = new Produit("Asperge", 5, 2.16);
	listeProduit[6] = new Produit("Laitue", 6, 7.45);
	listeProduit[7] = new Produit("Patate", 7, 3.15);
	listeProduit[8] = new Produit("Cintron", 8, 0.99);
	listeProduit[9] = new Produit("Ognion", 9, 1.49);
	listeProduit[10] = new Produit("Courgette", 10, 2.49);
	listeProduit[11] = new Produit("Lime", 11, 1.49);
	listeProduit[12] = new Produit("Olive", 12, 3.46);
	listeProduit[13] = new Produit("Carotte", 13, 2.60);
	listeProduit[14] = new Produit("Zucchini", 14, 3.50);

	
	
	
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
	cout << "______________________________________________" << endl;
	listeProduit[2]->modifierNom("Tomate");
	listeProduit[2]->modifierPrix(6.99);
	listeProduit[2]->modifierReference(123456789);
	listeProduit[2]->afficher();
	cout << "______________________________________________" << endl;
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
	cout << "______________________________________________" << endl;
	legume.afficher();
	cout << "______________________________________________" << endl;

  
	//7-  Creez un objet de classe client à l'aide du constructeur
   
	Client client1( "Rouphael", "Elie", 10, "H4L1Y5", 199806);
	//8-  afficher l'etat des attributs du client
	client1.afficherPanier();
	cout << "______________________________________________" << endl;

	//9-   Le client achete 9 produits
	client1.acheter(listeProduit[1]);
	client1.acheter(listeProduit[2]);
	client1.acheter(listeProduit[0]);
	client1.acheter(listeProduit[5]);
	client1.acheter(listeProduit[6]);
	client1.acheter(listeProduit[7]);
	client1.acheter(listeProduit[8]);
	client1.acheter(listeProduit[14]);
	client1.acheter(listeProduit[11]);

	//10- Afficher le contenu du panier du client
	client1.afficherPanier();
     //11- livrer le panier du client
	cout << "______________________________________________" << endl;
	client1.livrerPanier();
	//12- afficher le contenu du panier du client
	client1.afficherPanier();
	cout << "______________________________________________" << endl;
	//13-  terminer le programme correctement

    return 0;
}
