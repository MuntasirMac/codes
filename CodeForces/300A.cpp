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
    int n;
    cin >> n;
    int i, a[n];
    // vector<int> neg,zero,pos;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << 1 << " " << a[0] << endl;
    if (a[n - 1] > 0)
    {
        cout << 1 << " " << a[n - 1] << endl;
        cout << n - 2;
        for (i = 1; i < n - 1; i++)
            cout << " " << a[i];
    }
    else
    {
        cout << 2 << " " << a[1] << " " << a[2] << endl;
        cout << n - 3;
        for (i = 3; i < n; i++)
            cout << " " << a[i];
    }

    return 0;
}