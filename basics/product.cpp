//wap in c++ to take two no as input and display the result
//inputing libraries
#include<iostream>
#include<conio.h>
//defining the main function
int main()
{
    int a,b,c;
    std::cout << "\n Enter two numbers: ";
    std::cin >> a >> b;// taking input from the user
    c = a * b;// performing the operation
    std::cout << "\n your output is: "<<c;// showing the output
    getch();
    return 0;
}