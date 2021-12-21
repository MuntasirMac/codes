#include<stdio.h>
int main()
{
    int t,x,a,b;
    bool n;
    scanf("%d",&t);
 
    while(t--) {
        scanf("%d",&x);
        n = false;
        for(a=0; a<=33; a++) {
            for(b=0; b<=33; b++) {
                if(3*a + 7*b == x) {
                    n = true;
                    break;
                }
            }
        }
        if(n == true)
            printf("YES\n");
        else
            printf("NO\n");
    }
 
    return 0;
}