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

    if(n==1) {
        cout << n << "\n";
        return 0;
    }

    if(n<4) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    if(n%2==1) {
        for (int i = n; i >= 1; i -= 2)
            cout << i << " ";
        for (int i = n - 1; i > 0; i -= 2)
            cout << i << " ";
    }

    else {
        for (int i = n-1; i >= 1; i -= 2)
            cout << i << " ";
        for (int i = n; i > 0; i -= 2)
            cout << i << " ";
    }
    cout << "\n";
    return 0;
}