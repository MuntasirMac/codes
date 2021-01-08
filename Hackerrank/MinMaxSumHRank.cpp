#include<stdio.h>

int main()
{
    int n, sum = 0, a[5], m=1, mn=100000000005;

    n = 5;

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] <= mn) mn = a[i];
        if(a[i] >= m) m = a[i];
        sum += a[i];
    }

    printf("%d %d\n", sum-m, sum-mn);

    return 0;
}
