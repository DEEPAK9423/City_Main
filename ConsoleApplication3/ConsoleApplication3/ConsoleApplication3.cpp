#include <iostream>
using namespace std;
class Employee {
    int id;
public:
    void set_id(int n)
    {
        if (n > 0) id = n;
        else cout << "Invalid id";
    }
    int  get_id()
    {
        return id;
    }
};

int main()
{
    Employee e;
    e.set_id(5);
    int ans = e.get_id();
    cout << ans;
    return 0;
}