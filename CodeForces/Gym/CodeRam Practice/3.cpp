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
    ll n,sum=0;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        sum += 3 * a;
    }

    cout << sum << "\n";

    return 0;
}