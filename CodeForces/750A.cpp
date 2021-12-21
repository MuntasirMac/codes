#include<bits/stdc++.h>
using namespace std;

int sum(int n) {
    return (n*(n+1))/2;
}

int main()
{
    int n,k,c;
    scanf("%d %d", &n, &k);
    k = 240 - k;
    int lo=0, hi=n;
    while(lo <= hi){
        int mid = (lo+(hi-lo)/2);
        int x = 5*sum(mid);
        if(x <= k) {
            c = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    if(c>=n)
        printf("%d\n",n);
    else
        printf("%d\n",c);

    return 0;
}