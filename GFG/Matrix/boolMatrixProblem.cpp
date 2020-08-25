#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mat[n][m] = {0};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        vector<int> row(n), col(m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (mat[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (row[i] == 1 || col[j] == 1)
                {
                    mat[i][j] = 1;
                }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << mat[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}