#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n--;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

// using sum of natural numbers
        // int sum = 0;
        // for (int i = 0; i < n; i++)
        //     sum += a[i];
        // n++;
        // n = n * (n + 1) / 2;
        // cout << n - sum << endl;

// using xor
        int x1 = a[0];
        int x2 = 1;
        for (int i = 1; i < n; i++)
            x1 ^= a[i];
        for (int i = 2; i <= n + 1; i++)
            x2 ^= i;
        cout << (x1 ^ x2) << endl;
    }
    return 0;
}