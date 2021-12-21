#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t;
    cin >> t;
    while (t--)
    {
        cin >> n;

        while (n%2==0) n /= 2;
        if(n==1) printf("NO\n");
        else printf("YES\n");
    }
    
    return 0;
}