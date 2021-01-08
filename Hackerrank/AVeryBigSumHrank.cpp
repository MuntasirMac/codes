#include<stdio.h>

int main()
{
    long long int n, sum = 0, a;

    scanf("%lld", &n);

    while(n--) {
        scanf("%lld", &a);
        sum += a;
    }

    printf("%lld\n", sum);

    return 0;
}
