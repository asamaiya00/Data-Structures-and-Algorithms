// { Driver Code Starts
// CPP program to find maximum sum
// by selecting a element from n arrays
#include<bits/stdc++.h>

using namespace std;

// To calculate maximum sum by
// selecting element from each array
int maximumSum(int n, int m, vector <vector<int>> & a);

// Driver program to test maximumSum
int main() {
  int t, n, m;
  cin >> t;
  while (t--) {
    cin >> n >> m;
    vector <vector<int>> arr(n, vector <int> (m, 0));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> arr[i][j];

    cout << maximumSum(n, m, arr) << endl;

  }
  return 0;

}
// } Driver Code Ends

int maximumSum(int n, int m, vector <vector<int>> & a) {
  // Complete the function

  int prevLargest = -32768;
  for (int x: a[n - 1]) {
    if (x > prevLargest)
      prevLargest = x;
  }
  int ans = prevLargest;

  for (int i = n - 2; i >= 0; i--) {
    int currLargest = -32768;
    for (int x: a[i]) {
      if (x < prevLargest && x > currLargest) {
        currLargest = x;
      }
    }
    if (currLargest == -32768) return 0;
    ans += currLargest;
    prevLargest = currLargest;
  }
  return ans;
}