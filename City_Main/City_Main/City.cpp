#ifndef CITY_CPP

#define CITY_CPP



#include "City.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

City::City()
{
    name = "";
}

City::City(string name)
{
    this->name = name;
}

string City::get_name()
{
    return name;
}
int City::get_size()
{
    return size;
}


void City::accept(vector<double> temp)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 24; j++) {

            pTemp[i][j] = temp[count++];

        }

    }

}

double City::get_max() {

    double maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 24; j++)
        {

            maxi = (maxi > pTemp[i][j]) ? maxi : pTemp[i][j];

        }

    }

    return maxi;
}

double City::get_min() {

    double mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 24; j++) {

            mini = (mini < pTemp[i][j]) ? mini : pTemp[i][j];

        }

    }

    return mini;

}

double City::get_avg() {

    double sum = 0;

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < 24; j++) {

            sum += pTemp[i][j];

        }

    }
    int elements = size * 24;
    return sum / elements;

}





void City::display()
{
    
    if(size==1)
    cout << setw(15) << get_name()<< setw(15) << "----" << setw(15) << get_max() << setw(15) << get_min() << setw(15) << get_avg() << endl;

    if(size==4)
    cout << setw(15) << get_name()<<setw(15) << get_stateName() << setw(15) << get_max() << setw(15) << get_min() << setw(15) << get_avg() << endl;
}






#endif // !CITY_CPP
