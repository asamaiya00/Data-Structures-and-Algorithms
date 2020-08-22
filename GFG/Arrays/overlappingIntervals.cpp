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
        vector<vector<int>> intervals;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            intervals.push_back({a, b});
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans = {};
        // if (intervals.size() == 0 ) return ans;
        vector<int> temp(intervals[0]);

        for (auto i : intervals)
        {
            if (i[0] <= temp[1])
            {
                temp[1] = max(temp[1], i[1]);
            }
            else
            {
                ans.push_back(temp);
                temp = i;
            }
        }
        ans.push_back(temp);
        for (auto i : ans)
            cout << i[0] << " " << i[1] << " ";
        cout << '\n';
    }

    return 0;
}