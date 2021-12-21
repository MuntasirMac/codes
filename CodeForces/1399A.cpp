#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    scanf("%d", &t);
    while (t--)
    {
        cin >> n;
        vector<int> x(n);
        for(auto &it:x) cin >>it;
        sort(x.begin(),x.end());
        bool ok = true;
        for(int i=1; i<n; i++) {
            ok &= (x[i]-x[i-1]<=1);
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}