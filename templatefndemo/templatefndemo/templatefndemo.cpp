

#include <iostream>
using namespace std;

//template fuction definition

template<class T>

void largest_three(T x, T y, T z)
{
    T largest = x > y ? (x > z ? x : z) : (y > z ? y : z);
    cout << "Largest=" << largest<<"\n";
}

template<class T>
void display(char* message, T num)
{
    cout << message << " " << num << endl;
}

template<class T1, class T2>
void display(T1 num1, T2 num2)
{
    cout <<"num1= " << num1 << " " <<"num2= "<< num2 << " " << endl;
}
template<class T>
void myswap(T& x, T &y)
{
    cout << "template version of myswap() is called" << "\n";
    T temp;
    temp = x;
    x = y;
    y = temp;

}

void second_demo() {
    //swap(100, 200);
    int a = 10, b = 20;
    myswap(a, b);
    cout << "a= " << a << " b= " << b << endl;
}


int main()
{
    second_demo();
}






