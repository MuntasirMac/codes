#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    nfs;
    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a * (int)log10((b + 1)) << "\n";
    }
    
    return 0;
}