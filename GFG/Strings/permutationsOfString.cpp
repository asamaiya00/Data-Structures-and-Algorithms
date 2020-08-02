#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
vector<string> v;
void permute(string s, int l, int r)
{
    if (l == r)
        v.push_back(s);

    for (int i = l; i < r; i++)
    {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        permute(s, 0, s.size());
        
        sort(v.begin(), v.end());
        for (auto i : v)
            cout << i << " ";
        cout << '\n';
        v.clear();
    }
    return 0;
}