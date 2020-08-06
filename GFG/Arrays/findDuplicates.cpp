#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

// by changing the array 

// vector<int> findDuplicates(vector<int>& nums) {
//      vector<int> ans;
//      for (int i = 0; i < nums.size(); i++) {
//          int n = abs(nums[i]);
//          if(nums[n - 1] < 0)
//              ans.push_back(n);
//          nums[n - 1] *= -1;      
//      }
//         return ans;
//     }


vector<int> duplicates(int a[], int size)
{
    vector<int> ans;
    for (int i = 0; i < size; i++)
        a[a[i] % size] += size;
    for (int i = 0; i < size; i++)
        if (a[i] / size > 1)
            ans.push_back(i);
    if (ans.empty())
        return {-1};
    return ans;
}
