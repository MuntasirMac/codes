#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

int main()
{
    nfs;
    ll n;
    cin >> n;
    ll a, b;
    vector<pair<ll, ll>> neg, pos;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a < 0)
            neg.push_back({a, b});
        else
            pos.push_back({a, b});
    }
    sort(pos.rbegin(), pos.rend());
    sort(all(neg));
    ll f = 0;
    ll s1 = pos.size(), s2 = neg.size(), res = 0;
    if (s1 > s2)
        f = 1;
    for (ll i = 0; i < n; i++)
    {
        if (f)
        {
            if (s1 == 0)
                break;
            res += pos.back().second;
            pos.pop_back();
            s1--;
            f = 0;
        }
        else
        {
            if (s2 == 0)
                break;
            res += neg.back().second;
            neg.pop_back();
            s2--;
            f = 1;
        }
    }
    cout << res << endl;

    return 0;
}