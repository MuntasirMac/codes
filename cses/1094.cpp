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
    ll n, cnt=0, d=0;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    for(int i=0; i<n-1; i++) {
        d = 0;
        if (a[i + 1] < a[i])
        {
            d = abs(a[i] - a[i + 1]);
            a[i + 1] = a[i];
            cnt += d;
        }
    }

    cout << cnt << "\n";

    return 0;
}