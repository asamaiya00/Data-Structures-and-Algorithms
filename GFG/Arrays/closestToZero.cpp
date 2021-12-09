// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestToZero(int arr[], int n) {
      // your code here 

      /*
      -32 -12 -6 13 29
        0   1  2  3  4
        f            l
      -38 -24 -17 -13 30 39 41 41 48 
      -67 -65 -37 -21 -18 4 
      -66 -60 -8
      */
      std::sort(arr, arr + n);
      int first = 0, last = n - 1, currSum;
      int ans = INT_MAX;

      if (arr[n - 1] < 0)
        return arr[n - 1] + arr[n - 2];
      else if (arr[0] > 0)
        return arr[0] + arr[1];

      while (first < last) {
        currSum = arr[first] + arr[last];
        //cout<<"first - "<<first<<" - last "<<last<<endl;
        if (currSum == 0) return 0;
        if (abs(currSum) < abs(ans))
          ans = currSum;
        else if (abs(ans) == abs(currSum)) {
          ans = max(ans, currSum);
        }   

        if (currSum < 0)
          first++;
        else
          last--;
      }
      return ans;
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
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    Solution ob;
    cout << ob.closestToZero(arr, n) << endl;
  }
} // } Driver Code Ends