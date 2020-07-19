#include <iostream>
#include <stack>
using namespace std;

int precedence(char c){
    if (c=='^') return 3;
    else if (c=='*' || c=='/') return 2;
    else if (c=='+' || c=='-') return 1;
    else return 0;
}
int main() {
	int t; cin>>t;
	string exp;
	while(t--){
	    cin>>exp;
	    string ans="";
	    stack<char> s;
	    for (char i:exp){
	        if ((i>='A' && i<='Z') || (i>='a' && i<='z')) ans+=i;
	        else {
	           // cout<<"cur "<<i<<" "<<precedence(i)<<endl;
	            if (i=='(' || s.empty()) s.push(i);
	            else if (i==')'){
	                while (!s.empty() && s.top() != '('){
	                    char c = s.top();
	                    ans +=c;
	                    s.pop();
	                }
	                if (s.top()=='(') s.pop();
	            }
	            else if (!s.empty() && precedence(i)<=precedence(s.top())){
                    char c = s.top();
                    ans +=c;
                    s.pop();
                    s.push(i);
	            } else s.push(i);
	            
	        }
	    }
	    while (!s.empty()){
	        char c = s.top();
            ans +=c;
            s.pop();
	    }
	    cout<<ans<<endl;
	}
	return 0;
}