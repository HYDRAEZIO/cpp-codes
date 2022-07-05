//wap in c++ to find the smallest element in an array of integers.
//importing libraries
#include <iostream>
using namespace std;
//declaring the function
int smallest(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
  
  
    return min;
}
//main function
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "The smallest element in the array is: " << smallest(a, n);
    return 0;
}