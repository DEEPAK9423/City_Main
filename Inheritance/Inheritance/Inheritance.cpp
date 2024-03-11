
#ifndef INHERITANCE_CPP
#define INHERITANCE_CPP


#include <iostream>
#include "person.h";

//#include "multiple.h"
//#include "diamond.h"
using namespace std;

int main()
{
    cout << "Hello World!\n";
   /* Person p;
    p.display();
    Employee e;
    e.display();*/

   /* Person p("Ajay");
    p.display();
    cout << endl;
    Employee e("Vijay", 20000);
    e.display();
    cout << "\n";
    cout << e.get_total_employees() << endl;*/

   /* A aobj(10);
    B bobj(20);
    C cobj(200, 30);

    aobj.display();
    bobj.display();
    cobj.display();*/

    //Multiple Inheritance :Diamond Hierichal

   /* A aobj(10);
    B bobj(100, 20);
    C cobj(200, 30);
    D dobj(100, 200, 300, 400);

    aobj.display();
    bobj.display();
    cobj.display();
    dobj.display();*/

    Person* ep;
    ep = new Employee("Sujit", 20000);
    ep->display();
    ep = new Manager("Yashwant", 25000, 2200);
    ep->display();

    Person* emp_arr[4];
    emp_arr[0] = new Employee("Ashok", 18000);
    emp_arr[1]= new Employee("Amit", 18000);
    emp_arr[2] = new Manager("Mahesh kumar", 25000, 2200);
    emp_arr[3] = new Manager("Deepak", 24000, 4500);
    for (int i = 0; i < 4; i++)
    {
        emp_arr[i]->display();
    }

#endif

}

