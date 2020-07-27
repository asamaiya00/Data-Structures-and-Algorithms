#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find first smallest positive
// missing number in the array
int missingNumber(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (a[i] >= 1 && a[i] <= n && a[a[i] - 1] != a[i])
            swap(a[a[i] - 1], a[i]);
    }
    for (int i = 0; i < n; i++)
        if (a[i] != i + 1)
            return i + 1;
    return n + 1;
}

// { Driver Code Starts.

int missingNumber(int arr[], int n);

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
        cout << missingNumber(arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends