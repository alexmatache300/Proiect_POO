//
// Created by Alex on 1/19/2022.
//

#include "Program.h"
#include <algorithm>

Program::Program(): data_inceput(22,22,2022), nume("Matache"), nr_ore(2)  {}

Program::Program(const Data &dataInceput, const std::string &nume, int nrOre) : data_inceput(dataInceput), nume(nume),
                                                                           nr_ore(nrOre) {}

Program::~Program() {

}

std::ostream &operator<<(std::ostream &os, const Program &program) {
    os << "mese: " << std::endl;
    std::for_each(program.mese.begin(), program.mese.end(), [&os](const std::shared_ptr<Mancare>& mancare) {
       os << mancare.get();
    });

    os << " exercitii: " << std::endl;
    std::for_each(program.exercitii.begin(), program.exercitii.end(), [&os](const std::shared_ptr<Exercitiu>& exercitiu) {
        os << exercitiu.get();
    });

    os << " data_inceput: " << program.data_inceput
       << " nume: " << program.nume << " nr_ore: " << program.nr_ore;
    return os;
}

void Program::Program_pe_zi(std::shared_ptr<Mancare> mancaruri, std::shared_ptr<Exercitiu> exercitiul) {
    this->mese.push_back(mancaruri->clone());
    this->exercitii.push_back(exercitiul->clone());
}
