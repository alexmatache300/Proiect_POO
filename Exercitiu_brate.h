//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXERCITIU_BRATE_H
#define PROIECT_POO_EXERCITIU_BRATE_H

#include "Exercitiu.h"
#include <iostream>
#include <memory>


class exercitiu_brate : public Exercitiu {
    friend class ExercitiuBrateBuilder;

    float coeficient_cardio;
    int cupe_de_preworkout;
public:
    void afis(std::ostream &os) const override;

    float calorii_arse() override;

    std::shared_ptr <Exercitiu> clone() const override;
};

class ExercitiuBrateBuilder {
private:
    exercitiu_brate exercitiuBrate;
public:

    ExercitiuBrateBuilder() = default;

    ExercitiuBrateBuilder &coeficient_cardio(const float &coeficientCardio) {
        exercitiuBrate.coeficient_cardio = coeficientCardio;
        return *this;
    }

    ExercitiuBrateBuilder &cupe_de_preworkout(const int &cupeDePrework) {
        exercitiuBrate.cupe_de_preworkout = cupeDePrework;
        return *this;
    }

    exercitiu_brate build() {
        return exercitiuBrate;
    }
};

#endif //PROIECT_POO_EXERCITIU_BRATE_H
