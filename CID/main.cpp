// CID.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include "CID.h"

#define TAILLE 255

using namespace std;

int main()
{
	bool enCours = true;
	int choix;
	int compteur = 0;
	string nom;
	string prenom;
	string adresse;
	string CP;
	string ville;

	cid *desCID[TAILLE];

	while (enCours)
	{
		cout << "Que voulez vous faire?" << endl;
		cout << "1 : Creer une carte d'identite" << endl;
		cout << "2 : Modifier une carte d'identite" << endl;
		cout << "3 : Afficher une carte d'identite" << endl;
		cout << "4 : Supprimer une carte d'identite" << endl;
		cout << "5 : Quitter" << endl;
		cin >> choix;

		if (choix == 1)
		{
			compteur++;

			cout << "Enregistrement de la carte n" << compteur << endl;
			cout << "Merci de renseigner les informations suivantes" << endl << endl;

			cout << "Nom : ";
			cin >> nom;
			
			cout << "Prenom : ";
			cin >> prenom;

			cout << "Adresse : ";
			cin >> adresse;

			cout << "Code postal : ";
			cin >> CP;

			cout << "Ville : ";
			cin >> ville;

			desCID[compteur] = new cid(compteur, nom, prenom, adresse, CP, ville);
			
			cout << "La carte n" << compteur << "a ete enregistre." << endl << endl;
		}

		else if (choix == 2)
		{
			cout << "Quelle carte voulez vous modifier?" << endl;
			cin >> choix;

			if (desCID[choix] == NULL)
			{
				cout << "La carte n existe pas. Retour au menu." << endl << endl;
			}
			else
			{
				desCID[choix].modifierCarte();
				cout << "Carte " << choix << "modifiee" << endl;
			}
		}

		else if (choix == 3)
		{
			cout << "quelle carte souhaitez vous afficher?" << endl;
			cin >> choix;

			if (desCID[choix] == NULL)
			{
				cout << "La carte n existe pas. Retour au menu." << endl << endl;
			}
			else
			{
				desCID[choix].afficherCarte();
			}
		}

		else if (choix == 4)
		{
			cout << "Quelle carte souhaitez vous supprimer?" << endl;
			cin >> choix;

			if (desCID[choix] == NULL)
			{
				cout << "La carte n existe pas. Retour au menu." << endl << endl;
			}
			else
			{
				desCID[choix].supprimerCarte();
			}
		}

		else if (choix == 5)
		{
			enCours = false;
		}

		else
		{
			cout << "vous avez entre un mauvais chiffre. Entrez un bon chiffre." << endl << endl;
		}
	}



    return 0;
}