// wap in c++ to print frequency of all element in sorted array.
// importent: use unique array to store element and use unique array to store frequency.
// importent: use two pointer to store element and frequency.
// importing the library.
//  C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the frequency
// of each element of the sorted array
void printFreq(vector<int> &arr, int N)
{

    // Stores the frequency of an element
    int freq = 1;

    // Traverse the array arr[]
    for (int i = 1; i < N; i++)
    {

        // If the current element is equal
        // to the previous element
        if (arr[i] == arr[i - 1])
        {

            // Increment the freq by 1
            freq++;
        }

        // Otherwise,
        else
        {
            std::cout << "Frequency of " << arr[i - 1] << " is: " << freq << endl;
            // Update freq
            freq = 1;
        }
    }

    // Print the frequency of the last element
    std::cout << "Frequency of " << arr[N - 1] << " is: " << freq << endl;
}

// Driver Code
int main()
{

    // Given Input
    vector<int> arr = [1, 1, 1, 2, 3, 3, 5, 5,8, 8, 8, 9, 9, 10];
    int N = arr.size();

    // Function Call
    printFreq(arr, N);
    return 0;
}
