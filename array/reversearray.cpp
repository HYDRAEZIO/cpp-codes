//wap in c++ to find the reverse array
//importing the header file
#include<iostream>
using namespace std;
//defining the main function
int main()
{
    //declaring the variables
    int n,i,j,k,l,m,temp;
    //taking the input from the user
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    //declaring the array
    int a[n];
    //taking the input from the user
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //reversing the array
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    //printing the reversed array
    cout<<"The reversed array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //returning the value 0
    return 0;
}