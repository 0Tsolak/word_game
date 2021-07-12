#include "hider.hpp"     // C++ program to print all permutations with duplicates allowed
 
 
// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
void permute(string a, int left, int right)
{
    // Base case
    if (left == right) {
        cout << a << endl;
    }
    else 
    {
        // Permutations made
        for (int i = left; i <= right; i++)
        {
 
            // Swapping done
            swap(a[left], a[i]);
 
            // Recursion called
            permute(a, left+1, right);
 
            //backtrack
            swap(a[left], a[i]);
        }
    }
}
 
