#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt0=0,cnt1=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='0')
            cnt0++;
        else
            cnt1++;
    }
    int ans = abs(cnt1 - cnt0);
    printf("%d\n",ans);

    return 0;
}