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
    double x[n], y[n],m=0;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n-1; i++) {
        for(int j=i+1; j<n; j++) {
            double a = sqrt(((x[j] - x[i]) * (x[j] - x[i])) + ((y[j] - y[i]) * (y[j] - y[i])));
            m = max(m, a);
        }
    }

    cout << fixed << setprecision(10) << m << "\n";

    return 0;
}