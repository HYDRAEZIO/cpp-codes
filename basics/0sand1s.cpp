//wap in c++ to seprate 0s on left side and 1s on right side of the given array.
//importing the libraries
#include<iostream>
int main()
{
    //declaring the variables
    int n,i,j,k;
    std::cout<<"enter the number of elements: ";
    std::cin>>n;
    int a[n];
    //taking the input from the user
    for(i=0;i<n;i++)
    {
        std::cout<<"enter the element: ";
        std::cin>>a[i];
    }
    //printing the array
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
    //seprating the 0s and 1s
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(j=i;j<n;j++)
            {
                if(a[j]==1)
                {
                    for(k=j;k<n;k++)
                    {
                        std::cout<<a[k]<<" ";
                    }
                    break;
                }
            }
            break;
        }
    }
    return 0;
}