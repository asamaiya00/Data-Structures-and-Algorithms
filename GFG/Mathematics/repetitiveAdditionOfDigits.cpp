#include <iostream>
using namespace std;

int main()
{
    int t, n, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 0)
            ans = 0;
        // else if (n % 9 == 0) ans=9;
        // else ans = n % 9;

        //These two cases can be merged in one.
        else
            ans = 1 + (n - 1) % 9;
        cout << ans << endl;
    }
    return 0;
}