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
    int n, k;
    cin >> k >> n;
    if(n==0) {
        if(k==1)
            cout << 0 << "\n";
        else
            cout << "No solution\n";
    }

    else {
        cout << n;
        for (int i = 1; i < k; i++)
            cout << 0;
    }

    return 0;
}