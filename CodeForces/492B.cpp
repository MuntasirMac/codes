#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n,l,mx=0;
    cin >> n >> l;
    int a[n+1];

    for(int i=0; i<n; i++) 
        cin >> a[i];
    sort(a,a+n);

    for(int i=1; i<n; i++) {
        if(a[i]-a[i-1] > mx)
            mx = a[i]-a[i-1];
    }

    double ans = max({(a[0]-0)/1.0, mx/2.0, (l-a[n-1])/1.0});

    cout.precision(10);
    cout << fixed << ans << "\n";

    return 0;
}