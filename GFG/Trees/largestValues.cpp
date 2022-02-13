// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
  int data;
  Node *left;
  Node *right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
  Node *temp = new Node;
  temp -> data = val;
  temp -> left = NULL;
  temp -> right = NULL;

  return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
  // Corner Case
  if (str.length() == 0 || str[0] == 'N')
    return NULL;

  // Creating vector of strings from input
  // string after spliting by space
  vector <string> ip;

  istringstream iss(str);
  for (string str; iss >> str;)
    ip.push_back(str);

  // Create the root of the tree
  Node *root = newNode(stoi(ip[0]));

  // Push the root to the queue
  queue <Node*> queue;
  queue.push(root);

  // Starting from the second element
  int i = 1;
  while (!queue.empty() && i < ip.size()) {

    // Get and remove the front of the queue
    Node *currNode = queue.front();
    queue.pop();

    // Get the current node's value from the string
    string currVal = ip[i];

    // If the left child is not null
    if (currVal != "N") {

      // Create the left child for the current node
      currNode -> left = newNode(stoi(currVal));

      // Push it to the queue
      queue.push(currNode -> left);
    }

    // For the right child
    i++;
    if (i >= ip.size())
      break;
    currVal = ip[i];

    // If the right child is not null
    if (currVal != "N") {

      // Create the right child for the current node
      currNode -> right = newNode(stoi(currVal));

      // Push it to the queue
      queue.push(currNode -> right);
    }
    i++;
  }

  return root;
}

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  /* Pre Order Traversal*/
  void preOrder(Node *root, vector<int> &ans, int currLevel) {
    if (!root)
      return;
    if (ans.size() == currLevel)
      ans.push_back(root -> data);
    else
      ans[currLevel] = max(root -> data, ans[currLevel]);
    preOrder(root -> left, ans, currLevel + 1);
    preOrder(root -> right, ans, currLevel + 1);
  }

  vector<int> largestValues(Node *root) {
    vector<int> ans;
    preOrder(root, ans, 0);
    return ans;
  }

  /* Level Order */    
  vector<int> largestValues(Node *root) {
    queue <Node*> q;
    q.push(root);
    vector<int> ans;
    while (!q.empty()) {
      int n = q.size(), maxx = INT_MIN;
      while (n--) {
        Node *temp = q.front();
        q.pop();
        if (temp -> data > maxx) maxx = temp -> data;
        if (temp -> left) {
          q.push(temp -> left);
        }
        if (temp -> right) {
          q.push(temp -> right);
        }
      }
      ans.push_back(maxx);
    }
    return ans;
  }

};

// { Driver Code Starts.
int main() {

  int t;
  cin >> t;
  getchar();
  while (t--) {

    string inp;
    getline(cin, inp);

    struct Node *root = buildTree(inp);
    Solution ob;
    vector<int> ans = ob.largestValues(root);

    for (int i = 0; i < ans.size(); i++)
      cout << ans[i] << " ";

    cout << "\n";
  }
  return 0;
} // } Driver Code Ends