//INOI1201
//Triathlon

#include<bits/stdc++.h>
using namespace std;

struct data
{
    int a, d;
};

bool cmp(data a, data b)
{
    return a.d > b.d;
}

int main()
{
    int n,x,y,z,i;
    
    scanf("%d", &n);
    
    struct data dt[n];
    
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        
        dt[i].a = x;
        dt[i].d = y+z;
    }
    
    sort(dt, dt+n, cmp);
    
    int ans = dt[0].d + dt[0].a;
    
    int prev = dt[0].a;
    
    for(i=1; i<n; i++) {
        prev += dt[i].a;
        ans = max(ans, prev + dt[i].d);
    }
    
    printf("%d\n", ans);
    
    return 0;
    
}
