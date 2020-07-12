/*
Given an array of integers that might contain duplicates, return all possible subsets.

Input:
2
3
1 2 2
4
1 2 3 3

Output:
()(1)(1 2)(1 2 2)(2)(2 2)
()(1)(1 2)(1 2 3)(1 2 3 3)(1 3)(1 3 3)(2)(2 3)(2 3 3)(3)(3 3)
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int i , t , n;
	cin >> t;
	while(t--){
	    cin>>n;
	    vector<int> arr;
	    for (i = 0; i < n; i++){
	        int temp;
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    vector<vector<int>> answer = {{}};
	    for (int s:arr){
	        int n = answer.size();
	        for (i = 0; i < n; i++){
	            vector <int> add = answer[i];
	            add.push_back(s);
	            sort(add.begin(),add.end());
	            answer.push_back(add);
	        }
	    }
	    sort(answer.begin(),answer.end());
	    set<vector<int>> s(answer.begin(),answer.end());
	    for (auto i:s) {
	        cout<<"(";
	        if (!i.empty()){
	            for (int j = 0 ; j< i.size(); j++) {
    	            if (j == i.size() - 1)
                        cout<<i[j];
                    else cout<<i[j]<<" ";
	            }
	    
	        }
	        cout<<")";
	    }
	    cout<<endl;
	}
	return 0;
}