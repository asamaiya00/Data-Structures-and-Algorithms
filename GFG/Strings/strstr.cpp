#include <bits/stdc++.h>
using namespace std;

int strstr(string, string);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;

        cin >> a;
        cin >> b;

        cout << strstr(a, b) << endl;
    }
}
// } Driver Code Ends

/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int i = 0, j = 0;
    int ans = -1;
    while (i != s.size())
    {
        if (s[i] == x[0] && s[i + x.size() - 1] == x[x.size() - 1])
        {
            j = 0;
            while (j < x.size() && s[i] == x[j])
            {
                i++;
                j++;
            }
            if (j == x.size())
                return i - x.size();
        }
        i++;
    }
    return -1;

    //Your code here
}