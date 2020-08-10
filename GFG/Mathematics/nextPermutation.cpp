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
        vector<int> num(n);
        for (int i = 0; i < n; i++)
            cin >> num[i];
        int i;
        for (i = n - 1; i > 0; i--)
        {
            if (num[i] > num[i - 1])
                break;
        }
        if (i == 1 && num[i] <= num[i - 1])
        {
            sort(num.begin(), num.end());
            for (auto i : num)
                cout << i << " ";
            cout << '\n';
            continue;
        }
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] > num[i - 1] && num[j] < num[smallest])
                smallest = j;
        }

        swap(num[smallest], num[i - 1]);
        sort(num.begin() + i, num.end());
        for (auto i : num)
            cout << i << " ";
        cout << '\n';
    }

    //code
    return 0;
}