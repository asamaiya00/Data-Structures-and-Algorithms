// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    //Function to reverse words in a given string.
    string reverseWords(string S) {
      // code here 
      vector <string> words;
      string currStr = "", ans = "";
      for (auto x: S) {

        if (x == '.') {
          words.push_back(currStr);
          currStr = "";
        } else
          currStr += x;
      }
      words.push_back(currStr);
      for (int i = words.size() - 1; i >= 1; i--) {
        ans += words[i] + ".";
      }
      ans += words[0];
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
    Solution obj;
    cout << obj.reverseWords(s) << endl;
  }
} // } Driver Code Ends