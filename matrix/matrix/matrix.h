#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;

class Matrix {
	int r;
	int c;
	int** mat;
public:
	Matrix();
	Matrix(int r, int c);
	//void populate_matrix(int r, int c);
	//void display_matrix(int r, int c);

	friend istream& operator>>(istream &in, Matrix& m); 
	friend ostream& operator<<(ostream& out, Matrix m);
	Matrix operator+(Matrix m);
	Matrix operator-(Matrix m);
	Matrix operator*(Matrix m);


};



#endif
