//
// Created by Alex on 1/21/2022.
//

#include "Exercitiu_piept.h"

float exercitiu_piept::calorii_arse() {
    return Exercitiu::calorii_arse() * cupe_de_preworkout * parteneri;
}

void exercitiu_piept::afis(std::ostream &os) const {
    Exercitiu::afis(os);
    os << "cupe_de_preworkout: " << cupe_de_preworkout;
    os << "parteneri: " << parteneri;
}
std::shared_ptr<Exercitiu> exercitiu_piept::clone() const{
    return std::make_shared<exercitiu_piept>(*this);
}