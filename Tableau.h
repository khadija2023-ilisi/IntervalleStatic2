#pragma once
#include <assert.h>
#include <iostream>
using namespace std;
namespace Geometrique {
	class Tableau
	{
	protected:
		float* Tab;
		int nbelem;
	public:
		Tableau(int Nelm=1);
		Tableau(const Tableau& T);
		Tableau& operator=(const Tableau& T);
		float& operator[](int indice) const;
		~Tableau();
	};
};


