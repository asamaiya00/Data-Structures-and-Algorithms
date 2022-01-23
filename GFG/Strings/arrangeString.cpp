// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string arrangeString(string str) {

      //code here.
      vector <int> freq(26);
      int sum = 0;
      for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 65 && str[i] <= 90)
          freq[str[i] - 65]++;
        else
          sum += str[i] - 48;
      }
      string ans = "";
      for (int i = 0; i < 26; i++)
        while (freq[i]--)
          ans += 65 + i;
      ans += to_string(sum);
      return ans;
    }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    Solution ob;
    cout << ob.arrangeString(s) << endl;
  }
  return 0;
}

// } Driver Code Ends