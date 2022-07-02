//wap in c++ to find maximum and minimum number in given array.
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j,k;
    std::cout<<"Enter the number of elements: ";
    std::cin>>n;
    int a[n];
    //taking the input from the user
    for(i=0;i<n;i++)
    {
        std::cout<<"enter the element: ";
        std::cin>>a[i];
    }
    //printing the maximum and minimum number
    int max=a[0];
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    std::cout<<"the maximum number is: "<<max;
    std::cout<<"the minimum number is: "<<min;
    return 0;
}