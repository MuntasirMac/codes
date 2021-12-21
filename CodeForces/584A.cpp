#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    scanf("%d %d", &n,&t);
    if(n==1 && t==10) {
        printf("-1\n");
        return 0;
    }
    if(t==10) n -= 2;
    else n -= 1;    

    printf("%d",t);
    for(i=0; i<n; i++)
        printf("0");
    printf("\n");
    
    return 0;
}