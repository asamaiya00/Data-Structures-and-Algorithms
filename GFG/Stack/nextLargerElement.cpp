#include <iostream>
#include <stack>
#include <vector>
#define ll long long
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while (t--){
	    cin>>n;
	    vector<ll> v(n);
	    vector<ll> ans(n,-1);
	    for (int i = 0; i < n; i++) cin>>v[i];
	    stack<ll> s;
	    
	    s.push(0);
	    for ( int i = 1; i < n; i++){
	        if (v[i] <= v[s.top()]) s.push(i);
	        else {
	            while (!s.empty() && v[i] > v[s.top()]) {
					ans[s.top()] = v[i];
					s.pop();
				}
	            s.push(i);
	        }
	    }
	    for (auto i: ans) cout << i << " ";
	    cout<<endl;
	    
	}
	return 0;
}