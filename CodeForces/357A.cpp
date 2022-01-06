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

    int m, group1 = 0, children = 0, c[102], x, y;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> c[i];
        children += c[i];
    }

    cin >> x >> y;

    for (int i = 1; i <= m; i++)
    {
        group1 += c[i];

        if (group1 >= x && group1 <= y && children - group1 >= x && children - group1 <= y)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << 0;

    return 0;
}