
#include "X.h"
#include <iostream>
using namespace std;

int main()
{
    X xobj;
    cout << "x: " << xobj.get_x() << endl;
    afn(xobj);
   // cout <<"x:"<< xobj.get_x() << endl;
    return 0;
}

