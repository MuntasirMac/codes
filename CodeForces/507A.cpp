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
    int n, k,s=0;
    cin >> n >> k;
    pair<int, int> sum[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum[i].first = x;
        sum[i].second = i;
    }

    sort(sum + 1, sum + 1 + n);
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        s += sum[i].first;
        if(s>k)
            break;
        v.push_back(sum[i].second);
    }

    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    return 0;
}