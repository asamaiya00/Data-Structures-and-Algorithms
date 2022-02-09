// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
      int count = 0;
      while (n) {
        count += (n & 1);
        n = n >> 1;
      }
      return count;
    }
  void sortBySetBitCount(int arr[], int n) {
    // Your code goes here
    map <int,vector<int>> bitMap;

    for (int i = 0; i < n; i++)
      bitMap[setBits(arr[i])].push_back(arr[i]);
    int i = 0;
    for (auto it = bitMap.rbegin(); it != bitMap.rend(); it++) {

      for (auto x: it -> second)
        arr[i++] = x;
    }
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    Solution ob;
    ob.sortBySetBitCount(arr, n);
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
  return 0;
}
// } Driver Code Ends