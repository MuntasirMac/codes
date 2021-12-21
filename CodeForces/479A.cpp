#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = max({a+b+c, (a+b)*c, a*(b+c),a*b*c});

    printf("%d\n", ans);

    return 0;
}