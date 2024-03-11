#ifndef MATRIX_CPP
#define MATRIX_CPP
#include<iostream>
#include "matrix.h"
using namespace std;

Matrix::Matrix()
{
	this->r = 0;
	this->c = 0;
}

Matrix::Matrix(int r, int c)
{
	this->r = r;
	this->c = c;
	mat = new int* [r];
	for (int i = 0; i < r; i++)
	{
		mat[i] = new int[c];
	}
}

istream& operator>>(istream& in, Matrix& m)
{
	cout << "Enter the elements of array";
	for (int i = 0;i < m.r; i++)
	{
		for (int j = 0; j < m.c; j++)
		{
			in >> m.mat[i][j];
		}
	}
	return in;
}

ostream& operator<<(ostream& out, Matrix m)
{
	cout << "Dispalying of elements in matrix" << endl;
	for (int i = 0; i < m.r; i++)
	{
		for (int j = 0; j < m.c; j++)
		{
			out << m.mat[i][j]<<" ";
		}
		cout << endl;
	}
	return out;
}

Matrix Matrix::operator+(Matrix m)
{
	Matrix temp(m.r,m.c);
	for (int i = 0; i < m.r; i++)
	{
		for (int j = 0; j < m.c; j++)
		{
			temp.mat[i][j] = this->mat[i][j] + m.mat[i][j];
		}
	}
	return temp;
}

Matrix Matrix::operator-(Matrix m)
{
	Matrix temp(m.r, m.c);
	for (int i = 0; i < m.r; i++)
	{
		for (int j = 0; j < m.c; j++)
		{
			temp.mat[i][j] = this->mat[i][j] - m.mat[i][j];
		}
	}
	return temp;
}

Matrix Matrix::operator*(Matrix m)
{
	Matrix temp(m.r, m.c);
	for (int i = 0; i < m.r;i++)
	{
		for (int j = 0; j < m.c; j++)
		{
			temp.mat[i][j] = 0;
			for (int k = 0; k < m.c; k++)
			{
				temp.mat[i][j] += this->mat[i][k] * m.mat[k][j];
			}
		}
	}
	return temp;
}





#endif
