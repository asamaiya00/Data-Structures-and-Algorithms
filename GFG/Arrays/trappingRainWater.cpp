#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int height[], int n)
{
    // O(n) space

    // int left[n], right[n];

    // left[0] = arr[0];
    // right[n - 1] = arr[n - 1];

    // for (int i = 1; i < n; i++)
    // {
    //     left[i] = max(left[i - 1], arr[i]);
    // }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     right[i] = max(right[i + 1], arr[i]);
    // }

    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans += min(left[i], right[i]) - arr[i];
    // }

    // return ans;

    // O(1) space

    int l = 0, r = n - 1;
    int maxleft = 0, maxright = 0;
    int water = 0;
    while (l < r)
    {
        if (height[l] < height[r])
        {
            if (height[l] > maxleft)
                maxleft = height[l];
            else
                water += maxleft - height[l];
            l++;
        }
        else
        {
            if (height[r] > maxright)
                maxright = height[r];
            else
                water += maxright - height[r];
            r--;
        }
    }
    return water;
}

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends