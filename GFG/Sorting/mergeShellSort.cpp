#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to merge two input arrays
// arr1[], arr2[]: input arrays
// n, m: size of arr1[] and arr2[] respectively
int gap(int g)
{
    if (g <= 1)
        return 0;
    return g / 2 + g % 2;
}
void merge(int a[], int b[], int n, int m)
{
    int g = n + m, i, j;
    for (g = gap(g); g > 0; g = gap(g))
    {
        for (i = 0; i + g < n; i++)
        {
            if (a[i] > a[i + g])
                swap(a[i], a[i + g]);
        }

        for (j = g - n > 0 ? g - n : 0; i < n && j < m; i++, j++)
        {
            if (a[i] > b[j])
                swap(a[i], b[j]);
        }

        if (j < m)
            for (j = 0; j + g < m; j++)
            {
                if (b[j] > b[j + g])
                    swap(b[j], b[j + g]);
            }
    }
}

// { Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        int arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        merge(arr1, arr2, n, m);

        for (int i = 0; i < n; i++)
            printf("%d ", arr1[i]);

        for (int i = 0; i < m; i++)
            printf("%d ", arr2[i]);

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends