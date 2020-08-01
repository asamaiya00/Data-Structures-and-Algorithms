#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int mod = 1000000007;
        int n, r;
        cin >> n >> r;
        int C[r + 1] = {0};
        //  memset(C, 0, sizeof(C));

        C[0] = 1;

        for (int i = 1; i <= n; i++)
        {

            for (int j = min(i, r); j > 0; j--)
                C[j] = (C[j] % mod + C[j - 1] % mod) % mod;
        }
        cout << C[r] << endl;
    }
    return 0;
}