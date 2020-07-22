#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n = 0,t;
	cin>>t;
	
	while (t--) {
	    stack<int> s;
	    cin>>n;
	    int arr[n], res[n];
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    for (int i = 0; i < n; i++){
	        while(!s.empty() && arr[s.top()] <= arr[i]) s.pop();
	        if (s.empty()) res[i] = i + 1;
	        else res[i] = i - s.top();
	        s.push(i);
	    }
	    for (auto i: res) cout<<i<<" ";
	
	    cout<<endl;
	}
	return 0;
}