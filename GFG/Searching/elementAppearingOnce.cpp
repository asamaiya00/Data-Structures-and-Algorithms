#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
	    for ( int i = 0; i < n; i++ ){
	        cin>>v[i];
	    }
	    int ans=0;
	    for ( auto i : v) 
	        ans = ans ^ i;
	    cout<<ans<<endl;
	}
	return 0;
}