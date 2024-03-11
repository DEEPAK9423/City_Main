

#include<iostream>
using namespace std;

class Matrix {
public:
	int matrix[3][3];
	void accept() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << "Enter value [" << (i + 1) << "]" << "[" << (j + 1) << "] :";
				cin >> matrix[i][j];
			}
		}
	}

	void add_matrices(int m1[][3], int rows1, int m2[][3], int rows2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] = m1[i][j] + m2[i][j];
			}
		}
	}

	void sub_matrices(int m1[][3], int rows1, int m2[][3], int rows2)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] = m1[i][j] -m2[i][j];
			}
		}
	}

	void mul_matrices(int m1[][3], int rows1, int m2[][3], int rows2)
	{
		int a, b;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int x = i, y = j;
				matrix[i][j] = 0;
				for (int u = 0; u < 3; u++) {
					a = m1[x][u]; b = m2[u][y];
					matrix[i][j] += a * b;
				}
			}
		}
	}

	void display() {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix[i][j]<<" ";
			}
			cout << endl;
		}
	}
};

//struct student {
//	int rollno;
//	char name[20];
//	char email[20];
//};
//void display(struct student &s)
//{
//	cout << s.rollno << " " << s.name << " " << s.email << "\n";
//}

int main()
{
	Matrix m1,m2,m3;
	m1.accept();
	m2.accept();
	m3.mul_matrices(m1.matrix, 3, m2.matrix, 3);
	m3.display();

	/*struct student s1 = { 1,"Sudeep","s@gmail.com" };
	cout << "sizeof(s1):" << sizeof(s1) << "\n";
	display(s1);*/

	return 0;

	//References are only initialized during their declartion and hence they are called to be constant pointer.
	



}

