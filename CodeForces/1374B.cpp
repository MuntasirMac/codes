#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c2=0,c3=0;

        while (n%2==0) {
            c2++;
            n /= 2;
        }
        while (n%3==0)
        {
            c3++;
            n /= 3;
        }
        
        if(n==1 && c3>=c2) printf("%d\n",2*c3 - c2);
        else printf("-1\n");
    }
    
    return 0;
}