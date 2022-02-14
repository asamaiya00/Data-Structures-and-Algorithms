// { 	Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str1, str2;
		cin >> str1 >> str2;
		cout << remAnagram(str1, str2);
		cout << endl;
	}
	return 0;
}
// } Driver Code Ends

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2) {
	// Your code goes here
	vector<int> freq(26);
	for (char x: str1)
		freq[x - 'a']++;
	for (char x: str2)
		freq[x - 'a']--;
	int sum = 0;
	for (int x: freq)
		sum += abs(x);
	return sum;
}