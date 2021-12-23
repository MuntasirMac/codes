#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n;
    cin >> n;
    int x[n+1],q,m,sum[n+1];

    for(int i=0; i<n; i++) {
        cin >> x[i];
    }
    sum[0]=x[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i-1]+x[i];
    }
    

    //sort(x,x+n);
    cin >> q;

    for(int i=0; i<q; i++) {
        cin >> m;
        int ans = lower_bound(sum,sum+n,m)-sum;
        //if(x[ans]==m) cout << ans+1 << endl;
        cout << ans+1 << endl;
    }
    
    return 0;
}