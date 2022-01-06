#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;

    string s;
    cin>>s;
    int n=s.length();
    int ans=(n-1)/2;
    int flag=0;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            ans++;
            flag=-1;
            break;
        }
    }
    if(flag==0&&n%2==0)
        ans++;
    cout<<ans<<endl;

    return 0;
}