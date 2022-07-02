//wap in c++ to take the number as input and print their multiplicity upto 10
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j,k;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    //printing the multiplicity upto 10
    for(i=1;i<=10;i++)
    {
        k=n*i;
        std::cout<<n<<"*"<<i<<"="<<k<<"\n";
    }
    return 0;
}