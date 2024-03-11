

#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    shape* ptr[100];
    int count = 0;
    bool t = 1;
    do {
        cout <<  "--------------" << endl;
        cout << "1. Add Circle" << endl;
        cout << "2. Add rectangle" << endl;
        cout << "3. Add Sphere" << endl;
        cout << "4. Add cylinder" << endl;
        cout << "5. Add cuboid" << endl;
        cout << "6.Display shapes" << endl;
        cout << "7. Exit" << endl;
        int n;
        cout << "Enter the operations do you want to perform" << endl;
        cin >> n;
        switch (n) {
        case 1:
            cout << "Enter the radius of the circle" << endl;
            int radius;
            cin >> radius;
            ptr[count] = new circle(radius);
           /* ptr[count]->calculate_area();
            ptr[count]->calculate_perimeter();*/
            count++;
            break;
        case 2:
            cout << "Enter length and braedth of rectangle" << endl;
            int l, b;
            cin >> l >> b;
            ptr[count] = new rectangle(l,b);
           /* ptr[count]->calculate_area();
            ptr[count]->calculate_perimeter();*/
            count++;
            break;

        case 3:
            cout << "Enter the radius of the sphere" << endl;
            int rr;
            cin >> rr;
            ptr[count] = new sphere(rr);
            count++;
            break;
        case 4:
            cout << "Enter the radius and height of cylinder" << endl;
            int r, h;
            cin >> r >> h;
            ptr[count] = new cylinder(r,h);
            count++;
            break;
        case 5:
            cout << "Enter the length , breadth and height of cuboid" << endl;
            int length, breadth, height;
            cin >> length >> breadth >> height;
            ptr[count] = new cuboid(length,breadth,height);
            count++;
            break;
        case 6:
            for (int i = 0; i < count; i++)
            {
                ptr[i]->display();
            }
            break;
        case 7:
            t = 0;
        }
    } while (t);
    
    return 0;
}

