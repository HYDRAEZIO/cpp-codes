//wap in c++ to find the number greater than the average of the number of a given array.
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,sum=0,avg,greater=0;
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
    //calculating the average
    avg=sum/n;
    //printing the average
    std::cout<<"the average is: "<<avg;
    //finding the greatest no.
    for(i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            greater=a[i];
        }
    }
    //printing the greatest no.
    std::cout<<"the greatest no. is: "<<greater;
    return 0;
}