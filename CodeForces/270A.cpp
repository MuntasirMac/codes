#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int n,t;
    cin >> t;

    while(t--) {
        cin >> n;
        if(n<60) cout << "NO" << "\n";
        else if(360 % (180-n)==0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    
    return 0;
}