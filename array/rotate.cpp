//wap in c++ to left rotate by k steps */
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
    //taking the input from the user
    cout<<"Enter the number of steps: ";
    cin>>k;
    //left rotating the array by k steps
    for(i=0;i<k;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    //printing the array
    cout<<"The array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    //returning the value 0
    return 0;
}