//wap in c++ to find the average of the given numbers of strings and print the average
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,sum=0;
    float avg;
    std::string s;
    //taking the input from the user
    std::cout<<"Enter the number of strings: ";
    std::cin>>n;
    //taking the input from the user
    for(i=0;i<n;i++)
    {
        std::cout<<"Enter the string: ";
        std::cin>>s;
        sum=sum+s.length();
    }
    //calculating the average
    avg=sum/n;
    //printing the average
    std::cout<<"The average of the strings is: "<<avg;
    return 0;
}