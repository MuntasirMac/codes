#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    nfs;
    int s1, s2, s3, a, b, c;
    scanf("%d %d %d", &s1, &s2, &s3);
    a = sqrt(s1 * s3 / s2);
    b = sqrt(s1 * s2 / s3);
    c = sqrt(s2 * s3 / s1);

    printf("%d\n", 4 * (a + b + c));
    return 0;
}