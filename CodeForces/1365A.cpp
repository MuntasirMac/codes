#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

const int N = 51;

int n, m;
int a[N][N];

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        set<int> r, c;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    r.insert(i), c.insert(j);
            }
        }
        int mn = min(n - r.size(), m - c.size());
        if (mn % 2)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
}

int main()
{
    nfs;

    solve();

    return 0;
}