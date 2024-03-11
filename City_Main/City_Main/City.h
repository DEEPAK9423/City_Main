#ifndef CITY_H
#define CITY_H


#include <iostream>

#include<vector>

#include<string>

using namespace std;



class City {

protected:

    string name;
    double max;
    double min;
    double avg;
    char unit;
    double** pTemp;
    int size;

public:

    City();
    City(string name);
    string get_name();
    void accept(vector<double> temp);
    void display();
    double get_max();
    double get_min();
    double get_avg();
    int get_size();
    virtual string  get_stateName() { return ""; }

};












#endif