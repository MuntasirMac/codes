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
    int n, m, x[101], sum=0, res=1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if(sum + x[i] <= m)
            sum += x[i];
        else {
            res++;
            sum = x[i];
        }
    }

    cout << res << "\n";

    return 0;
}