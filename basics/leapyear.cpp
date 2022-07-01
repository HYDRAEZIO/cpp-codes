// wap in c++ to check weather the given year is a leap year or not
// importing the libraries
#include<iostream>
int main()
{
    int year;
    std::cout<<"enter the year";
    std::cin>>year;
    if(year%4==0)
    {
        std::cout<<"the given year is a leap year";
    }
    else
    {
        std::cout<<"the given year is not a leap year";
    }
    return 0;
}
