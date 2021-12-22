#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n,m,a,b,x,y,z,ans=INT_MAX;

    scanf("%d %d %d %d",&n,&m,&a,&b);

    x = ((n/m)*b)+(n%m*a);
    y = (n/m)*b+b;
    z = n*a;
    
    ans = min({x,y,z});

    printf("%d\n",ans);
    
    return 0;
}