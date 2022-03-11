// { 	Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
	public:
		int findHeight(int N, int arr[]) {
			if (!arr[0]) 
				return 0;
			int height = 1;
			findHeightHelper(N - 1, arr, height);
			return height;
		}
	void findHeightHelper(int index, int arr[], int &height) {
		if (arr[index] == -1)
			return;
		height++;
		findHeightHelper(arr[index], arr, height);
	}
};

// { 	Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int N;
		cin >> N;
		int arr[N];
		for (int i = 0; i < N; i++)
			cin >> arr[i];

		Solution ob;
		cout << ob.findHeight(N, arr) << "\n";
	}
	return 0;
}	// } Driver Code Ends