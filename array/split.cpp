//wap in c++ to split array in three equal sum subarray
//importing the header file
#include<iostream>
using namespace std;
//defining the main function
int main()
{
    //declaring the variables
    int n,i,j;
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
    //splitting the array in three equal sum subarray
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==0)
            {
                cout<<"The subarray is: "<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    //returning the value 0
    return 0;
}
