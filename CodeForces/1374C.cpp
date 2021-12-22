#include<bits/stdc++.h>
using namespace std;
 
#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
int main()
{
    nfs;
    int i,x,t;
    string s;

    cin >> t;

    while(t--) {
        cin >> x;
        cin >> s;
        int l = s.length();
        int ans=0, balance=0;

        for(i=0; i<l; i++) {
            if(s[i]=='(') {
                balance++;
            }
            else {
                balance--;
                if(balance < 0) {
                    balance = 0;
                    ans++;
                }
            }
        }
        

        cout << ans << endl;
    }
    
    return 0;
}