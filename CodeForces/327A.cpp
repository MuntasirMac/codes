#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;

    int n,sum=0,cnt=0,m=0;
    cin >> n;
    int x[n+1];

    for(int i=1; i<=n; i++) {
        cin >> x[i];
        if(x[i]==0) {
            cnt++;
        }
        else {
            sum++;
            cnt--;
        }
        if(cnt<0) cnt=0;
        m = max(m,cnt);
    }
        if(m) cout << m+sum << "\n";
        else cout << sum-1 << "\n";

    return 0;
}