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

    if(n==1 || n==2) {
        cout << 1 << "\n";
        cout << 1 << "\n";
        return 0;
    }

    if(n<4) {
        cout << 2 << "\n";
        cout << 1 << " " << 3 << "\n";
    }

    else {
        cout << n << "\n";
        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = n; i >= 1; i-=2)
        {
            cout << i << " ";
        }
    }

    return 0;
}