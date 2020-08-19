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
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        n++;
        n = n * (n + 1) / 2;
        cout << n - sum << endl;
    }
    return 0;
}