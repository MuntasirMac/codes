#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if(k*k <= n && n%2==k%2) {
            printf("YES\n");
        }

        else
            printf("NO\n");
        
    }
    
    return 0;
}