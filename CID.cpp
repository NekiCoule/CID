#include <string>
#include "CID.h"

using namespace std;

class cid::cid
{
private:
		int id;
		string nom;
		string prenom;
		string adresse;
		string CP;
		string ville;

public:

	cid::cid()
	{
	id = 0;
	nom = "";
	prenom = "";
	adresse = "";
	CP = "";
	ville = "";
	}

	cid::cid(int idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID)
	{
		id = idCID;
		nom = nomCID;
		prenom = prenomCID;
		adresse = adresseCID;
		CP = cpCID;
		ville = villeCID;
	}

	//~cid::cid();

	int getId()
	{
		return id;
	}
	string getNom()
	{
		return nom;
	}
	string getPrenom()
	{
		return prenom;
	}
	string getAdresse()
	{
		return adresse;
	}
	string getCP()
	{
		return CP;
	}
	string getVille()
	{
		return ville;
	}

	void setId(int idCID)
	{
		id = idCID;
	}
	void setNom(string nomCID)
	{
		nom = nomCID;
	}
	void setPrenom(string prenomCID)
	{
		prenom = prenomCID;
	}
	void setAdresse(string adresseCID)
	{
		adresse = adresseCID;
	}
	void setCP(string cpCID)
	{
		CP = cpCID;
	}
	void setVile(string villeCID)
	{
		ville = villeCID;
	}

	void creerCarte(int idCID, string nomCID, string prenomCID, string adresseCID, string cpCID, string villeCID)
	{
		id = idCID;
		nom = idCID;
		prenom = idCID;
		adresse = idCID;
		CP = cpCID;
		ville = villeCID;
	}

	void modifierCarte(int idCID)
	{
	}

	string afficherCarte(int idCID)
	{
		return "affichage";
	}

	void supprimerCarte(int idCID)
	{
	}

};