#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int largest = -1, second = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                second = largest;
                largest = arr[i];
            }
            else if (arr[i] < largest && arr[i] > second)
            {
                second = arr[i];
            }
        }
        cout << second << '\n';
    }
    return 0;
}