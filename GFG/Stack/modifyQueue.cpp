// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;
queue <int> modifyQueue(queue <int> q, int k);
int main() {
  int t;
  cin >> t;
  while (t--> 0) {
    int n, k;
    cin >> n >> k;
    queue <int> q;
    while (n--> 0) {
      int a;
      cin >> a;
      q.push(a);
    }
    queue <int> ans = modifyQueue(q, k);
    while (!ans.empty()) {
      int a = ans.front();
      ans.pop();
      cout << a << " ";
    }
    cout << endl;
  }
} // } Driver Code Ends

// User function Template for C++

// Function to reverse first k elements of a queue.
queue <int> modifyQueue(queue <int> q, int k) {
  // add code here.
  stack <int> s;
  while (k--) {
    s.push(q.front());
    q.pop();
  }

  int rem_size = q.size();

  while (!s.empty()) {
    q.push(s.top());
    s.pop();
  }
  
  while (rem_size--) {
    int temp = q.front();
    q.pop();
    q.push(temp);
  }

  return q;
}