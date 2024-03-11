





#include <iostream>
using namespace std;

const int Size = 10;


template<class T>
class Stack {
    T stackArray[Size];
    int tos;
public:
    Stack<T>() { tos = 0; }
    void push(T ob);
    T pop();
};

template<class T>
void Stack<T>::push(T ob)
{
    if (tos < Size)
    {
        stackArray[tos] = ob;
        tos++;
    }
    else
    {
        cout << "Not possible to push elements in the array" << "\n";
    }
    
}

template<class T>
T Stack<T>::pop()
{
    int  value=0;
    if (tos > 0)
    {
        --tos;
        return  stackArray[tos];
    }
    else
    {
        cout << "Not possible to pop elemnts from the stack" << endl;
        return value;
    }
   
}

/*int main()
{
    Stack<int> intstack;
    intstack.push(100);
    intstack.push(200);
    intstack.push(300);
    intstack.push(400);
    intstack.push(500);

    cout << intstack.pop() << endl;
    intstack.push(600);
    intstack.push(700);
    return 0;
}*/

