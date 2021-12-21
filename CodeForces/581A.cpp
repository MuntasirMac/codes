#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x, y,m,n;
    cin >> x >>y;

    m = min(x,y);
    n = max(x,y);
    n = (n-m)/2;
 
    printf("%d %d\n",m,n);
    
    return 0;
}