// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {

  public:
    string checkNum(int n) {
      switch (n) {
          case 10:
            return "a";
          case 11:
            return "b";
          case 12:
            return "c";
          case 13:
            return "d";
          case 14:
            return "e";
          case 15:
            return "f";
          default:
            return to_string(n);
      }

    }
  string decToHex(int n) {
    // 150
    // 18
    string hex = "";
    while (n) {
      hex += checkNum(n % 16);
      n /= 16;
    }
    return hex;
  }
  string encryptString(string S) {
    string ans = "";
    for (int i = 0; i < S.size();) {
      int count = 0;
      char c = S[i];
      while (i < S.size() && S[i] == c) {
        count++;
        i++;
      }
      ans += c;
      ans += decToHex(count);
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};

// { Driver Code Starts.
int main() {
  long long t;
  cin >> t;
  while (t--) {
    string S;
    cin >> S;

    Solution ob;
    cout << ob.encryptString(S) << endl;
  }
  return 0;
} // } Driver Code Ends