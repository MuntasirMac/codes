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
    
    int t;
    cin >> t;
    while(t--) {
        map<int, int> m;
        int n, mx = 0, ans;
        cin >> n;

        if(n==1)
            ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            m[x]++;
            mx = max(mx, m[x]);
        }
        if(mx > m.size())
            ans = m.size();
        else if(mx == m.size())
            ans = mx-1;
        else if(mx-1 == m.size())
            ans = m.size();
        else
            ans = mx;

        cout << ans << "\n";
    }

    return 0;
}