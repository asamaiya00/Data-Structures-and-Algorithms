#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a[x], b[y];
        for (int i = 0; i < x; i++)
            cin >> a[i];
        for (int i = 0; i < y; i++)
            cin >> b[i];
        int i = x - 1, j = 0;
        while (i >= 0 && j < y)
        {
            if (a[i] > b[j])
                swap(a[i], b[j]);
            i--;
            j++;
        }
        sort(a, a + x);
        sort(b, b + y);
        for (int i = 0; i < x; i++)
            cout << a[i] << " ";
        for (int i = 0; i < y; i++)
            cout << b[i] << " ";
        cout << "\n";
    }
    return 0;
}