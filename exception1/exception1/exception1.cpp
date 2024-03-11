

#include <iostream>
using namespace std;

class MyException {
    int errorno;
    char message[200] = "This is user defined exception!";
public:
    MyException()
    {

    }
    MyException(int erronor, const char* messagep) {
        this->errorno = errorno;
        strcpy_s(message,strlen(message), messagep);
    }
    int get_errorno()
    {
        return errorno;
    }
    char* get_message() {
        return message;
    }
};

class MyDerivedException : public MyException {
    char derived_exmessage[100]= "This is the derived message exception";
public:
    MyDerivedException()
    {
        char dmessage[100] = "This is default derive dexcewption";
        strcpy_s(derived_exmessage,strlen(dmessage), dmessage);
    }
    MyDerivedException(const char* dex_messagep, int errorno, const char* messagep) : MyException(errorno, messagep)
    {
        strcpy_s(derived_exmessage, strlen(dex_messagep), dex_messagep);
    }
    /*int get_errorno()
    {
        return errorno;
    }*/
    char* get_derived_message() {
        return derived_exmessage;
    }
};

void divide(int x, int y)
{
    MyException eobj(1, "divide by zero error");
    /*eobj = new MyException(1, "divide by zero");*/
    cout << "here is strat of divide function" << endl;
    if (y == 0) throw eobj;
    MyDerivedException derived_exobj;
    if (x < 0) throw derived_exobj;
    //cout << "The next statements will not be executed" << endl;
    double z = x / y;
}

int accept_int(const char* messagep)
{
    int num;
    cout << messagep;
    cin >> num;
    return num;
}

int main()
{
    cout << "Hello World!\n";
    try {
        int a = accept_int("Enter the value in the range 10-100");
        int b = accept_int("Enter the value in the range 1-10");

        if (!(a >= 10 && a <= 100)) throw a;
        if (!(b >= 1 && b <= 10)) throw b;
        divide(a, b);
        cout << "Division is successful!" << endl;
    }catch(int value)
    {
        cout << "The value entered is out of range" << value<<endl;
    }
    catch (MyDerivedException mydexobj)
    {
        cout << mydexobj.get_derived_message() << endl;
    }
    cout << "main() function ended" << endl;
    return 0;
}

