#ifndef NON_CAPITAL_CPP
#define NON_CAPITAL_CPP

#include "Non_capital.h"

Non_capital::Non_capital(string name) : City(name) {

    size = 1;
    pTemp = new double* [1];
    pTemp[0] = new double[24];

}


#endif