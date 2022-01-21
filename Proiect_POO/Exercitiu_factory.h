//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXERCITIU_FACTORY_H
#define PROIECT_POO_EXERCITIU_FACTORY_H

#include "Exercitiu_brate.h"
#include "Exercitiu_picioare.h"
#include "Exercitiu_piept.h"
#include "Exercitiu_spate.h"
#include "Exercitiu_umeri.h"
#include <iostream>

class exercitiu_brate;
class ExercitiuBrateBuilder;
class ExercitiuPicioareBuilder;

class Exercitiu_factory {

private:
    Exercitiu_factory() = default;
public:
    Exercitiu_factory(const Exercitiu_factory &copie) = delete;

    static exercitiu_brate createExercitiuBrate() {
        ExercitiuBrateBuilder exercitiuBrateBuilder;
        std::cout << "Introdu numarul de cupe de prework" << std::endl;
        int cupePrework = 0;
        std::cin >> cupePrework;
        exercitiuBrateBuilder.cupe_de_preworkout(cupePrework);
        float coeficientCardio = (float) 0;
        std::cout << "Introdu numarul de coeficient cardio" << std::endl;
        std::cin >> coeficientCardio;
        exercitiuBrateBuilder.coeficient_cardio(coeficientCardio);
        return exercitiuBrateBuilder.build();
    }

    static exercitiu_picioare createExercitiuPicioare() {
        ExercitiuPicioareBuilder exercitiuPicioareBuilder;
        float coeficientCardio = (float) 0;
        std::cout << "Introdu numarul de coeficient cardio" << std::endl;
        std::cin >> coeficientCardio;
        exercitiuPicioareBuilder.coeficient_cardio(coeficientCardio);
        return exercitiuPicioareBuilder.build();
    }

    static exercitiu_piept createExercitiuPiept() {
        ExercitiuPieptBuilder exercitiuPieptBuilder;
        std::cout << "Introdu numarul de cupe de prework" << std::endl;
        int cupePrework = 0;
        std::cin >> cupePrework;
        exercitiuPieptBuilder.cupe_de_preworkout(cupePrework);
        std::cout << "Introdu numarul de parteneri" << std::endl;
        int nr_parteneri = 0;
        std::cin >> nr_parteneri;
        exercitiuPieptBuilder.parteneri(nr_parteneri);
        return exercitiuPieptBuilder.build();
    }

    static exercitiu_spate createExercitiuSpate() {
        ExercitiuSpateBuilder exercitiuSpateBuilder;
        std::cout << "Introdu numarul de cupe de prework" << std::endl;
        int cupePrework = 0;
        std::cin >> cupePrework;
        exercitiuSpateBuilder.cupe_de_preworkout(cupePrework);
        std::cout << "Introdu numarul de parteneri" << std::endl;
        int nr_parteneri = 0;
        std::cin >> nr_parteneri;
        exercitiuSpateBuilder.parteneri(nr_parteneri);
        float coeficientCardio = (float) 0;
        std::cout << "Introdu numarul de coeficient cardio" << std::endl;
        std::cin >> coeficientCardio;
        exercitiuSpateBuilder.coeficient_cardio(coeficientCardio);
        return exercitiuSpateBuilder.build();
    }

    static exercitiu_umeri createExercitiuUmeri() {
        ExercitiuUmeriBuilder exercitiuUmeriBuilder;
        std::cout << "Introdu numarul de cupe de prework" << std::endl;
        int cupePrework = 0;
        std::cin >> cupePrework;
        return exercitiuUmeriBuilder.build();
    }
};


#endif //PROIECT_POO_EXERCITIU_FACTORY_H
