#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, ele;
    vector<int> v;
    cin >> t;
    while (t--)
    {

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }
        int local = v[0], maxx = v[0];
        for (int i = 1; i < n; i++)
        {
            local = max(v[i], local + v[i]);
            maxx = max(local, maxx);
        }
        // for (auto i:v) cout<<i<<" ";
        // cout<<endl;
        cout << maxx << endl;

        v.clear();
    }
    return 0;
}