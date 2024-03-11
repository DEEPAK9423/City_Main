

#include <iostream>
using namespace std;

inline int add(int x = 100, int y = 100)
{
    int sum = x + y;
    return sum;
}

class Function {
    int sum;
public:
    inline void add(int x, int y=5)
    {
        sum = x + y;
    }
   inline  int get_sum() {
        return sum;
    }

};

int main()
{
    std::cout << "Hello World!\n";
    Function fn;
    fn.add(4, 5);
    cout << fn.get_sum() << endl;
    fn.add(4);
    cout << fn.get_sum()<< endl;

    //this will call global inline functions
    cout << add() << "\n";
    cout << add(1) << "\n";
    cout << add(1,2) << "\n";
    char ch=retref() = 'Z';
    cout << "ch=" << ch;
    return 0;
}

char& retref() {
    char x = 'A';
    char& xref = x;
    cout << "The function retref() is called" << "\n";
    return xref;
}

