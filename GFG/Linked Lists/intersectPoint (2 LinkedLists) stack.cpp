/*
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

Input:
First line of input is the number of test cases T. Every test case has four lines. First line of every test case contains three numbers, x (number of nodes before merge point in 1st list), y (number of nodes before merge point in 2nd list) and z (number of nodes after merge point). Next three lines contain x, y and z values.

Output:
Print the data of the node in the linked list where two linked lists intersects.

Example:
Input:
2
2 3 2
10 20
30 40 50
5 10
2 3 2
10 20
30 40 50
10 20
Output:
5
10
*/

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = nullptr;
  }
};

#include <stack>

int intersectPoint(Node* head1, Node* head2)
{
    stack<Node *> s1,s2;
    
    Node *p=head1;
    while (p) {
        s1.push(p);
        p=p->next;
    }
    p=head2;
    while (p) {
        s2.push(p);
        p=p->next;
    }
    while(s1.top() == s2.top()){
        p = s1.top();
        s1.pop(); s2.pop();
    }
    return p->data;
}