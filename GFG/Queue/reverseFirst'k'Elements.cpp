//Initial Template for C++

#include<iostream>
#include<stack>
#include<queue>

using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    int n = q.size();
    stack<ll> s;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    k = q.size();
    while (!s.empty()){
        q.push(s.top());
        s.pop();
    }
   
    while (k--){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return q;
    //add code here.
}