//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXERCITIU_SPATE_H
#define PROIECT_POO_EXERCITIU_SPATE_H

#include "Exercitiu.h"
#include <iostream>
#include <memory>

class exercitiu_spate : public Exercitiu {
    friend class ExercitiuSpateBuilder;

    int cupe_de_preworkout;
    int parteneri;
    float coeficient_cardio;

public:
    exercitiu_spate() = default;

    void afis(std::ostream &os) const override;

    float calorii_arse() override;

    std::shared_ptr <Exercitiu> clone() const override;

};

class ExercitiuSpateBuilder {
private:
    exercitiu_spate exercitiuSpate;
public:
    ExercitiuSpateBuilder() = default;

    exercitiu_spate build(){
        return exercitiuSpate;
    }

    ExercitiuSpateBuilder &coeficient_cardio(const float &coeficient_cardio_){
        exercitiuSpate.coeficient_cardio = coeficient_cardio_;
        return *this;
    }

    ExercitiuSpateBuilder &cupe_de_preworkout_(const float &cupe_de_preworkout_){
        exercitiuSpate.cupe_de_preworkout = cupe_de_preworkout_;
        return *this;
    }

    ExercitiuSpateBuilder &parteneri(const float &parteneri_){
        exercitiuSpate.parteneri = parteneri_;
        return *this;
    }

    void cupe_de_preworkout(int i) {

    }
};


#endif //PROIECT_POO_EXERCITIU_SPATE_H
