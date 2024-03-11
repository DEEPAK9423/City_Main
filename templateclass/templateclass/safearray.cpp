#include<iostream>
using namespace std;

const int SIZE = 10;
template<class T=int,int size=12>

class safeArray {
	T array[SIZE];
public:
	safeArray() {
		for (int i = 0; i < SIZE; i++) array[i] = i;
	}

	safeArray(int size) {
		for (int i = 0; i < size; i++) array[i] = i;
	}
	//operator overloading function
	T& operator[](int index)
	{
		if (index < 0 || index >= SIZE)
		{
			cout << "Index value is out of range\n";  // if array index is doesn't exist then exit;
			exit(0);
		}
		return array[index];
	}
};
int main()
{
	safeArray <double> safearr;  //create a specific type array from generic type array
	double d = safearr[0];
	cout << d << endl;
	d = safearr[1];
	cout << d << endl;
	d = safearr[2];
	cout << d << endl;
	for (int i = 3; i < SIZE; i++)
	{
		cout << safearr[i] << "\n";
	}

	safeArray<> sintarray1;
	safeArray<double,10> sintarray2();
	safeArray<int, 10> sintarray3();
	return 0;
}