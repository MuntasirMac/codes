#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    return (n*(n+1))/2;
}

int main()
{
    int n,k,w;
    scanf("%d %d %d", &k, &n, &w);
    int x = sum(w)*k - n;

    if(x < 0)
        x = 0;

    printf("%d\n",x);

    return 0;
}