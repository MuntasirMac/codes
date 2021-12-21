#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x[4],i=0;
    cin >> x[0] >>x[1] >>x[2] >>x[3];
    int c = max({x[0],x[1],x[2],x[3]});

    while (i<4)
    {
        if(x[i] != c)
            printf("%d ",c-x[i]);
        i++;
    }
    
    return 0;
}