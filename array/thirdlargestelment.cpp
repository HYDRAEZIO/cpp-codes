//wap in c++ to find the third largest element in an array of integers.
//importing the library
#include<iostream>
using namespace std;
//declaring the function
int thirdlargest(int a[],int n)
{
    int max1=a[0],max2=a[0],max3=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max3=max2;
            max2=a[i];
        }
        else if(a[i]>max3)
        {
            max3=a[i];
        }
    }
    return max3;
}
//main function
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The third largest element in the array is: "<<thirdlargest(a,n);
    return 0;
}