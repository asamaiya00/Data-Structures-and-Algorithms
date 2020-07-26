#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int transitionPoint(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

// Function to find the transition point
int transitionPoint(int a[], int n)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == 0 && a[mid + 1] == 1)
            return mid + 1;
        else if (a[mid] == 0)
        {
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    if (a[0] == 0)
        return -1;
    else
        return 0;
}