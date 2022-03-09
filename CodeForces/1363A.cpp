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
    int t,f[2];
    cin >> t;
    while (t--)
    {
        f[0] = f[1] = 0;
        int n, x, a;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            f[a % 2]++;
        }
        bool flag = 0;
        for (int i = 1; i <= f[1] && i <= x; i += 2) // Fix no of odd
        {
            int have = f[0], need = x - i;
            if (need <= f[0])
                flag = 1;
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}