// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector <int> search(string pat, string txt) {
      vector <int> ans;
      for (int i = 0; i <= txt.size() - pat.size(); i++) {
        if (txt.substr(i, pat.size()) == pat) {
          ans.push_back(i + 1);
        }
      }
      if (ans.size() == 0)
        return { -1 };
      return ans;
    }

};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    string S, pat;
    cin >> S >> pat;
    Solution ob;
    vector <int> res = ob.search(pat, S);
    if (res.size() == 0)
      cout << "-1 ";
    else
      for (int i: res)
        cout << i << " ";
    cout << endl;
  }
  return 0;
}

// } Driver Code Ends