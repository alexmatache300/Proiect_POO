//
// Created by Alex on 1/19/2022.
//

#ifndef PROIECT_POO_EXERCITIU_H
#define PROIECT_POO_EXERCITIU_H

#include <iostream>
#include <memory>

class Exercitiu {

    std::string nume_exercitiu;
    int nr_repetari;
    int nr_seturi;
    int cal_consumate;

public:
    virtual ~Exercitiu() = default;

    virtual float calorii_arse();

    virtual std::shared_ptr<Exercitiu> clone() const = 0;

    virtual void afis(std::ostream &os) const;

    friend std::ostream &operator<<(std::ostream &os, const Exercitiu &exercitiu);

    Exercitiu(const std::string &numeExercitiu, int nrRepetari, int nrSeturi, int calConsumate);

    Exercitiu();

};


#endif //PROIECT_POO_EXERCITIU_H
