#include<stdio.h>

int main()
{
    double n, sum_p = 0, sum_z = 0, sum_n = 0, a,b;

    scanf("%lf", &n);
    b = n;

    while(n--) {
        scanf("%lf", &a);
        if(a < 0)
            sum_n++;
        else if(a > 0)
            sum_p++;
        else
            sum_z++;
    }

    //sum_p /= b;

    printf("%0.06lf\n%0.06lf\n%0.06lf", sum_p/b, sum_n/b, sum_z/b);

    return 0;
}

