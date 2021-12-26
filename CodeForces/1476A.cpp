#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;

    int n,k,i,ans=0,t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if(n == k) ans = 1;
        else if(k>n) {
            if(k%n==0) {
                ans = k/n;
            }
            else ans = k/n+1;
        }
        else {
            if(n%k!=0) ans = 2;
            else ans = 1;
        }
         

        cout << ans << endl;
    }

    return 0;
}