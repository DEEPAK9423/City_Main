
#include <iostream>
using namespace std;

class Animal {
public:
    void eat()
    {
        cout << "eat1" << endl;
    }
    void speak();
    
};

class Dog : public Animal {
public:
    void eat()
    {
        cout << "eat2";
    }
    void speak()
    {
        cout << "barking" << endl;
    }
};



int main()
{
    Dog* pdog = new Dog();
    pdog->speak();
    return 0;
}

