#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    scanf("%d %d", &n,&m);
    i = m;
    while(i<=n) {
        n++;
        i += m;
    }

    printf("%d\n",n);
    
    return 0;
}