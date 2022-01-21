//
// Created by Alex on 1/21/2022.
//

#include "Exercitiu_spate.h"

float exercitiu_spate::calorii_arse() {
    return Exercitiu::calorii_arse() * cupe_de_preworkout * parteneri * coeficient_cardio;
}

void exercitiu_spate::afis(std::ostream &os) const {
    Exercitiu::afis(os);
    os << "cupe_de_preworkout: " << cupe_de_preworkout;
    os << "parteneri: " << parteneri;
    os << "coeficient_cardio: " << coeficient_cardio;
}
std::shared_ptr<Exercitiu> exercitiu_spate::clone() const{
    return std::make_shared<exercitiu_spate>(*this);
}