// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
Node* reverse(Node * head){
    Node *prev=NULL,*curr=head;
    while(curr){
        head = curr->next;
        curr->next = prev;
        prev = curr;
        curr = head;
    }
    return prev;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    Node *p = reverse(first);
    Node *q = reverse(second);
    
    Node *temp;
    int carry=0,sum=0;
    Node *head=new Node(0);
    temp=head;
    while(p || q){
        sum=0;
        sum = (p?p->data:0) + (q?q->data:0) + carry;
        temp->next = new Node(sum % 10);
        carry = sum / 10;
    
        temp=temp->next;
        if (p) p = p->next;
        if (q) q = q->next;
        
    }
     if (carry>0) temp->next = new Node(carry);
     head = reverse(head->next);
    return head;
}
