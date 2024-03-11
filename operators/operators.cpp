

/*
Program : To use operators
Program By : Deepak Kumar
Date: 05/02/2024
*/

#include <iostream>
using namespace std;


class Arithmetic {
	int x, y;
	//double result;
public:

	void set_x(int p)
	{
		x = p;
	}

	void set_y(int b)
	{
		y = b;
	}

	int get_x()
	{
		return x;
	}

	int get_y()
	{
		return y;
	}
	/*int add()
	{
		return x + y;
	}
	int subtract() {
		return x - y;
	}

	int multiply()
	{
		return x * y;
	 }
	double divide()
	{
		return (float)x / y;
	}
	int modulo_divide()
	{
		return x % y;
	}*/

	void display(char op)
	{
		switch (op) {
		case '+': 
			cout << x + y << "\n";
			break;
		case '-' :
			cout << x - y << "\n";
			break;
		case '*' :
			cout << x * y << "\n";
			break;
		case '/' :
			cout << x / y << "\n";
			break;
		case '%' :
			cout << x % y << "\n";
	  }
	}
};

int main()
{
	Arithmetic a;
	/*double res;
	int p, b;
	cout << "Enter the value of p" << "\n";
	cin >> p;
	cout << "Enter the value of b" << "\n";
	cin >> b;*/
	a.set_x(100);
	a.set_y(25);

	/*res = a.add();
	cout << res << "\n";
	res = a.subtract();
	cout << res << "\n";

	res = a.multiply();
	cout << res << "\n";

	res = a.divide();
	cout << res << "\n";

	res = a.modulo_divide();
	cout << res << "\n";*/

	// cout << a.get_x() <<" "<< a.get_y() << "\n";

	a.display('+');
	a.set_x(200);
	a.set_y(25);
	a.display('-');
	a.set_x(25);
	a.set_y(25);
	a.display('*');
	a.set_x(200);
	a.set_y(50);
	a.display('/');
	a.set_x(1000);
	a.set_y(200);
	a.display('%');


	return 0;
}


