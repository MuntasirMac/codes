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
    string s[104], st;
    int i, j, n, c[104], a = 0, m = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> s[i];
    if (n == 1)
    {
        cout << s[0] << endl;
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[j] == s[i])
            {
                c[i]++;
                a = a + c[i];
            }
        }
        if (c[i] > m)
        {
            m = c[i];
            st = s[i];
        }
        if (a == n)
            break;
    }

    cout << st << endl;

    return 0;
}