//
// Created by Alex on 1/19/2022.
//

#include "Data.h"

std::ostream &operator<<(std::ostream &os, const Data &data) {
    os << "an: " << data.an << " luna: " << data.luna << " zi: " << data.zi;
    return os;
}

bool Data::operator>=(const Data &rhs) const {
    return !(*this < rhs);
}

bool Data::operator<=(const Data &rhs) const {
    return !(rhs < *this);
}

bool Data::operator>(const Data &rhs) const {
    return rhs < *this;
}

bool Data::operator<(const Data &rhs) const {
    if (an < rhs.an)
        return true;
    if (rhs.an < an)
        return false;
    if (luna < rhs.luna)
        return true;
    if (rhs.luna < luna)
        return false;
    return zi < rhs.zi;
}
