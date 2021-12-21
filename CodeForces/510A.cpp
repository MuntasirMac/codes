#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++) {
        if(i%2==1)
            for(j=1; j<=m; j++)
                printf("#");
        
        else {
            if((i/2)%2==1) {
                for(j=1; j<m; j++)
                    printf(".");
                printf("#");
            }

            else {
                printf("#");
                for (j=2; j<=m; j++)
                {
                    printf(".");
                }
                
            }
        }
        printf("\n");
    }

    return 0;
}