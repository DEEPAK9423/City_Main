

#include <iostream>
#include<list>
#include<vector>
#include<iterator>
using namespace std;

void display(vector<string>& v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    list<int> listint;
    listint.push_back(100);
    listint.push_back(200);
    listint.push_back(300);
    listint.push_back(400);
    listint.push_back(500);

    list<int>::iterator itr = listint.begin();
    while (itr != listint.end())
    {
        cout << *itr <<" ";
        itr++;
    }
    cout << endl;
    
    vector<string> v;
    v.push_back("Basic");
    v.push_back("Fortran");
    v.push_back("Pascal");
    v.push_back("C++");
    v.push_back("Java");
    display(v);

    vector<string>::iterator itr1 = v.begin();
    while (itr1 != v.end())
    {
        cout << *itr1 << " ";
        itr1+=2;
        if (itr1 > v.end() - 1) break;
    }
    return 0;
}

