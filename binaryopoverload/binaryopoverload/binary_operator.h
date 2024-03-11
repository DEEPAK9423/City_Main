#ifndef BINARY_OPERATOR_H
#define BINARY_OPERATOR_H
#include<iostream>
using namespace std;
class Distance {
	int meter;
	int centimeter;
public:
	Distance();
	Distance(int meter, int centimeter);
	int get_meter();
	int get_centimeter();
	void set_meter(int meter);
	void set_centimeter(int centimeter);

	Distance  operator+(Distance  d);
	Distance  operator-(Distance  d);
	Distance operator++();
	Distance operator--();
	Distance operator++(int x);
	Distance operator--(int x);
	Distance operator +=(int meter);


	//operator overloading friend functions
	friend ostream& operator<<(ostream& out, Distance d);
	friend istream& operator>>(istream& in, Distance &d);
	
};



#endif;
