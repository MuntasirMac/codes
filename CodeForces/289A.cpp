#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int n,k,p=0;
    cin >> n >> k;
    p += n;

    while(n--) {
        int r,l;
        cin >> l >> r;
        p += r-l;
    }

    cout << (k - p%k)%k << "\n";

    return 0;
}