//INOI1201
//Triathlon

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, i, sum = 0, hi = 0;
    
    scanf("%d", &n);
    
    pair<int, int> p[n+1];
    
    for(i=0; i<n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        
        p[i].first = b+c;
        p[i].second = a;
        
        sum = sum + a;
    }
    
    sort(p,p+n);
    
    for(i=0; i<n; i++) {
        hi = max(hi,p[i].first+sum);
        sum = sum - p[i].second;
    }
    
    printf("%d\n", hi);
    
    return 0;
}
