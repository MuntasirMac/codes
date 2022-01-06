#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int a,b,c;

    cin >> a >> b >> c;

    int ans = ceil((a*c - b*c)/(b*1.0));

    cout << ans << "\n";

    return 0;
}