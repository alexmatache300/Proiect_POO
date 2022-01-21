//
// Created by Alex on 1/19/2022.
//

#ifndef PROIECT_POO_EXERCITIU_PICIOARE_H
#define PROIECT_POO_EXERCITIU_PICIOARE_H

#include "Exercitiu.h"
#include <iostream>
#include <memory>


class exercitiu_picioare : virtual public Exercitiu {
    friend class ExercitiuPicioareBuilder;

    float coeficient_cardio;
public:
    exercitiu_picioare() = default;

    exercitiu_picioare(const std::string &numeExercitiu, int nrRepetari, int nrSeturi, int calConsumate,
                       float coeficientCardio);

    ~exercitiu_picioare() override;

    void afis(std::ostream &os) const override;

    float calorii_arse() override;

    std::shared_ptr <Exercitiu> clone() const override;
};

class ExercitiuPicioareBuilder {
private:
    exercitiu_picioare exercitiuPicioare;
public:
    ExercitiuPicioareBuilder() = default;

    exercitiu_picioare build(){
        return exercitiuPicioare;
    }

    ExercitiuPicioareBuilder &coeficient_cardio(const float &coeficient_cardio_){
        exercitiuPicioare.coeficient_cardio = coeficient_cardio_;
        return *this;
    }

};

#endif //PROIECT_POO_EXERCITIU_PICIOARE_H
