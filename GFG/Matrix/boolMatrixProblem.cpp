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


// O(1) solution

        int isCol = 0;
        for (int i = 0; i < n; i++)
        {
            if (mat[i][0] == 1)
                isCol = 1;
            for (int j = 1; j < m; j++)
                if (mat[i][j] == 1)
                {
                    mat[i][0] = 1;
                    mat[0][j] = 1;
                }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 1; j--)
                if (mat[i][0] == 1 || mat[0][j] == 1)
                    mat[i][j] = 1;
            if (isCol == 1)
                mat[i][0] = 1;
        }

// print
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << mat[i][j] << " ";
            cout << "\n";
        }
    }
    return 0;
}