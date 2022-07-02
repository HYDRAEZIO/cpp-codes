//wap in c++ to find the smallest no among three no.
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j;
    std::cout<<"enter the number s: ";
    std::cin>>n>>i>>j;
    //printing the smallest no
    if(i<j&&i<n)
    {
        std::cout<<"the smallest no is: "<<i;
    }
    else if(j<i&&j<n)
    {
        std::cout<<"the smallest no is: "<<j;
    }
    else
    {
        std::cout<<"the smallest no is: "<<n;
    }
    return 0;
}
