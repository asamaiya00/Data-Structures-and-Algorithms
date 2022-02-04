// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {

  public:
    int transfigure(string A, string B) {
      // Your code goes here
      if (A.size() != B.size()) return -1;
      vector <int> freq(64, 0);
      for (int i = 0; i < A.size(); i++) {
        freq[A[i] - 'A']++;
        freq[B[i] - 'A']--;
      }
      for (auto x: freq)
        if (x)
          return -1;

      int i = A.size() - 1, j = B.size() - 1, ans = 0;
      while (i >= 0 && j >= 0) {
        if (A[i] != B[j]) {
          ans++;
          i--;
        } else {
          i--;
          j--;
        }
      }
      return ans;

    }
};
// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    string A, B;
    cin >> A >> B;
    Solution obj;
    cout << obj.transfigure(A, B) << endl;
  }
} // } Driver Code Ends