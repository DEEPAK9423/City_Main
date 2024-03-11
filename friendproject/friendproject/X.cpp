#ifndef X_CPP
#define X_CPP
#include<iostream>
using namespace std;
#include "X.h"


X::X() {
	x = 0;
}
X::X(int x) {
	this->x = x;
}
int X::get_x()
{
	return x;
}


//friend function
void afn(X xobj) {
	xobj.x = 200;
	cout <<"x: "<< xobj.x;
 }
#endif