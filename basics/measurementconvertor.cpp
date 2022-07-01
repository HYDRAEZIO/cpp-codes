//wap in c++ to convert the temperature from inches to meters and vice versa
//importing the libraries
#include<iostream>
#include<conio.h>
//defining the main function
int main()
{
    float i,m;
    std::cout << "\n Enter the value of inches: ";
    std::cin >> i;// taking input from the user
    m=i/39.37;// performing the operation
    std::cout << "\n The value in meter is"<<m;// showing the output

}