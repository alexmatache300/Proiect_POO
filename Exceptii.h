//
// Created by Alex on 1/21/2022.
//

#ifndef PROIECT_POO_EXCEPTII_H
#define PROIECT_POO_EXCEPTII_H

#include <stdexcept>
#include <iostream>


class eroare_exercitiu : virtual public std::runtime_error{
public:
    eroare_exercitiu (const std::string &arg);
};

class eroare_antrenament : public eroare_exercitiu{
public:
    eroare_antrenament(const std::string &arg);
};


#endif //PROIECT_POO_EXCEPTII_H
