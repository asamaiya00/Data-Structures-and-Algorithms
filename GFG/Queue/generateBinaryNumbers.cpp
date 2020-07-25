#include <iostream>
#include <queue>

using namespace std;
#define ll long long

// } Driver Code Ends

// Function to print all binary numbers upto n

vector<string> generate(ll n)
{

    vector<string> res;
    queue<string> q;
    string p = "1";
    q.push(p);
    res.push_back(p);
    while (n != res.size())
    {
        string temp = q.front();
        q.pop();
        res.push_back(temp + "0");
        q.push(temp + "0");
        if (res.size() == n)
            break;
        res.push_back(temp + "1");
        q.push(temp + "1");
    }
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends