#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            int sum = 0;
            for (int j = 1; j <= mp.size(); j++)
            {
                sum += mp[j - 1] * mp[mp.size() - j];
            }
            mp[i] = sum;
        }
        cout << mp[n] << endl;
    }
    return 0;
}