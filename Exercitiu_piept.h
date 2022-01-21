//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXERCITIU_PIEPT_H
#define PROIECT_POO_EXERCITIU_PIEPT_H

#include "Exercitiu.h"
#include <iostream>
#include <memory>


class exercitiu_piept : public Exercitiu {
    friend class ExercitiuPieptBuilder;

    int cupe_de_preworkout;
    int parteneri;

public:
    exercitiu_piept() = default;

    void afis(std::ostream &os) const override;

    float calorii_arse() override;

    std::shared_ptr <Exercitiu> clone() const override;

};

class ExercitiuPieptBuilder {
private:
    exercitiu_piept exercitiuPiept;
public:
    ExercitiuPieptBuilder() = default;

    exercitiu_piept build(){
        return exercitiuPiept;
    }

    ExercitiuPieptBuilder &cupe_de_preworkout_(const float &cupe_de_preworkout_){
        exercitiuPiept.cupe_de_preworkout = cupe_de_preworkout_;
        return *this;
    }

    ExercitiuPieptBuilder &parteneri(const float &parteneri_){
        exercitiuPiept.parteneri = parteneri_;
        return *this;
    }

    void cupe_de_preworkout(int i) {

    }
};

#endif //PROIECT_POO_EXERCITIU_PIEPT_H
