//
// Created by Alex on 1/19/2022.
//

#ifndef PROIECT_POO_DATA_H
#define PROIECT_POO_DATA_H

#include <iostream>


class Data {
    int an;
    int luna;
    int zi;

public:
    Data(int an, int luna, int zi) : an(an), luna(luna), zi(zi) {}

    bool operator<(const Data &rhs) const;

    bool operator>(const Data &rhs) const;

    bool operator<=(const Data &rhs) const;

    bool operator>=(const Data &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Data &data);

};


#endif //PROIECT_POO_DATA_H
