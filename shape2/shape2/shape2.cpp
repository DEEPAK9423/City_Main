
#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.14;

class Circle {
protected:
    int r;
public:
    Circle()
    {
        this->r = 1;
    }
   virtual  double get_area()
    {
        return PI * pow(r, 2);
    }
};

class Cylinder : public  Circle
{
protected:
     int h;
public:
    Cylinder()
    {
        this->h = 1;
    }
    double get_area()
    {
        return PI * pow(r, 2) * h;
    }
    double get_volume()
    {
        return 2 * PI * pow(r, 2) * h;
    }

};


int main()
{
    Circle* cptarr[4];
    cptarr[0] = new Circle();
    cptarr[1] = new Cylinder();
    cptarr[2] = new Circle();
    cptarr[3] = new Cylinder();

    for (int i = 0; i < 4; i++)
    {
        cout << "Area: " << cptarr[i]->get_area() << endl;

        if (strcmp(typeid(*cptarr[i]).name(), "class Cylinder") == 0)
        {
            Cylinder *cylp = NULL;
            cylp = (Cylinder*)cptarr[i];
            cout << "Volume of cyliner" << cylp->get_volume() << endl;
        }
    }
    return 0;
}

