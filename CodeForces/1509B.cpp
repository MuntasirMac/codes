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

bool solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> t, m;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t.push_back(i);
        else
            m.push_back(i);
    }
    if (t.size() != 2 * m.size())
        return false;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] < t[i] || m[i] > t[i + m.size()])
            return false;
    }
    return true;
}

int main()
{
    nfs;

    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES" : "NO") << '\n';
    }

    return 0;
}