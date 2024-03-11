
#include "matrix.h";
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int r, c;
    cout << "Enter the number of rows and columns int the matrix m1" << endl;
    
    cin >> r >> c;
    Matrix m1(r, c);
    cout << "Fill the elements in matrix m1" << endl;
    cin >> m1;

    cout << "Enter the number of rows and columns int the matrix m2" << endl;

    cin >> r >> c;
    Matrix m2(r, c);
    cout << "Fill the elements in matrix m2" << endl;
    cin >> m2;

    Matrix m3, m4, m5;
    m3 = m1 + m2;
    m4 = m1 - m2;
    m5 = m1 * m2;
    cout << "Displaying the sum matrix" << endl;
    cout << m3;
    cout << "Dispalying the difference matrix" << endl;
    cout << m4;
    cout << "Displaying the product matrix" << endl;
    cout << m5;
    

    return 0;
}

