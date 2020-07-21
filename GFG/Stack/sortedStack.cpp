#include <iostream>
#include <stack>

using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{   stack<int> newStack;
    int temp;
    while(!s.empty()){
        temp = s.top();
        s.pop();
        while (!newStack.empty() && newStack.top()>temp){
            s.push(newStack.top());
            newStack.pop();
        }
        newStack.push(temp);
    }
    s=newStack;
   //Your code here
}