#ifndef CAPITAL_CPP
#define CAPITAL_CPP
#include "Capital.h"

Capital::Capital(string name,string state) : City(name)
{
    this->state = state;
    size = 4;
    pTemp = new double* [4];

    for (int i = 0; i < 4; i++)
    {
        pTemp[i] = new double[24];
    }

}
string Capital::get_stateName() {
    return this->state;
}



#endif