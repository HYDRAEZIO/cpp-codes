//wap in c++ to print the following pattern
//importing the libraries
#include<iostream>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5)
            {
                std::cout<<"*";
            }
            else
            {
                if(j==1||j==5)
                {
                    std::cout<<"*";
                }
                else
                {
                    std::cout<<" ";
                }
            }
        }
        std::cout<<"\n";
    }
    return 0;
}