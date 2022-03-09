#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

ll f(ll x) {
    return (x*x)+(2*x)+3;
}

int main()
{
    nfs;
    ll n;
    cin >> n;
    cout << f(f(f(n)+n)+f(f(n))) << "\n";

    return 0;
}