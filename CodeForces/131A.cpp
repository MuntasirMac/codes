#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    string s;
    int cnt=0,l;
    cin >> s;
    l = s.length();
    
    for(int i=1; i<l; i++) {
        if(s[i]>=65 && s[i]<=90) {
            cnt++;
        }
    }
    if(cnt==l-1) {
        if(s[0]>=97 && s[0]<=122)
            s[0] -= 32;
        else s[0]+=32;
        for(int i=1; i<l; i++) {
            s[i] += 32;
        }
    }

    cout << s << endl;
    
    return 0;
}