//wap in c++ to solve the matrix problem
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
    int a[n][n];
    //taking the input from the user
    cout<<"Enter the elements of the array: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //solving the matrix problem
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                for(k=0;k<n;k++)
                {
                    a[i][k]=0;
                }
                for(l=0;l<n;l++)
                {
                    a[l][j]=0;
                }
            }
        }
    }
    //printing the array
    cout<<"The array is: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //returning the value 0
    return 0;
}