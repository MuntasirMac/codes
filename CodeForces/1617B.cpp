#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a,b,c=1;
        if(n%2==0) {
            x = (n-1)/2;
            a = x+1;
            b = x;
        }
            
        else {
            x = n/2;
            if(x%2==1) {
                a = x+2;
                b = x-2;
            }

            else {
                a = x+1;
                b = x-1;
            }            
        }        

        printf("%d %d %d\n",a,b,c);
    }
    
    return 0;
}