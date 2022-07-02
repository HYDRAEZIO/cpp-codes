//wap in c++ to find the sum of the given array of numbers
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,sum=0;
    std::cout<<"enter the number of elements: ";
    std::cin>>n;
    int a[n];
    //taking the input from the user
    for(i=0;i<n;i++)
    {
        std::cout<<"enter the element: ";
        std::cin>>a[i];
        sum=sum+a[i];
    }
    //printing the sum
    std::cout<<"the sum is: "<<sum;
    return 0;
}