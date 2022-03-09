#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double n, i, s = 0, ans;
    scanf("%lf", &n);
    i = 0;
    while (s < n)
    {
        s += (5) * pow(2, i);
        i++;
    }
    s = s - (5 * pow(2, i - 1));
    // printf("%.0lf %.0lf\n",s,i);
    n = n - s;
    ans = ceil(n / pow(2, i - 1));
    // ans = ceil(ans);
    // int a = ans;
    // printf("%.0lf %.0lf",n,ans);
    if (ans == 1)
        printf("Sheldon\n");
    else if (ans == 2)
        printf("Leonard\n");
    else if (ans == 3)
        printf("Penny\n");
    else if (ans == 4)
        printf("Rajesh\n");
    else if (ans == 5)
        printf("Howard\n");

    return 0;
}