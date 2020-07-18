#include <iostream>
#include <stack>
using namespace std;

void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends


void reverse(char *str, int len)
{

// Your code goes here
    stack<char> s;
    
    string orig(str);

    for (char i :orig){
        s.push(i);
    }
    string reverse;
    while(!s.empty()){
        reverse.push_back(s.top());
        s.pop();
    }
    for (int i = 0; i< len; i++){
        str[i]=reverse[i];
    }
}