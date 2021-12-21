#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,sum=0,a[1000004];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    scanf("%d %d", &x, &y);

    if(x == y)
        sum = a[x];
    else {
        for(int i=x; i<=y; i++)
            sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}