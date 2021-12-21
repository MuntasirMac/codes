#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,d, count=0;
    scanf("%d",&n);
    d = n/11;
    char s[n+5];
    scanf("%s",s);
    for(int i=0; i<n; i++) {
        if(s[i] == '8')
            count++;
    }

    //printf("%d %d\n",d,count);

    if(d<count)
        ans = d;
    else
        ans = count;
    
    printf("%d\n",ans);

    return 0;
}