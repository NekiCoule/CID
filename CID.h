#pragma once
#include <string>

using namespace std;

class cid
{
//Private:
	int id;
	string nom;
	string prenom;
	string adresse;
	string CP;
	string ville;

//Public:

	cid::cid();
	cid::cid(int idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID);
	//~cid::cid;

	int getId();
	string getNom();
	string getPrenom();
	string getAdresse();
	string getCP();
	string getVille();

	void setId(int idCID);
	void setNom(string nomCID);
	void setPrenom(string prenomCID);
	void setAdresse(string adresseCID);
	void setCP(string cpCID);
	void setVille(string villeCID);

	void creerCarte(int idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID);
	void modifierCarte(int idCID);
	string afficherCarte(int idCID);
	void supprimerCarte(int idCID);
};

