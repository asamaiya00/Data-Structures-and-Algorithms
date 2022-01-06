// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:

    string lcpUtil(string s1, string s2) {
      string common;
      int size1 = s1.length(), size2 = s2.length();
      for (int i = 0, j = 0; i <= size1 && j <= size2; i++, j++) {
        if (s1[i] != s2[j]) break;
        common.push_back(s1[i]);
      }
      return common.size() > 0 ? common : "-1";
    }
  string longestCommonPrefix(string arr[], int N) {
    // your code here
    string ans = arr[0];
    for (int i = 1; i <= N - 1; i++) {
      ans = lcpUtil(ans, arr[i]);
    }
    return ans.size() > 0 ? ans : "-1";
  }
};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; ++i)
      cin >> arr[i];

    Solution ob;
    cout << ob.longestCommonPrefix(arr, n) << endl;
  }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends