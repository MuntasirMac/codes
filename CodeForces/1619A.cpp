#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t,n,i,j,b,x;
    cin >>t;
    while(t--) {
        string s;
        cin >> s;
        n = s.length();
        if(n%2==1) {printf("no\n"); continue;}
        else {
            x=n/2;
            b=0;
            for(i=0; i<x; i++) {
                if(s[i] == s[x+i])
                    b++;
            }
        }
        //printf("%d %d\n",b,x);
        if(b==n/2) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}