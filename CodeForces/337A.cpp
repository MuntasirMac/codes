#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m, ans=1005;
    cin >>n >> m;
    int a[m+2];

    for(int i=0; i<m; i++)
        cin >> a[i];
    
    sort(a, a+m);

   
    for(int i=0; i<m-n+1; i++) {
        int x = a[i+n-1] - a[i];
        ans = min(ans,x);
    }
    
    printf("%d\n",ans);
    return 0;
}