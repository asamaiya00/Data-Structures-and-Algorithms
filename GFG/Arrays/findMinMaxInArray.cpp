#include <iostream>
using namespace std;

int main()
{
    int i, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];

        int min = arr[0], max = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] < min)
                min = arr[i];
            else if (arr[i] > max)
                max = arr[i];
        cout << min << " " << max << endl;
    }
    return 0;
}
