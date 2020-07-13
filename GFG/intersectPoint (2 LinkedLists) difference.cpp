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

int intersectPoint(Node* head1, Node* head2)
{
    Node *p=head1,*q=head2;
    int l1=0,l2=0;
    while (p){
        l1++;
        p=p->next;
    }
    while (q){
        l2++;
        q=q->next;
    }
    int d=0;  //diff b/w lengths
    if (l2>l1){
        d=l2-l1;
        while(d--){
            head2=head2->next;
        }
    } else {
        d=l1-l2;
        while(d--){
            head1=head1->next;
        }
    }
    while (head1 && head2){
        if (head1->next == head2->next) return head1->next->data;
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
