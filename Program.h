//
// Created by Alex on 1/19/2022.
//

#ifndef PROIECT_POO_PROGRAM_H
#define PROIECT_POO_PROGRAM_H

#include <memory>
#include <ostream>
#include <iostream>
#include <vector>

#include "Mancare.h"
#include "Exercitiu.h"
#include "Data.h"


class Program {
    std::vector<std::shared_ptr<Mancare>>mese;
    std::vector<std::shared_ptr<Exercitiu>>exercitii;
    Data data_inceput;
    std::string nume;
    int nr_ore;
public:

    Program();

    friend std::ostream &operator<<(std::ostream &os, const Program &program);

    virtual ~Program();

    Program(const Data &dataInceput, const std::string &nume, int nrOre);

    void Program_pe_zi(std::shared_ptr<Mancare> mancaruri, std::shared_ptr<Exercitiu> exercitiul);

};


#endif //PROIECT_POO_PROGRAM_H
