//wap to in cpp to print the greatest no. from the given numbers
//importing the libraries
#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"enter the three numbers";
    std::cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        std::cout<<"the greatest no. is "<<a;
    }
    else if(b>a&&b>c)
    {
        std::cout<<"the greatest no. is "<<b;
    }
    else
    {
        std::cout<<"the greatest no. is "<<c;
    }
    return 0;
}