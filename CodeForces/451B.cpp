#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b, b+n);
    int l=0, r=n-1;
    while(l<n and a[l]==b[l])l++;
    while(r>=0 and a[r]==b[r])r--;
    int p=r;
    for(int i=l;i<r+1;i++)
    {
        if(a[i]!=b[p])
        {
            cout<<"no";
            return 0;
        }
        p--;
    }
    cout<<"yes\n";
    if(l>r)
        cout<<"1 1";
    else
        cout<<l+1<<' '<<r+1;
    return 0;
}