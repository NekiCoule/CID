#include <string>
#include "CID.h"
#include <iostream>

using namespace std;

cid::cid()
{
	id = 0;
	nom = "";
	prenom = "";
	adresse = "";
	CP = "";
	ville = "";
}

cid::cid(int &idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID)
{
	id = idCID;
	nom = nomCID;
	prenom = prenomCID;
	adresse = adresseCID;
	CP = cpCID;
	ville = villeCID;
}

int cid::getId()
{
	return id;
}
string cid::getNom()
{
	return nom;
}
string cid::getPrenom()
{
	return prenom;
}
string cid::getAdresse()
{
	return adresse;
}
string cid::getCP()
{
	return CP;
}
string cid::getVille()
{
	return ville;
}

void cid::setId(int idCID)
{
	id = idCID;
}
void cid::setNom(string nomCID)
{
	nom = nomCID;
}
void cid::setPrenom(string prenomCID)
{
	prenom = prenomCID;
}
void cid::setAdresse(string adresseCID)
{
	adresse = adresseCID;
}
void cid::setCP(string cpCID)
{
	CP = cpCID;
}
void cid::setVille(string villeCID)
{
	ville = villeCID;
}

void cid::creerCarte(int idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID)
{
	id = idCID;
	nom = nomCID;
	prenom = prenomCID;
	adresse = adresseCID;
	CP = cpCID;
	ville = villeCID;
}

//void cid::modifierCarte(string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID)
//{
//	nom = nomCID;
//	prenom = prenomCID;
//	adresse = adresseCID;
//	CP = cpCID;
//	ville = villeCID;
//}

void cid::modifierCarte()
{
	cout << "Entrer le nom : ";
	cin >> nom;
	cout << "Entrer le prenom : ";
	cin >> prenom;
	cout << "Entrer l adresse : ";
	cin >> adresse;
	cout << "Entrer le code postal";
	cin >> CP;
	cout << "Entrer la ville";
	cin >> ville;
}

void cid::afficherCarte()
{
	cout << "La carte n" << id << " appartiend a " << nom << " " << prenom << ", habitant de " << CP << " " << ville << " au " << adresse;
}

void cid::supprimerCarte()
{
}