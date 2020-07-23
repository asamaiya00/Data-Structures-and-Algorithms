#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long getMaxArea(long long arr[], int n){
      
    stack<int> s;
    int i = 0;
    long maxArea=0,area,top;
    
    while (i < n){
        
    if (s.empty() || arr[s.top()] <= arr[i]) s.push(i++);
    else {
        top = s.top();
        s.pop();
        area = arr[top] * (s.empty() ? i : i - s.top() - 1);
        
        if (maxArea < area) 
                maxArea = area; 
    }
    }
    while (!s.empty()){
        top = s.top();
        s.pop();
        area = arr[top] * (s.empty() ? i : i - s.top() - 1);
        
        if (maxArea < area) 
                maxArea = area; 
    }
        
    
    
    return maxArea;
}

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends