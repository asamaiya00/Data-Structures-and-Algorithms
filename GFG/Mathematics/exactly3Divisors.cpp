//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++
bool isPrime(int n){
    int box=0;
    for ( int i=2; i<= sqrt(n) ;i++){
        if (n%i==0) box++;
    }
    return box==0;
}
//Complete this function
int exactly3Divisors(int N)
{   int count=0;
    vector<int> v;
    for (int i = 2; i*i <= N; i++){
        v.push_back(i*i);
    }                
        for (int i:v) 
            if (isPrime(sqrt(i))) count++;
    
    return count;
}


// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends