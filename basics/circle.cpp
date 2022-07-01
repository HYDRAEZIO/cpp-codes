//wap a program to find out the area and parametre of circle
//including libraries
#include<iostream>
#include<conio.h>
//defining the main function
int main()
{
    float r,a,p;
    std::cout << "\n Enter the radius of the circle: ";
    std::cin >> r;// taking input from the user
    a = 3.14 * r * r;// performing the operation
    p = 2 * 3.14 * r;// performing the operation
    std::cout << "\n the area of the circle is: "<<a;// showing the output
    std::cout << "\n the parametre of the circle is: "<<p;// showing the output
    getch();
    return 0;
}