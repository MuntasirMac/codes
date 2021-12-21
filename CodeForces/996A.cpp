#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    int x[] = {100,20,10,5,1};
    scanf("%d", &n);
    for(int i=0; i<5; i++) {
        if(n>=x[i]) {
            int s = n/x[i];
            c = c+s;
            n = n%x[i];
            //printf("%d %d %d %d\n",c,s,n,x[i]);
        }
        //printf("%d %d %d %d\n",c,s,n,x[i]);
    }

    printf("%d\n",c);

    return 0;
}