//
// Created by Alex on 1/21/2022.
//

#include "Exercitiu_umeri.h"

float exercitiu_umeri::calorii_arse() {
    return Exercitiu::calorii_arse() * this->cupe_de_preworkout;
}

void exercitiu_umeri::afis(std::ostream &os) const {
    Exercitiu::afis(os);
    os << "coeficient_cardio: " << cupe_de_preworkout;
}
std::shared_ptr<Exercitiu> exercitiu_umeri::clone() const{
    return std::make_shared<exercitiu_umeri>(*this);
}