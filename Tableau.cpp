#include "pch.h"
#include "Tableau.h"

using namespace Geometrique;
Geometrique::Tableau::Tableau(int Nelm)
{
	this->nbelem = (Nelm > 0) ? Nelm:1;
	//alocation memeoire
	this->Tab = new float[Nelm];
	//initialisation option pour arranger l'affichage
	for (int i = 0; i < Nelm; i++)
		this->Tab[i] = 0;
}

Geometrique::Tableau::Tableau(const Tableau& T)
{
	this->nbelem = T.nbelem;
	this->Tab = new float[T.nbelem];
}

Tableau& Geometrique::Tableau::operator=(const Tableau& T)
{
	if (this != &T)
	{
		this->nbelem = T.nbelem;
		this->Tab = new float[T.nbelem];
	}
	return *this;
}

float& Geometrique::Tableau::operator[](int indice) const
{
	assert(indice > 0 && indice < this->nbelem);
	try {
		if (indice < 0 || indice >= this->nbelem)
			throw "indice invalide";
		return this->Tab[indice];
	}
	catch (char* e) {
		cout << e << endl;
	}
}

Geometrique::Tableau::~Tableau()
{
	if (this->Tab)
	{
		delete[] Tab;
		Tab = 0;
	}
}
