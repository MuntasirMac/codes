#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    int n,k,cnt=0;
    cin >> n >> k;
    int a[2*n+2];

    for(int i=0; i<2*n+1; i++)
        cin >> a[i];
    
    for(int i=1; i<2*n+1; i+=2) {
        if(a[i]-a[i-1]>=2 && a[i]-a[i+1]>=2) {
            a[i]--;
            cnt++;
            if(cnt==k) break;
        }
    }

    for(int i=0; i<2*n+1; i++)
        cout << a[i] << " ";

    return 0;
}