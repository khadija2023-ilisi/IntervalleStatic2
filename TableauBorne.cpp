#include "pch.h"
#include "TableauBorne.h"

Geometrique::TableauBorne::TableauBorne(int nbelm, float bI, float bS)
	:Tableau(nbelm)
{
	if (bS < bI)
	{
		float aux = bS;
		bS = bI;
		bI = aux;
	}
	this->Binf = bI;
	this->Bsup = bS;
}

void Geometrique::TableauBorne::operator()(int indice, float newEm)
{
	assert( (newEm >= this->Binf && newEm <=this->Bsup) && (indice >= 0 && indice < this->nbelem));
	this->Tab[indice] = newEm;

}

void Geometrique::TableauBorne::afficher() const
{
	cout << "[ ";
	for (int k = 0; k < this->nbelem; k++)
		cout << this->Tab[k] << ' ';
	cout << "] ";
}

