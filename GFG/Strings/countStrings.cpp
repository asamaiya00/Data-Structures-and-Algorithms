// { 	Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
		long long countStrings(string S) {
            long long n = S.length();
			long long ans = (n - 1) *(n) / 2;
			vector < long long > freq(26, 0);
			bool repeated = false;

			for (auto i: S) freq[i - 'a']++;
			for (auto x: freq) {
                if (x > 1) repeated = true;
				ans -= ((x - 1) *x) / 2;
			}
			return repeated ? ans + 1 : ans;
		}
};

// { 	Driver Code Starts.
int main() {
    int t;
	cin >> t;
	while (t--) {
        string S;
		cin >> S;
		Solution ob;
		long long ans = ob.countStrings(S);
		cout << ans << endl;
	}
	return 0;
}	// } Driver Code Ends