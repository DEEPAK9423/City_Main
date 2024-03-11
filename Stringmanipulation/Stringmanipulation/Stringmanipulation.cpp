

#include <iostream>
using namespace std;

class stringman {
public:
	void palindrome(){
		cout << "Enter the string" << "\n";
		string s;
		cin >> s;

		int len = s.length();
		bool flag = true;
		for (int i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - i - 1])
			{
				flag = false;
				break;
			}
		}
		if (flag) cout << " The Entered string" << " " << s << " " << "is palindrome." << " \n";
		else cout << "The Entered string is not palindrome" << "\n";
	}

	bool palinptr(const char *sp)
	{
		int len = strlen(sp);
		int iterations = len / 2;
		int i = 0;
		bool flag = true;
		for (; i < iterations; i++)
		{
			if (*(sp + i) != *(sp + len - i - 1)) {
				flag = false;
				break;
			}
		}
		return flag;
	}

	bool palinptr3(const char* sp)
	{
		int len = strlen(sp);
	
		int start = 0,end=len-1;
		bool flag = true;

		while (start <= end) {
			if (*(sp + start++) != *(sp + end--)) {
				flag = false;
				break;
			}
		}
		return flag;
	}

	bool palinptr2()
	{
		cout << "Enter the string";
		string s;
		cin >> s;
		int n = s.length();
		int start = 0, end = n - 1;
		bool flag = true;
		while (start <= end)
		{
			if (s[start++] != s[end--]) {
				flag = false;
				break;
			}
		}
		return flag;
	}
};

int main()
{
	/*stringman st;
	st.palindrome();*/
	/*bool value=st.palinptr("NAYAN");
	if (value) cout << "The Given string is Palindrome" << "\n";
	else cout << "The Given string is not palindrome" << "\n";*/

	/*stringman st;
	bool val = st.palinptr2();
	if (val) cout << "The Entered String is palindrome" << "\n";
	else cout << "The Entered string is not palindrome" << "\n";*/

	stringman st;
	bool value = st.palinptr3("NAYAN");
	if (value) cout << "The Entered String  NAYAN is palindrome" << " \n";
	else cout << "the Entered string is not palindrome" << "\n";
	return 0;
}

