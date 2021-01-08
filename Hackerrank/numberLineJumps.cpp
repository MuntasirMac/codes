#include<stdio.h>

int main()
{
    int x1,x2,v1,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v1 < v2) {
        printf("NO\n");
        return 0;
    }

    while(1) {
        x1 += v1;
        x2 += v2;

        if(x1 == x2) {
            printf("YES\n");
            return 0;
        }
        else if(x1 > x2) {
            printf("NO\n");
            return 0;
        }
    }

    return 0;
}
