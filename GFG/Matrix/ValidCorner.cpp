// { 	Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		bool ValidCorner(const vector<vector < int>> &matrix) {
			if (!matrix.size()) return false;
			int rows = matrix.size(), columns = matrix[0].size();

			// this will contain pair of indices which has 1 in the row, 
			// if found that means already same pair is some previous row.
			vector<pair<int, int>> indices;
			
			for (int i = 0; i < rows; i++)
				for (int j = 0; j < columns; j++)
					for (int k = j + 1; k < columns; k++) {
						if (matrix[i][j] == 1 && matrix[i][k] == 1) {
							auto it = find(indices.begin(), indices.end(), make_pair(j, k));
							if (it != indices.end())
								return true;
							indices.push_back({ j, k });
						}
					}
			return false;
		}
};

// { 	Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int row, col;
		cin >> row >> col;

		vector<vector < int>> matrix(row);

		for (int i = 0; i < row; i++) {
			matrix[i].assign(col, 0);
			for (int j = 0; j < col; j++) {
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		if (ob.ValidCorner(matrix))
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}

// } Driver Code Ends