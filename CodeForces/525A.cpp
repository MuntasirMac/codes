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
    int n;
    cin >> n;
    string s;
    cin >> s;
    n = s.size();
    int cnt = 0;
    int mp[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            mp[s[i] - 'a']++;
        }
        else
        {
            if (mp[s[i] - 'A'])
            {
                mp[s[i] - 'A']--;
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}