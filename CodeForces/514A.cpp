#include<bits/stdc++.h>
using namespace std;

#define nfs ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

int main()
{
    nfs;
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++) {
        if(s[i]-'0' > 4) {
            // if(i==0 && (s[i]=='0' || s[i]=='9')) s[i]=='9';
            s[i] = (9-(s[i]-'0')) + '0';
        }
    }
    if(s[0]=='0') s[0]='9';

    cout << s << "\n";

    return 0;
}