/*
Program : To demonstrate the logical operators in C++
Program By: Deepak kumar
Date : 6/2/2024
*/

#include <iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;

//class LogicalDemo {
//    int x;
//
//public:
//     LogicalDemo(int s)
//    {
//        x = s;
//        cout << "The value of x is :" << x << "\n";
//    }
//
//    ~LogicalDemo() {
//        cout << "The Program Ends Here" << "\n";
//    }
// 
//};

int main()
{
    //LogicalDemo ld(5);
    int num, largest,smallest;
    int n = 10;
    cin >> num;
    largest = num;
    smallest = num;
    n--;
    while (n > 0)
    {
        cin >> num;
        if (num > largest) largest = num;
        if (num < smallest) smallest = num;
        n--;
    }

    cout << "The largest and smallest number is" << largest << " and" << smallest << " respectively" << "\n";

    return 0;
}


