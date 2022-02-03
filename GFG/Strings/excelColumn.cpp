// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string ExcelColumn(int N) {
      // Your code goes here
      string ans = "";
      while (N) {
        char c = 65 + (N - 1) % 26;
        ans += c;
        N = (N - 1) / 26;
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    Solution ob;
    cout << ob.ExcelColumn(n) << endl;
  }
  return 0;
}
// } Driver Code Ends