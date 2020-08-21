#include <iostream>
using namespace std;

int main()
{
    long fib[84];
    fib[0] = fib[1] = 1;
    for (int i = 2; i < 84; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cout << fib[i] << " ";
        cout << '\n';
    }
    return 0;
}