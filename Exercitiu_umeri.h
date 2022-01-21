//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXERCITIU_UMERI_H
#define PROIECT_POO_EXERCITIU_UMERI_H

#include "Exercitiu.h"
#include <iostream>
#include <memory>

class exercitiu_umeri : public Exercitiu {
    friend class ExercitiuUmeriBuilder;
    
    int cupe_de_preworkout;

public:
    exercitiu_umeri() = default;
    
    void afis(std::ostream &os) const override;

    float calorii_arse() override;

    std::shared_ptr <Exercitiu> clone() const override;

};

class ExercitiuUmeriBuilder {
private:
    exercitiu_umeri exercitiuUmeri;
public:
    ExercitiuUmeriBuilder() = default;

    exercitiu_umeri build(){
        return exercitiuUmeri;
    }

    ExercitiuUmeriBuilder &cupe_de_preworkout_(const float &cupe_de_preworkout_){
        exercitiuUmeri.cupe_de_preworkout = cupe_de_preworkout_;
        return *this;
    }

};


#endif //PROIECT_POO_EXERCITIU_UMERI_H
