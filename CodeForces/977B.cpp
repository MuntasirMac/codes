#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i,j,res=0,cur;
    string s;
    cin >> n;
    cin >> s;
    char c[1];

    for(i=1; i<n; i++) {
        cur=0;
        for(j=1; j<n; j++) {
            if(s[i]==s[j] && s[i-1]==s[j-1])
                cur++;
        }
        if(cur > res) {
            res = cur;
            c[0]=s[i-1];
            c[1]=s[i];
        }
    }
    printf("%s\n",c);

    return 0;
}