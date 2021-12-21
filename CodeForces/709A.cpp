#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,b,d,sum,a[1000005],cnt;
    scanf("%d %d %d",&n,&b,&d);
    sum = 0;
    cnt = 0;
    for(i=0; i<n; i++) 
        scanf("%d",&a[i]);
    for(i=0; i<n; i++) {
        if(a[i]<=b)
            sum = sum + a[i];
        if(sum > d) {
            cnt = cnt + 1;
            sum = 0;
        }
    }
		
		printf("%d\n",cnt);

    return 0;
}