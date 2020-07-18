// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{  stack<int> s;

    for (char i:str) {
        if (i>=48 && i<=57) s.push(i-48);
        else {
            int x = s.top(); s.pop(); 
            int y = s.top(); s.pop();  
            switch (i)  
            {  
            case '+':
                s.push(y + x);
                break;
            case '-':
                s.push(y - x);
                break;
            case '*':
                s.push(y * x);
                break;
            case '/':
                s.push(y / x);
                break;
            } 
        }
    }
    
    return s.top();
    // Your code here
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends