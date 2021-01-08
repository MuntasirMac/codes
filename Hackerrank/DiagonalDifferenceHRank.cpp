#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    int a[n+1][n+1], sum_a=0, sum_b=0;

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }

    for(i=n-1,j=0; i>=0; i--,j++) {
        sum_a += a[i][i];
        sum_b += a[i][j];
    }

    printf("%d\n", abs(sum_a-sum_b));

    return 0;
}
