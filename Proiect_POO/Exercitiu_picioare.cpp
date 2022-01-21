//
// Created by Alex on 1/19/2022.
//

#include "Exercitiu_picioare.h"


float exercitiu_picioare::calorii_arse() {
    return Exercitiu::calorii_arse() * coeficient_cardio;
}

void exercitiu_picioare::afis(std::ostream &os) const {
    Exercitiu::afis(os);
    os << "coeficient_cardio: " << coeficient_cardio;
}
std::shared_ptr<Exercitiu> exercitiu_picioare::clone() const{
    return std::make_shared<exercitiu_picioare>(*this);
}

exercitiu_picioare::~exercitiu_picioare() {

}

exercitiu_picioare::exercitiu_picioare(const std::__cxx11::basic_string<char> &numeExercitiu, int nrRepetari,
                                       int nrSeturi, int calConsumate, float coeficientCardio) : Exercitiu(
        numeExercitiu, nrRepetari, nrSeturi, calConsumate), coeficient_cardio(coeficientCardio) {}
