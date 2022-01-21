#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include "Exercitiu.h"
#include "Data.h"
#include "Mancare.h"
#include "Program.h"
#include "Exercitiu_picioare.h"
#include "Exercitiu.h"
#include "Exercitiu_umeri.h"
#include "Exercitiu_spate.h"
#include "Exercitiu_piept.h"
#include "Exercitiu_brate.h"

#include "exercitiu_brate.h"
#include "Exercitiu_factory.h"

using namespace std;


int main() {
    exercitiu_picioare exercitiu1 ("genufleziuni", 10, 4, 100 , 2);

    exercitiu_brate exbrate1 = Exercitiu_factory::createExercitiuBrate();
    exercitiu_picioare expicioare1 = Exercitiu_factory::createExercitiuPicioare();
    exercitiu_piept expiept1 = Exercitiu_factory::createExercitiuPiept();
    exercitiu_spate exspate1 = Exercitiu_factory::createExercitiuSpate();
    exercitiu_umeri exumeri1 = Exercitiu_factory::createExercitiuUmeri();
    cout << exercitiu1;

}