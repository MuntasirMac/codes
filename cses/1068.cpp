#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    nfs;
    long long n;
    cin >> n;
    while(1) {
        cout << n << " ";
        if(n==1)
            break;
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    cout << "\n";

    return 0;
}