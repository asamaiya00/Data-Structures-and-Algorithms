// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

void printList(Node* node) {
  while (node != NULL) {
    cout << node -> data;
    node = node -> next;
  }
  cout << "\n";
}

// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node *head) {
      Node *prev = NULL, *nextNode = NULL, *curr = head;
      while (curr) {
        nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;
      }
      return prev;
    }

  Node* addOne(Node *head) {
    // Your Code here
    // return head of list after adding one
    if (head == NULL)
      return new Node(1);
    Node *revHead = reverse(head);
    int carry = 0;
    Node *temp = revHead;
    while (temp != NULL || carry == 1) {
      if (temp -> data == 9 && temp -> next == NULL) {
        Node *extra = new Node(1);
        temp -> data = 0;
        temp -> next = extra;
        break;
      }
      if (temp -> data < 9 && carry == 1) {
        temp -> data += carry;
        carry = 0;
        break;
      } else if (temp -> data < 9) {
        temp -> data++;
        break;
      } else {
        temp -> data = 0;
        carry = 1;
      }
      // cout<<temp->data<<" ";
      temp = temp -> next;
    }
    return reverse(revHead);
  }
};

// { Driver Code Starts.

int main() {
  int t;
  cin >> t; // { Driver Code Starts
  //Initial template for C++

  #include <bits/stdc++.h>

  using namespace std;

  struct Node {
    int data;
    struct Node *next;

    Node(int x) {
      data = x;
      next = NULL;
    }
  };

  void printList(Node *node) {
    while (node != NULL) {
      cout << node -> data;
      node = node -> next;
    }
    cout << "\n";
  }

  // } Driver Code Ends
  //User function template for C++

  /* 

  struct Node
  {
      int data;
      struct Node* next;
      
      Node(int x){
          data = x;
          next = NULL;
      }
  };

  */

  class Solution {
    public:
      Node *reverse(Node *head) {
        Node *prev = NULL, *nextNode = NULL, *curr = head;
        while (curr) {
          nextNode = curr -> next;
          curr -> next = prev;
          prev = curr;
          curr = nextNode;
        }
        return prev;
      }

    Node *addOne(Node *head) {
      // Your Code here
      // return head of list after adding one
      if (head == NULL)
        return new Node(1);
      Node *revHead = reverse(head);
      int carry = 0;
      Node *temp = revHead;
      while (temp != NULL || carry == 1) {
        if (temp -> data == 9 && temp -> next == NULL) {
          Node *extra = new Node(1);
          temp -> data = 0;
          temp -> next = extra;
          break;
        }
        if (temp -> data < 9 && carry == 1) {
          temp -> data += carry;
          carry = 0;
          break;
        } else if (temp -> data < 9) {
          temp -> data++;
          break;
        } else {
          temp -> data = 0;
          carry = 1;
        }
        temp = temp -> next;
      }
      return reverse(revHead);
    }
  };

  // { Driver Code Starts.

  int main() {
    int t;
    cin >> t;
    while (t--) {
      string s;
      cin >> s;

      Node *head = new Node(s[0] - '0');
      Node *tail = head;
      for (int i = 1; i < s.size(); i++) {
        tail -> next = new Node(s[i] - '0');
        tail = tail -> next;
      }
      Solution ob;
      head = ob.addOne(head);
      printList(head);
    }
    return 0;
  }
  // } Driver Code Ends
  while (t--) {
    string s;
    cin >> s;

    Node *head = new Node(s[0] - '0');
    Node *tail = head;
    for (int i = 1; i < s.size(); i++) {
      tail -> next = new Node(s[i] - '0');
      tail = tail -> next;
    }
    Solution ob;
    head = ob.addOne(head);
    printList(head);
  }
  return 0;
}
// } Driver Code Ends