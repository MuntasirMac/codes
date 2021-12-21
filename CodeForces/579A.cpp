#include<bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n" 
 
int main()
{
    IOS;
    int i,x,ans=0;

    scanf("%d",&x);
    while(x) {
        ans += x&1;
        x = x >> 1;
    }
    
    printf("%d\n",ans);
    
    return 0;
}
