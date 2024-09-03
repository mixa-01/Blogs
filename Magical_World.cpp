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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll ans = 0;
       for (int i = 0; i < n; i++)
       {
        if(v[i] > 0)
        {
            ans = ans + 1;
        }
     
       }

       ans<=0?cout<<0:cout<<ans-1;

    }
    return 0;
}
