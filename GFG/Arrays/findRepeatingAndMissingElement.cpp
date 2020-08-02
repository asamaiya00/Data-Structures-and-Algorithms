#include <iostream>
using namespace std;

void repeatingAndMissing()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ a[i] ^ (i + 1); // xor with all elements and all numbers from 1 to n;
    }
    int bit = xor1 & ~(xor1 - 1); // right most bit which is 1.

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & bit)
            x ^= a[i];
        else
            y ^= a[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (i & bit)
            x ^= i;
        else
            y ^= i;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << x << " " << y << endl;
            return;
        }
    }
    cout << y << " " << x << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        repeatingAndMissing();
    }
    return 0;
}