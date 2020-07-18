//Initial Template for C++

#include<bits/stdc++.h>

using namespace std;
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
struct node* update(struct node*start,int p);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start = NULL;
        struct node* cur = NULL;
        struct node* ptr = NULL;
        
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new node(a);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        struct node*str=update(start,p);
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->next;
        }
        cout<<endl;  
    }
}

 // } Driver Code Ends


//User function Template for C++

/*
struct node
{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};

1 2 3 4 5 6

Output:
3 4 5 6 1 2*/

struct node*update(struct node*start,int k)
{
    //Add your code here
    struct node *p=start;
    while(p->next){
        p=p->next;
    }
    p->next = start;
    start->prev = p;
    while(k--){
        p=p->next;
    }
    struct node *temp = p->next;
    p->next=NULL;
    temp->prev==NULL;
    return temp;
}

// { Driver Code Starts.
  // } Driver Code Ends