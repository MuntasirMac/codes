#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    int n,k;
    cin >> n >> k;

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = 5 - a[i];
    }

    sort(a, a + n);

    int member = 0, team = 0;

    for (int i = n-1; i >=0; i--) {
        if(a[i] >= k) {
            member++;
            if(member == 3) {
                team++;
                member = 0;
            }
        }
    }

    cout << team << "\n";

    return 0;
}