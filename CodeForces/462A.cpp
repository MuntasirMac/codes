#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n;
    cin >> n;

    string s, cp, sv;

    while (n--)
    {
        cin >> s;
        sv += s;
    }

    cp = sv;
    reverse(all(sv));

    if(cp == sv)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}