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
    int n, x, cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        if(x%i==0 && x/i<=n)
            cnt++;
    }

    
    cout << cnt << "\n";

    return 0;
}