#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        vector<ll> v;
        ll a;
        cin >> a;
        while (a--)
        {
            string ans;
            cin >> ans;
            if (ans[0] == '#')
            {
                v.push_back(1);
            }
            else if (ans[1] == '#')
            {
                v.push_back(2);
            }
            else if (ans[2] == '#')
            {
                v.push_back(3);
            }
            else if (ans[3] == '#')
            {
                v.push_back(4);
            }
        }
        for (int i = v.size()-1; i >=0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
