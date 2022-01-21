//
// Created by Alex on 1/19/2022.
//

#include "Exercitiu.h"
#include "Exceptii.h"
#include <string>

Exercitiu::Exercitiu(const std::string &numeExercitiu, int nrRepetari, int nrSeturi, int calConsumate) : nume_exercitiu(
        numeExercitiu), nr_repetari(nrRepetari), nr_seturi(nrSeturi), cal_consumate(calConsumate) {}

float Exercitiu::calorii_arse() {
    if(nr_seturi == 0 || nr_repetari == 0) {
        throw eroare_antrenament("Numarul de repetari este 0 sau numarul de seturi este 0");
    }
    return nr_repetari * nr_seturi * cal_consumate;
}

std::ostream &operator<<(std::ostream &os, const Exercitiu &exercitiu) {
    exercitiu.afis(os);
    return os;
}

void Exercitiu::afis(std::ostream &os) const {
    auto& exercitiu = *this;
    os << "nume_exercitiu: " << exercitiu.nume_exercitiu << " nr_repetari: " << exercitiu.nr_repetari << " nr_seturi: "
       << exercitiu.nr_seturi << " cal_consumate: " << exercitiu.cal_consumate;
}

Exercitiu::Exercitiu() {}
