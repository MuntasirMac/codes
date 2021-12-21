#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,t;
    scanf("%d", &t);
    int dp[31];
    dp[0]=1;
    dp[1]=2;
    for(i=2; i<30; i++) {
        dp[i] = 2<<i-1;
    }

    while(t--) {
        scanf("%d",&n);
        int ans,flag=0;
        for(x=2; x<30; x++) {
            if(n%(dp[x]-1)==0) {
                ans = n/(dp[x]-1);
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}