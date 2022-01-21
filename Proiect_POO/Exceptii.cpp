//
// Created by Alex on 1/21/2022.
//

#include "Exceptii.h"

eroare_exercitiu::eroare_exercitiu(const std::string &arg) : runtime_error("Eroare exercitiu:"+arg) {}

eroare_antrenament::eroare_antrenament(const std::string &arg) : runtime_error(arg), eroare_exercitiu(
        "Trebuie sa ai macar o serie sau o repetare minim") {}
