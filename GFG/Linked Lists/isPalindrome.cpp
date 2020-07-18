/*
Given a singly linked list of size N of integers, the task is to check if the given linked list is palindrome or not.

Input:
2
3
1 2 1
4
1 2 3 4
Output:
1
0
*/

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }

bool isPalindrome(Node *head)
{
    int len=0,k=0;
    Node *last=head;
    while (last){
        len++; last=last->next;
    }
    while(k<len/2){
        Node *h1 = head;
        for (int i = 0 ;i < k; i++){
            h1=h1->next;
        }
        Node *h2 = head;
        for (int i = 0 ;i < len - k -1; i++){
            h2=h2->next;
        }
        if (h1->data != h2->data) return 0;
    k++;
    }
    return 1;
}