//wap in c++ to find the element that repeat more than n/2 times
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
    //finding the element that repeat more than n/2 times
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"The element that repeat more than n/2 times is: "<<a[i]<<endl;
            }
        }
    }
    //returning the value 0
    return 0;
}