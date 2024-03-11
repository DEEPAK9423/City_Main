/*
Program :- Swapping
Program By:- Deepak kumar
Date:- 8/2/2024
*/

#include <iostream>
using namespace std;

class Swap {
public:
	void swap(int x, int y)
	{
		cout << "Initial values of x and y are " << x << " and " << y << " respectively" << endl;
		int temp;
		temp = x;
		x = y;
		y = temp;
		cout<<"New value of x and y are " << x << " and " << y << " respectively" << endl; 
	}
};

int main()
{
	Swap obj;
	int x = 4, y = 5;
	obj.swap(x,y);
	return 0;
}

