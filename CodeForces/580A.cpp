#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0,m=0;
    scanf("%d", &n);

    int a[n+4];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=1; i<n; i++) {
        if(a[i] >= a[i-1])
            count++;
        else
            count = 0;
        m = max(m,count);
    }

    printf("%d\n",m+1);

    return 0;
}