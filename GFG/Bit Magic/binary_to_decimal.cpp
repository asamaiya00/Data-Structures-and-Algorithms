// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
    // Code here.
    //  int ans = 0;
    //  for (int i = str.size() - 1; i >= 0; i--) {
    //    int mul = pow(2, (str.size() - i - 1));
    //    ans += mul * (str[i] - 48);
    //  }
    //  return ans;

      int ans = 0, p = 1;
      for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == '1')
          ans += p;
        p = p << 1;
      }

      return ans;
    }
};

// { Driver Code Starts.
int main() {
  int T;
  cin >> T;
  while (T--) {
    string str;
    cin >> str;
    Solution ob;
    int ans = ob.binary_to_decimal(str);
    cout << ans << "\n";
  }
  return 0;
} // } Driver Code Ends