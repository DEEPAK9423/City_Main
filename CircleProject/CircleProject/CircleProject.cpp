
#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
   /* Circle* cp = new Circle(100);

    cp->Calculate_area();
    cp->Calculate_circumference();
    cout << "Area of Circle is :" << cp->get_area() << endl;
    cout << "Circumference of Circel is :" << cp->get_circumference() << endl;*/

    //create a block of memory for pointers to cirle

    //Circle* cparr[4];  //loop to allocate memory dynamically for 4 Circle objects whose pionters are stored inside the array
    //for (int i = 0; i < 4; i++) cparr[i] = new Circle((i+1)*10);

    //for (int i = 0; i < 4; i++) cparr[i]->Calculate_area();

    //for (int i = 0; i < 4; i++)
    //    cout <<"Area of"<<i<< "th circle is :"<< cparr[i]->get_area() << endl;

    //Circle c1, c2, c3, c4;
    //Circle* cparr1[] = { &c1,&c2,&c3,&c4 };

   
    //cout << "Now using the another way such that above ways can be done at a time" << endl;
    /*for (int i = 0; i < 4; i++)
    {
        cparr[i] = new Circle((i + 1) * 10);
        cparr[i]->Calculate_area();
        cout<<"Area of ith circle is"<<cparr[i]->get_area() << endl;
    }*/
    
    /*void display_area(Circle* cparr1, int size, char* message)
    {
        cout << message << "\n";
        for (int i = 0; i < 4; i++) {
            cparr1[i]->Calculate_area();
            cout << cparr1[i]->get_area() << "\t";
        }
    }
    display_area(cparr1, 4, "Areas of Circle");
    */
    Circle c(10);
    Sphere s(10);
    c.Calculate_area();
    c.Calculate_circumference();
    cout << c.get_area()<<"\n";
    cout << c.get_circumference() << endl;
    s.Calculate_volume();
    s.Calculate_surface_area();
    cout << s.get_volume() << "\n";
    cout << s.get_surface_area() << "\n";
}

