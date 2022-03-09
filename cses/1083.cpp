#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    nfs;
    long long n, sum=0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    //cout << sum;
    cout << (n*(n+1))/2 - sum << "\n";

    return 0;
}