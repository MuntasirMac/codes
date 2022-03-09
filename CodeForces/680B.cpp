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
    int a, n, cnt=0;

    cin >> n >> a;
    int x[n+2];

    for (int i = 1; i <= n; i++) {
        cin >> x[i];
        cnt += x[i];
    }
    int i = a - 1;
    int j = a + 1;

    while(i>0 && j<=n) {
        if(x[i] != x[j])
            cnt--;
        j++;
        i--;
    }

    cout << cnt << "\n";

    return 0;
}