// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int xorCal(int k) {
      // using loop
      
      for(int i=1;i<=100; i++)
         if((i ^ (i+1)) == k)
             return i;
         
      return -1;
      

      // without loop
      /* 
      
      n ^ (n+1) = k
      1 ^ 2 = 3
      2 ^ 3 = 1
      3 ^ 4 = 7
      4 ^ 5 = 1
      5 ^ 6 = 3
      6 ^ 7 = 1
      7 ^ 8 = 15
      8 ^ 9 = 1
      9 ^ 10 = 3

      for 3 & 4 (bitwise AND)
      011 & 100 = 000
      k & k+1 = 0, so answer will be n/2 (=1)
      
      for 7 & 8 
      0111 & 1000 = 0000
      k & k+1 = 0, so answer will be n/2 (=3)
      
      for 15 & 16
      01111 & 10000 = 00000
      k & k+1 = 0, so answer will be n/2 (=7)
      
      for any k the minimum n is the k/2, if k & (k+1) == 0
      */

      // even numbers give k==1, minimum is 2;
      if (k == 1) return 2;
      if ((k & (k + 1)) == 0) return k / 2;
      else return -1;
    }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t;
  while (t--) {
    int k;
    cin >> k;

    Solution ob;
    cout << ob.xorCal(k) << "\n";
  }
  return 0;
} // } Driver Code Ends