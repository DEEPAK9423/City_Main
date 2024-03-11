

#include <iostream>
using namespace std;

//template<typename T1>
//void bubbleSort(T1 arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)  // running till less than i
//        {
//            if (arr[j] > arr[j + 1])  //finding if the elements is larger  than the next elements
//            {
//                T1 temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//template<typename T1 >
//void printarray(T1 arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}

void incrx(int* xp)
{
	cout << "incr() function started" << endl;
	(*xp)++;
}

int main()
{
   // int n;
   // cout << "Enter the size of array do you want to enter" << endl;
   // cin >> n;
   // int* arr = new int[n];
   //// char* arr = new char[n];
   // cout << "Enter the elements of the array" << endl;
   // for (int i = 0; i < n; i++)
   // {
   //     cin >> arr[i];
   // }
   // cout << "Elements order before sorting is" << endl;
   // printarray(arr, n);
   // cout << endl;
   // bubbleSort(arr, n);
   // cout << "Elements order after sorting is" << endl;
   // printarray(arr, n);
	cout << "main() function started" << endl;
	int x = 100, y;
	incrx(&x);
	y = x + 12;
	cout << " x= " << x << " " << "y= " << y << endl;
	return 0;
}

