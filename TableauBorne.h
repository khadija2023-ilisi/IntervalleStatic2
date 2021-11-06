#pragma once
#include "Tableau.h"

namespace Geometrique {
    class TableauBorne :
        private Tableau
    {
    public:
        TableauBorne(int nbelm = 1, float bI = 0, float bS = 0);
        float& operator[](int indice) = delete;
        void operator()(int indice, float newEm);
        void afficher()const;
    private:
        float Binf;
        float Bsup;
    };
};


