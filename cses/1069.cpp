#include <bits/stdc++.h>
using namespace std;

#define nfs                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    nfs;
    string s;
    cin >> s;

    int cnt = 0, m=0;

    for(int i=1; i<s.size(); i++) {
        if(s[i] == s[i-1]) {
            cnt++;
            m = max(m, cnt);
        }
        else 
            cnt = 0;
    }

    cout << m+1 << "\n";

    return 0;
}