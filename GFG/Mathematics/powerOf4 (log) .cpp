#include <iostream>
using namespace std;

int isPowerOfFour(unsigned int n);

/*Driver program to test above function*/
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (isPowerOfFour(n))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    //getchar();
}
// } Driver Code Ends

#include <bits/stdc++.h>
int isPowerOfFour(unsigned int n)
{
    double d = log(n) / log(4);
    if ((int)d == d)
        return 1;
    else
        return 0;
    // Your code goes here
}