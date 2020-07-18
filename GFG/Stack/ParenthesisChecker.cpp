#include <iostream>
#include <stack>
using namespace std;

// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{   
    stack<char> s;
    for (auto i:x){
        if (i=='(' || i=='{' || i=='[') s.push(i);
        else {
            if (i && s.empty()) return 0;
            char o = s.top();
            // cout<<o<<" "<<i<<endl;
            if ((i==')' && o!='(') || (i=='}' && o!='{') || (i==']' && o!='[')) return 0;
            s.pop();
        }
    }
    
    return s.empty();
    
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends