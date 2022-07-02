//wap in c++ to print fibonacci numbers of n terms where n is argument passed by user
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j,k;
    std::cout<<"Enter the number of terms: ";
    std::cin>>n;
    int a[n];
    //taking the input from the user
    for(i=0;i<n;i++)
    {
        a[i]=0;
    }
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    //printing the fibonacci numbers
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<"\n";
    }
    return 0;
}