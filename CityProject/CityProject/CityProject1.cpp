#ifndef CITYPROJECT_CPP1
#define CITYPROJECT_CPP1
#include "CityProject.h"
#include<iostream>
#include<algorithm>
using namespace std;


                  /*                                                         City class complete implementation                                               */

City::City(string city_name)
{
	this->city_name = city_name;
}
string City::get_city_name()
{
	return city_name;
}

void City::accept_temp()
{
	int x;
	for (int i = 0; i < 24; i++)
	{
		cin >> x;
		temperature.push_back(x);
	}
}
double City::get_max_temp()
{
	return *max_element(temperature.begin(), temperature.end());
}
double City::get_min_temp()
{
	return *min_element(temperature.begin(), temperature.end());
}
double City::get_average_temp()
{
	double sum = 0;
	int n = temperature.size();
	for (int i = 0; i < n; i++)
	{
		sum += temperature[i];
	}
	return sum / n;
}


                                                                    /* */



CapitalCity::CapitalCity(string city_name) : City(city_name)
{
	this->city_name = city_name;
}
string CapitalCity::get_capital_city()
{
	return city_name;
}



#endif