#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,m=INT_MIN;
    scanf("%d",&n);
    m = max(m,n);
    x = n/10;
    y = (x-(x%10)) + (n%10);
    m = max({m,x,y});

    printf("%d\n",m);

    return 0;
}