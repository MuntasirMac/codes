#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,m,x;
    cin >> t;
    while (t--)
    {
        cin >> x >> n >> m;
        while (n-- && x>20)
        {
            x = x/2 + 10;
        }

        if(x<=m*10) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}