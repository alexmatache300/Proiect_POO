//
// Created by Alex on 1/19/2022.
//

#ifndef PROIECT_POO_MANCARE_H
#define PROIECT_POO_MANCARE_H

#include <memory>
#include <ostream>


class Mancare {
    std::string nume_mancare;
    int nr_calorii;
    int nr_mese_pe_zi;

public:

    Mancare();

    friend std::ostream &operator<<(std::ostream &os, const Mancare &mancare);

    virtual ~Mancare();

    Mancare(const std::string &numeMancare, int nrCalorii, int nrMesePeZi);

    virtual std::shared_ptr<Mancare> clone();


};


#endif //PROIECT_POO_MANCARE_H
