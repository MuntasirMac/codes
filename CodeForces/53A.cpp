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
    string s, t;
    vector<string> vec;
    cin >> s >> n;

    while (n--)
    {
        cin >> t;
        vec.push_back(t);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        if ((long long)vec[i].find(s) == 0)
        {
            cout << vec[i];
            return 0;
        }
    }

    cout << s;

    return 0;
}