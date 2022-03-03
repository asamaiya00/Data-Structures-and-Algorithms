// { 	Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		pair<int, int> endPoints(vector<vector<int>> matrix) {
			int rowSize = matrix.size(), colSize = matrix[0].size();
			int i = 0, j = 0;
			char direction = 'r';
			while (i < rowSize and j < colSize and i >= 0 and j >= 0) {
				switch (direction) {
					case 'r':
						if (matrix[i][j] == 0)
							j++;
						else {
							matrix[i][j] = 0;
							direction = 'd';
							i++;
						}
						break;
					case 'd':
						if (matrix[i][j] == 0)
							i++;
						else {
							matrix[i][j] = 0;
							direction = 'l';
							j--;
						}
						break;
					case 'l':
						if (matrix[i][j] == 0)
							j--;
						else {
							matrix[i][j] = 0;
							direction = 'u';
							i--;
						}
						break;
					case 'u':
						if (matrix[i][j] == 0)
							i--;
						else {
							matrix[i][j] = 0;
							direction = 'r';
							j++;
						}
						break;
				}
			}
			if (i < 0 || i >= rowSize || j < 0 || j >= colSize) {
				if (i >= rowSize) i--;
				if (j >= colSize) j--;
				if (i < 0) i++;
				if (j < 0) j++;
			}
			return {i, j};
		}
};

// { 	Driver Code Starts.

int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) {
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector < int>> matrix(row, vector<int> (col));

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		pair<int, int> p = obj.endPoints(matrix);

		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}	// } Driver Code Ends