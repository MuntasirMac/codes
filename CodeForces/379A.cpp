#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    scanf("%d %d", &a,&b);
    x = b;
    while (a >= b)
    {
        b = b+x;
        a++;
    }
    
    printf("%d\n",a);
    
    return 0;
}