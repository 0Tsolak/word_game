#include "hider.hpp"

// Driver Code
int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str;
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}

