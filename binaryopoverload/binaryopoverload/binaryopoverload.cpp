

#include <iostream>
#include "binary_operator.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    Distance d1(100, 25), d2(200, 50);
    Distance d3,d4;
    d3 = d1 + d2;           //d3=d1.operator+(d2);
    d4 = d2 - d1;
    cout << d3.get_meter() << " meter" << " " << d3.get_centimeter() << " centimeter" << endl;
    cout << d4.get_meter() << " meter" << " " <<d4.get_centimeter() << " centimeter" << endl;
    ++d1;
    --d2;
    cout << d1.get_meter() << " meter" << " " << d1.get_centimeter() << " centimeter" << endl;
    cout << d2.get_meter() << " meter" << " " << d2.get_centimeter() << " centimeter" << endl;


    d1++;
    cout << d1.get_meter() << " meter" << " " << d1.get_centimeter() << " centimeter" << endl;
    d2--;
    cout << d2.get_meter() << " meter" << " " << d2.get_centimeter() << " centimeter" << endl;

    Distance d5(20, 30);
    d5 += 4;
    cout << d5.get_meter() << " meter" << " " << d5.get_centimeter() << " centimeter" << endl;

    cout << d3;

    Distance d6;
    cin >> d6;
    cout << d6;
    return 0;
}

