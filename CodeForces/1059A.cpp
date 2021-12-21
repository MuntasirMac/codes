#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,L,a;
    scanf("%d %d %d", &n, &L, &a);
    int t[n+4], l[n+4], sum=0;
    t[0] = 0;

    if(n>0) {
        for(int i=0; i<n; i++) {
            scanf("%d %d",&t[i], &l[i]);
            sum += l[i];
            if(i>0) {
                int add = t[i-1]+l[i-1];
                if(add != t[i])
                    sum -= (t[i]-add);
            }
        }
    }
    sum += t[0];

    //printf("%d %d\n",t[0], sum);

    int res = (L-sum)/a;

    printf("%d\n", res);

    return 0;
}