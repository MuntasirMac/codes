#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,m=0,ans;
    cin >> t;
    while (t--)
    {
        int s,d;
        cin >> s >> d;
        while(m>=s) {
            s += d;
        }
        m = s;
    }
    
    printf("%d\n",m);
 
    return 0;
}