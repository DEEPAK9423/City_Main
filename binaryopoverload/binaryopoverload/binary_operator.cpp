#ifndef BINARY_OPERATOR_CPP
#define BINARY_OPERATOR_CPP

#include "binary_operator.h"
#include <iostream>
using namespace std;

Distance::Distance()
{
	meter = 1;
	centimeter = 1;
}
Distance::Distance(int meter, int centimeter)
{
	this->meter = meter;
	this->centimeter = centimeter;
}
int Distance::get_meter() {
	return meter;
}
int Distance::get_centimeter() {
	return centimeter;
}
void Distance::set_meter(int meter) {
	this->meter = meter;
}
void Distance::set_centimeter(int centimeter) {
	this->centimeter = centimeter;
}

Distance Distance::operator+(Distance d)
{
	Distance temp;
	temp.meter = meter + d.meter;
	temp.centimeter = centimeter + d.centimeter;
	return temp;
}
Distance Distance::operator-(Distance d)
{
	Distance temp;
	temp.meter = meter - d.meter;
	temp.centimeter = centimeter - d.centimeter;
	return temp;
}

Distance Distance::operator++()
{
	++meter;
	return *this;
}
Distance Distance::operator--()
{
	--meter;
	return *this;
}
Distance Distance::operator++(int x)
{
	Distance temp;
	temp = *this;
	meter++;
	return temp;
}

Distance Distance::operator--(int x)
{
	Distance temp;
	temp = *this;
	meter--;
	return temp;
}

Distance Distance::operator+=(int meter)
{
	this->meter += meter;
	return *this;
}


ostream& operator<<(ostream& out, Distance d) {
	out << d.meter << " meter " << d.centimeter << " centimeter " << endl;
	return out;
}
istream& operator>>(istream& in, Distance &d) {
	cout << "Enter Meter and centimeter" << endl;
	in >> d.meter >> d.centimeter;
	return in;
}

#endif