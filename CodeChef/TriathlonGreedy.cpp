//INOI1201
//Triathlon

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, c, i, sum = 0, hi = 0, lo = 5000000, id;
    
    scanf("%d", &n);
    
    int a[n+1], d[n+1], ans;
    
    for(i=0; i<n; i++) {
        scanf("%d %d %d",&a[i],&b,&c);
        
        d[i] = b+c;
        sum += a[i];
        
        lo = min(lo,d[i]);
        
        if(d[i] > hi) {
            hi = d[i];
            id = i;
        }
    }
    
    if(d[id] > (sum+lo-a[id]))
            ans = a[id] + d[id];
        else
            ans = sum + lo;
    
        printf("%d\n", ans);
    
    return 0;
}
