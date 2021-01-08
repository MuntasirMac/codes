#include<stdio.h>

int main()
{
    int a1,b1,c1,a2,b2,c2,sum_a = 0, sum_b = 0;

    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    if(a1 > a2)
        sum_a++;
    else if(a1 <a2)
        sum_b++;
    if(b1 > b2)
        sum_a++;
    else if(b1 < b2)
        sum_b++;
    if(c1 > c2)
        sum_a++;
    else if(c1 < c2)
        sum_b++;

    printf("%d %d\n", sum_a, sum_b);

    return 0;
}
