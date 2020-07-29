#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s)
{
    int i = 0, j = 0;
    int curr = 0;
    while (curr != s && i != n)
    {
        curr = 0;
        curr = accumulate(arr + i, arr + j, curr);
        if (curr < s)
            j++;
        else if (curr > s)
            i++;
    }
    if (i == n)
    {
        cout << -1;
        return;
    }
    cout << i + 1 << " " << j;
    // Your code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        subarraySum(arr, n, s);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends