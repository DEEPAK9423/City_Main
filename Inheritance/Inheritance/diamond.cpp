#ifndef DIAMOND_CPP
#define DIAMOND_CPP

#include "diamond.h"
#include<iostream>
using namespace std;

A::A()
{
	this->a = 0;
}

A::A(int a)
{
	this->a = a;
}
void A::display()
{
	cout << "a=" << " " << a << "\n";
}

B::B(int a, int b) :A(a) {
	this->b = b;
}

void B::display() {
	cout << "a="<<" "<< a<<" "<<"b=" << " " << b << endl;
}

C::C(int a, int c) : A(a) {
	this->c = c;
}
void C::display()
{
	cout << "a=" << " " << a << " " << "c= " << c << endl;
}

D::D(int a, int b, int c, int d) : B(a, b), C(a, c) {
	this->d = d;
}

void D::display() {
	cout << "a=" << B::a << "b=" << b << "c=" << c << "d= " << d << endl;
}

#endif