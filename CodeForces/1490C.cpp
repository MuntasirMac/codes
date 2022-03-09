#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

void solve()
{
    ll a, ans;
    cin >> a;
    for (ll i = 1; i * i * i <= a; i++)
    {
        ans = cbrt(a - (i * i * i));
        if (ans && (ans * ans * ans) == a - (i * i * i))
        {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
    return;
}

int main()
{
    nfs;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}