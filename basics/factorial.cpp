//wap in c++ to find the factorial value of any number entered through the keyboard
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j,k;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    //printing the factorial value
    for(i=1;i<=n;i++)
    {
        k=n*i;
        std::cout<<n<<"*"<<i<<"="<<k<<"\n";
    }
    return 0;
}