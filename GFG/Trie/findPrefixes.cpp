// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  struct TrieNode {
    int freq;
    TrieNode *child[26];
    TrieNode() {
      freq = 0;
      for (int i = 0; i < 26; i++)
        child[i] = NULL;
    }
  };

  void buildTrie(string word, TrieNode* node) {
    TrieNode *curr = node;
    for (char c: word) {
      int index = c - 'a';
      if (!curr -> child[index])
        curr -> child[index] = new TrieNode();
      curr -> child[index] -> freq++;
      curr = curr -> child[index];
    }
  }

  string getPrefix(string word, TrieNode* node) {
    TrieNode *curr = node;
    string prefix = "";
    for (char c: word) {
      int index = c - 'a';
      if (curr -> freq == 1)
        break;
      prefix += c;
      curr = curr -> child[index];

    }
    return prefix;
  }
  public:
    vector <string> findPrefixes(string arr[], int n) {
      //code here
      vector <string> ans;

      TrieNode *root = new TrieNode();
      for (int i = 0; i < n; i++)
        buildTrie(arr[i], root);

      for (int i = 0; i < n; i++)
        ans.push_back(getPrefix(arr[i], root));
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

    string arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    Solution ob;
    vector <string> ans = ob.findPrefixes(arr, n);

    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";

    cout << "\n";

  }

  return 0;
}
// } Driver Code Ends