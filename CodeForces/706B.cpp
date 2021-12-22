#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n;
    cin >> n;
    int x[n+1],q,m;

    for(int i=0; i<n; i++) {
        cin >> x[i];
    }

    sort(x,x+n);
    cin >> q;

    for(int i=0; i<q; i++) {
        cin >> m;
        int ans = upper_bound(x,x+n,m)-x;
        //if(x[ans]==m) cout << ans+1 << endl;
        cout << ans << endl;
    }
    
    return 0;
}