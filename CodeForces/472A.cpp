#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,x,y;

    scanf("%d",&n);
    if(n % 2 == 0) {
        x = 8;
        y = n - x;
    }
    else {
        x = 9;
        y = n - x;
    }

    printf("%d %d\n",x,y);
    
    return 0;
}