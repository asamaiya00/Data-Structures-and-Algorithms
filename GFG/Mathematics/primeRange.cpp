// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isPrime(int n) {
      for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
          return false;
      }
      return true;
    }
  vector <int> primeRange(int M, int N) {
    // code here
    vector <int> ans;
    for (int i = M; i <= N; i++) {
      if (i == 2) ans.push_back(2);
      else if (i <= 1 || !i & 1) continue;
      else if (isPrime(i))
        ans.push_back(i);
    }
    return ans;
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, M, K;
    cin >> M >> N;
    Solution ob;
    vector <int> ans = ob.primeRange(M, N);
    for (auto u: ans) cout << u << " ";
    cout << "\n";
  }
} // } Driver Code Ends