#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t,a,b,c,d;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b >> c >>d;
        int x,y;
        x = n*max(a+b,a-b);
        y = n*min(a+b,a-b);

        if(x < c-d || y > c+d) 
            printf("No\n");
        else printf("Yes\n");
    }

    return 0;
}