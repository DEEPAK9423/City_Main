

#include <iostream>
#include<map>
using namespace std;

class Student {
    string name;
    int roll;
public:
    Student(int roll, string name)
    {
        this->name = name;
        this->roll = roll;
    }
    void display()
    {
        cout << "ROLL is : " << roll << " " << "name is: " << name << endl;
    }
    string get_name()
    {
        return name;
    }
    int get_roll()
    {
        return roll;
    }

};


int main()
{
    Student stud_arr[] = {
        Student(1,"vijay"),
        Student(2,"Vikash"),
        Student(3,"ViVEk"),
        Student(4,"Dipak")

    };

    map<int, Student> studmap;
    for (int i = 0; i < 4; i++)
        studmap.insert(pair<int, Student>(stud_arr[i].get_roll(), stud_arr[i]));

    map<int, Student>::iterator mitrp;

    mitrp = studmap.find(3);
    Student s = mitrp->second;
    int x = mitrp->first;
    cout << "x: " << x << "\n";
    s.display();
    return 0;

}

