#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    int t;
    cin >> t;

    map<string, int> freq;

    for (int i = 0; i < t; i++)
    {
        int n, x = 0, y = 0;
        cin >> n;
        if ((n / 2) % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
                y = y + i;
            }
            for (int i = 1; i < n - 2; i = i + 2)
            {
                cout << i << " ";
                x = x + i;
            }
            cout << y - x << "\n";
        }

        else
            cout << "NO\n";
    }

    return 0;
}