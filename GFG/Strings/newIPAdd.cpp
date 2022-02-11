// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    string newIPAdd(string s) {
      //code here.
      string ans;
      int numberFound = false;
      for (char c: s) {
        if (c == '.') {
          if (!numberFound) {
            ans.push_back('0');
          }
          ans.push_back(c);
          numberFound = false;
        } else if (c == '0') {
          if (numberFound) {
            ans.push_back(c);
          }
        } else {
          numberFound = true;
          ans.push_back(c);
        }
      }
      // corner case - if the last part of ip is 000, e.g. - 255.255.255.000 
      if (!numberFound) {
        ans.push_back('0');
      }
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
    cout << ob.newIPAdd(s) << endl;
  }
}

// } Driver Code Ends