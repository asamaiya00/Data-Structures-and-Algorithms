#include <iostream>
#include <vector>
using namespace std;
// 1 3 5 7 9
// 2
// 5 7 9 1 3
// 4
// 9 1 3 5 7
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        k = k % n;
        vector<int> temp(arr.begin(), arr.begin() + k);
        vector<int> temp2(arr.begin() + k, arr.end());

        for (auto i : temp2)
            cout << i << " ";
        for (auto i : temp)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}