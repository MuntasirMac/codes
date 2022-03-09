#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll c = 0;
    ll d = 0;
    for (ll i = 0; i < n; i++)
    {
        m[a[i]]++;
        if (m[50] == 1 && m[25] < 1)
        {
            c++;
            break;
        }
        else if (m[50] == 1)
        {
            m[25]--;
            d++;
            m[50]--;
        }
        if (m[100] == 1)
        {
            m[100]--;
            if ((m[25] > 0 && d > 0))
            {
                m[25]--;
                d--;
            }
            else if (m[25] >= 3)
            {
                m[25] = m[25] - 3;
            }
            else
            {
                c++;
                break;
            }
        }
    }
    if (c == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    nfs;

    solve();

    return 0;
}