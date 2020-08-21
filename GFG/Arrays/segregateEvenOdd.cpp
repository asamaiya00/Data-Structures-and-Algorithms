#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = a.size() - 1;
        while (l <= r)
        {
            if (a[l] % 2 == 1 && a[r] % 2 == 0)
                swap(a[l++], a[r--]);
            else if (a[l] % 2 == 0)
                l++;
            else
                r--;
        }
        sort(a.begin(), a.begin() + l);
        sort(a.begin() + l, a.end());

        for (int i : a)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}