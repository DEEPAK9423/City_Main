
/*
Program:- To demonstrate about 2D Arrays
Program By:- Deepak Kumar
Date:- 7/2/2024
*/

#include <iostream>
using namespace std;

char cities[][20] = {
    "Delhi",
    "Mumbai",
    "Patna",
    "Nagpur",
    "Satna",
    "Katni"
};

void displaycities()
{
    for (int i = 0; i < 6; i++)
        cout << cities[i] << "\n";
}

class Array2D {
    int a[5][3];
public:
    void populate()
    { 
        int counter = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = (counter+ 1) * 10;
                counter++;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

class pointer {
    int* ip;
    char* cp;
public:
    
    void display() {
        int x = 100;
        ip = &x;

        int** ip2 = &ip;
        char ch = 'A';
        cp = &ch;

        /* cout << "x=" << " " << x << "\n";
         cout << "x= " << *ip << " \n";
         cout << "Address of x= " << ip << "\n";

         cout << "ip=" << " " << ip << "\n";
         cout << "ip= " << *ip2 << " \n";
         cout << "Address of ip= " << ip2 << "\n";

         cout << "x=" << " " << **ip2 << " " << "\n";*/

        cout << "ch=" << " " << ch << "\n";
        cout << "ch= " << *cp << " \n";
        cout << "Address of ch= " << (void*)cp << "\n";

        char** cp2 = &cp;

        cout << "cp=" << " " << (void*)cp << "\n";
        cout << "cp= " << (void*)*cp2 << " \n";
        cout << "Address of cp= " << (void*)cp2 << "\n";
    }
        void numsptr() {
            int* ip;
            int x = 100, y = 200, z = 300;
            ip = &x; cout << *ip << "\n";
            ip = &y; cout << *ip << "\n";
            ip = &z; cout << *ip << "\n";

            int intarr[] = { x,y,z };
            ip = &intarr[0]; cout << *ip << "\n";
            ip = &intarr[1]; cout << *ip << "\n";
            ip = &intarr[2]; cout << *ip << "\n";

            ip = intarr;
            cout << *(ip+0) << "\n";
            cout << *(ip + 1) << "\n";
            cout << *(ip + 2) << "\n";
        }
};

int main()
{
   
    /*Array2D arr;
    arr.populate();
    arr.display();*/
    //displaycities();

    pointer p;
    p.numsptr();
    return 0;
}

