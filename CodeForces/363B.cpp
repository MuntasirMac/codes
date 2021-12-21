#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,ans,x;
    scanf("%d %d",&n,&k);
    int a[n+1], sum[n]={0},m=INT_MAX;

    for(int i=1; i<=n; i++) {
        scanf("%d",&a[i]);
        sum[i] = sum[i-1]+a[i];
    }
    
    for(int i=1; i<=n-k+1; i++) {
        int p = sum[k+i-1] - sum[i-1];
        if(p<m) {
            m = p;
            ans = i;
        }
    }

    printf("%d\n",ans);
 
    return 0;
}