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
    ll a, b, x, y, n, x1, x2;
    cin >> a >> b >> x >> y >> n;
    x1 = max(a - n, x) * max(y, b - n + min(a - x, n));
    x2 = max(b - n, y) * max(x, a - n + min(b - y, n));
    cout << min(x1, x2) << "\n";
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