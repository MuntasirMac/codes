#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >>n;
    
    while (n--)
    {
        string s;
        cin >> s;
        int l = s.length(),cn=0;

        for(int i=0; i<l; i++) {
            if(s[i]=='N')
                cn++;
        }
        if(cn==1) printf("NO\n");
        else printf("YES\n");
    }
    
    return 0;
}