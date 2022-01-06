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
    int x,y,s;
    cin >> x >> y >> s;
    if (s < abs(x)+abs(y) || (s-abs(x)-abs(y))%2)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}