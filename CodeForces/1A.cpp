#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,a;
    scanf("%lf %lf %lf", &n,&m,&a);


    double ans = ceil(m/a)*ceil(n/a);

    printf("%0.0lf\n", ans);

    return 0;
}