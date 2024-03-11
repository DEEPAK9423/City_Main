#ifndef CITYPROJECT_H
#define CITYPROJECT_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class City {
protected:
	string city_name;
	vector<double> temperature;
public:
	City(string city_name);
	string get_city_name();
	void accept_temp();
	void display();
	double get_max_temp();
	double get_min_temp();
	double get_average_temp();
	

	
};

class CapitalCity: public City {
	string state;
public:
	CapitalCity(string city_name);
	string get_capital_city();
	void accept_temp();
	void display();
	double get_max_temp();
	double get_min_temp();
	double get_average_temp();

};


#endif
