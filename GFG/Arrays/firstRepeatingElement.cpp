//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> um;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}
// } Driver Code Ends


//User function template in C++


// arr : given array
// n : size of the array
#include <unordered_map>
int firstRepeated(int arr[], int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++){
       mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++){
    
        if (mp[arr[i]]>1) return i+1;
    }
    return -1;
}
