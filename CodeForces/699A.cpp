#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    int n;
    string s;

    cin >> n >> s;
    int a[n+1], cnt, ans=INT_MAX;

    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n-1; i++) {
        if(s[i]=='R' && s[i+1]=='L') {
            cnt = abs(a[i+1]-a[i])/2;
            ans = min(ans,cnt);
        }        
    }

    if(ans!=INT_MAX) cout << ans << "\n";
    else cout << -1 << "\n";

    return 0;
}