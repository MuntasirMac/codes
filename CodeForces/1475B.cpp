#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x = n/2020;
        int r = n%2020;
        if(r > x)
            printf("NO\n");
        else
            printf("YES\n");
    }
    
    return 0;
}