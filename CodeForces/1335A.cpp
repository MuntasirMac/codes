#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d",&x);
        if(x<3)
            y = 0;
        else
            y = (x-1)/2;
        
        printf("%d\n",y);
    }
    
    return 0;
}