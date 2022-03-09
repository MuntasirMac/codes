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
    ll int n,x;
    cin >> x;

    for (n = 1; n <= x; n++) {
        ll int ans = ((n * n) * ((n * n) - 1)) / 2 - 4 * (n - 1) * (n - 2);

        cout << ans << "\n";
    }

    return 0;
}