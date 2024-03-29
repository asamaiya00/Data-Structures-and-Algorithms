// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
      unordered_map < int, int > freq;
      int sum = 0, count = 0;
      for (int i = 0; i < n; i++) {
        sum += arr[i] == 0 ? -1 : 1;
        if (sum == 0) count++;
        if (freq[sum])
          count += freq[sum];
        freq[sum]++;
      }
      return count;
    }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
      cin >> arr[i];
    Solution obj;
    cout << obj.countSubarrWithEqualZeroAndOne(arr, n) << "\n";
  }
  return 0;
}
// } Driver Code Ends