//
// Created by Alex on 1/21/2022.
//

#include "Exercitiu_brate.h"


float exercitiu_brate::calorii_arse() {
    return Exercitiu::calorii_arse() * coeficient_cardio * cupe_de_preworkout;
}

void exercitiu_brate::afis(std::ostream &os) const {
    Exercitiu::afis(os);
    os << "coeficient_cardio: " << coeficient_cardio;
    os << "cupe_de_preworkout: " << cupe_de_preworkout;
}
std::shared_ptr<Exercitiu> exercitiu_brate::clone() const{
    return std::make_shared<exercitiu_brate>(*this);
}