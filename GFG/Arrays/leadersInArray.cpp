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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        
        vector<int> ans;
        int m = -1;
        
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] >= m)
            {
                m = v[i];
                ans.push_back(m);
            }
        }
        reverse(ans.begin(), ans.end());
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }

    //code
    return 0;
}