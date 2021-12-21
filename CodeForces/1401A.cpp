#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,t,ans;
    //string s;
    char c = 'a';
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&k);
        if(k>n)
            ans = k-n;
        else if(n%2==k%2)
            ans = 0;
        else ans = 1;
        printf("%d\n",ans);
    }
    
    return 0;
}