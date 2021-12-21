#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, p, q;
    cin >> n;
 
    while (n--)
    {
        cin >> p >> q;
        int ans = 0;

        if(p%q != 0) {
            int a = p%q;
            ans = q - a;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}