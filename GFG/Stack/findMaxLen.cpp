// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
      stack <int> indices;
      indices.push(-1);
      int ans = 0;
      for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
          indices.push(i);
        } else {
          indices.pop();
          if (indices.empty()) {
            indices.push(i);
          } else {
            // stack = 0;
            ans = max(ans, i - indices.top());
          }
        }
      }
      return ans;
      // code here
    }
};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    string S;
    cin >> S;
    Solution ob;
    cout << ob.findMaxLen(S) << endl;
  }
  return 0;
}
// } Driver Code Ends