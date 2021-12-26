#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;

    int n,L,c,x=0;

    cin >> n >> L >> c;
    int st[n+1], len[n+1];

    for(int i =0; i<n; ++i) {
        cin >> st[i] >> len[i];
    }

    if(n==0) {
        cout << L/c << "\n";
        return 0;
    }

    x += st[0] / c;
    for(int i=0; i<n-1; i++) {
        int gap = st[i+1] - (st[i]+len[i]);
        x += gap/c;
    }

    x += (L - (st[n-1] + len[n-1]))/c;

    cout << x << "\n";

    return 0;
}