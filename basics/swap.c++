// wap in cpp to swap the no.s of two variables
//importing the libraries
#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"enter the two numbers";
    std::cin>>a>>b;
    c=a;
    a=b;
    b=c;
    std::cout<<"\n the first no. is "<<a;
    std::cout<<"\n the second no. is "<<b;
    return 0;
}