#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int t, m, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        vector<vector<int>> mat;
        for (i = 0; i < m; i++)
        {
            vector<int> row;
            for (j = 0; j < n; j++)
            {
                int temp;
                cin >> temp;
                row.push_back(temp);
            }
            mat.push_back(row);
        }
        int ans = -1, max = 0;

        for (i = 0; i < mat.size(); i++)
        {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            if (sum > max)
            {
                ans = i;
                max = sum;
            }
        }
        cout << ans << endl;
    }

    return 0;
}