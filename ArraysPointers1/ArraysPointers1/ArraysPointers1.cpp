/*
Program:-To demonstrate Arrays and pointers
Program By : -Deepak Kumar
Date : 06 / 02 / 2024
*/

//#include <iostream>
//using namespace std;
//
//class Array {
//	int a[10];
//	char name[27];
//
//public:
//	void populate() {
//		for (int i = 0; i < 10; i++)
//		{
//			a[i] = (i + 1) * 10;
//		}
//	}
//
//	void populateC() {
//		for (int i = 0; i < 26; i++)
//		{
//			name[i] = 'A' + i;
//		}
//	}
//
//
//	void display() {
//		for (int x : a)
//		{
//			cout << x << " ";
//		}
//		cout << "\n";
//	}
//	void find_vowels() {
//		int y = 0;
//		for (char x : name)
//		{
//			if (x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U') y++;
//		}
//		cout << "The number of vowels in name is" << y << " " << "\n";
//	}
//};
//
//int main()
//{
//	Array arr;
//	arr.populate();
//	arr.display();
//	arr.populateC();
//	arr.find_vowels();
//	return 0;
//}

#include<iostream>
using namespace std;

bool ispalindrome(string s)
{
	int n = s.length();
	for (int i = 0; i < n / 2; i++)
	{
		if (s[i] != s[n - i - 1]) {
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	string str;
	cout << "Enter the string";
	cin >> str;
	if (ispalindrome(str)) cout << str << " is palindrome string" << " \n";
	else cout << "This is not palindrone";
	return 0;
}