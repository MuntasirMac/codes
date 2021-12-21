#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x, p, q, c=0;
    cin >> x;

    while(x--) {
        scanf("%d %d", &p,&q);
        if(q >= p+2)
            c++;
    }
 
    printf("%d\n", c);
    
    return 0;
}