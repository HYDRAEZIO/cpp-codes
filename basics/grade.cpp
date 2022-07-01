//wap in c++ to print the given grade of the student depend on the marks
//importing the libraries
#include<iostream>
int main()
{
    int marks;
    std::cout<<"enter the marks\n";
    std::cin>>marks;
    if(marks>=90)
    {
        std::cout<<"the grade is A";
    }
    else if(marks>=80)
    {
        std::cout<<"the grade is B";
    }
    else if(marks>=70)
    {
        std::cout<<"the grade is C";
    }
    else if(marks>=60)
    {
        std::cout<<"the grade is D";
    }
    else
    {
        std::cout<<"the grade is F";
    }
    return 0;
}