#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends

int minEle = 2147483647;
/*Complete the function(s) below*/
void push(int a)
{
     if (a < minEle) minEle = a;
     s.push(a);
     //add code here.
}

bool isFull(int n)
{
     return (s.size() == n) ;
}

bool isEmpty()
{
    return s.empty();
}

int pop()
{
    int x= s.top();
    s.pop();
    return x;
    
}

int getMin()
{
    int x = minEle;
    minEle = 2147483647;
   return x;
}

