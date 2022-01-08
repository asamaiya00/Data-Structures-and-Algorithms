// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    void generate(int N, int number, int currDigit, vector <int> & ans) {
      if (N == 0) {
        ans.push_back(number);
        return;
      }
      for (int i = currDigit; i <= 9; i++) {
        generate(N - 1, number * 10 + i, i + 1, ans);
      }
    }

  vector <int> increasingNumbers(int N) {
    // Write Your Code here
    if (N == 1) return {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector <int> ans;
    generate(N, 0, 1, ans);
    return ans;
  }
};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    int N;
    cin >> N;
    Solution ob;
    vector <int> ans = ob.increasingNumbers(N);
    for (auto num: ans) {
      cout << num << " ";
    }
    cout << endl;

  }
  return 0;
} // } Driver Code Ends