//
// Created by Alex on 1/19/2022.
//

#include "Mancare.h"

Mancare::Mancare(): nume_mancare("..."), nr_calorii(0), nr_mese_pe_zi(5)  {}

std::shared_ptr<Mancare> Mancare::clone() {
    return std::make_shared<Mancare>(*this);
}

Mancare::Mancare(const std::string &numeMancare, int nrCalorii, int nrMesePeZi) : nume_mancare(numeMancare),
                                                                                  nr_calorii(nrCalorii),
                                                                                  nr_mese_pe_zi(nrMesePeZi) {}

Mancare::~Mancare() {

}

std::ostream &operator<<(std::ostream &os, const Mancare &mancare) {
    os << "nume_mancare: " << mancare.nume_mancare << " nr_calorii: " << mancare.nr_calorii << " nr_mese_pe_zi: "
       << mancare.nr_mese_pe_zi;
    return os;
}
